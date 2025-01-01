/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 17:31:48 by biaroun           #+#    #+#             */
/*   Updated: 2025/01/01 21:19:06 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

MergeProcessor::MergeProcessor(){}

MergeProcessor::MergeProcessor(const MergeProcessor &instance){
	*this = instance;
}

MergeProcessor& MergeProcessor::operator=(const MergeProcessor &instance){
	this->input_vector = instance.input_vector;
	this->max_values = instance.max_values;
	this->min_values = instance.min_values;
	this->sorted_max_values = instance.sorted_max_values;
	this->number_pairs = instance.number_pairs;
	this->odd_value = instance.odd_value;

	this->input_deque = instance.input_deque;
	this->max_deque = instance.max_deque;
	this->min_deque = instance.min_deque;
	this->sorted_max_deque = instance.sorted_max_deque;
	this->number_pairs_deque = instance.number_pairs_deque;
	this->odd_diff = instance.odd_diff;
	return (*this);
}

MergeProcessor::~MergeProcessor(){}

void MergeProcessor::ValidateInputNumbers(char **args) {
    // Construire la liste des nombres à partir des arguments
    std::string number_list(args[1]);

    for (int i = 2; args[i]; i++) {
        number_list += " " + std::string(args[i]);
    }
    
    // Vérification des caractères non numériques
    for (size_t i = 0; i < number_list.size(); i++) {
        if (!(isdigit(number_list[i]) || number_list[i] == ' ')) {
            std::cerr << "Error: MergeProcessor accepts only numbers\n";
            return;
        }
    }

    //*************Vector Processing*************

    // Ajouter à vector et vérifier si l'ajout échoue
    if (AddToVector(number_list) == 1)
        return;
    
    // Affichage de la liste avant le traitement
    std::cout << "Before : ";
    for (size_t i = 0; i < input_vector.size(); i++) {
        std::cout << input_vector[i] << " ";
    }
    std::cout << std::endl;
    
    // Mesurer le temps de traitement
    std::time_t start_time = std::clock();
    
    // Exécution des différentes étapes de traitement
    CreatePairs();
    RecursiveInsert(0);
    sorted_max_values.reserve(input_vector.size());
    GenerateMaxValues();
    SortUsingInsertion();
    
    // Temps écoulé après traitement
    std::time_t end_time = std::clock();
    
    // Affichage des résultats après le traitement
    std::cout << "After : ";
    for (size_t i = 0; i < sorted_max_values.size(); ++i) {
        std::cout << sorted_max_values[i] << " ";
    }
    std::cout << std::endl << std::endl;

    // Calcul du temps de traitement en millisecondes
    float time_taken = float(end_time - start_time) / CLOCKS_PER_SEC * 1000.0;
    std::cout << "Time to process a range of " << input_vector.size() << " elements with std::vector: " << time_taken << " milliseconds" << std::endl;

    //**************Deque Processing**************

    // Ajouter à deque et vérifier si l'ajout échoue
    if (AddToDeque(number_list) == 1)
        return;
    
    // Mesurer le temps de traitement pour deque
    std::time_t start_time_d = std::clock();

    // Exécution des étapes de traitement pour deque
    CreatePairsDeque();
    RecursiveInsertDeque(0);
    GenerateMaxValuesDeque();
    SortUsingInsertionDeque();

    // Temps écoulé après traitement pour deque
    std::time_t end_time_d = std::clock();

    // Calcul du temps de traitement pour deque
    float time_taken_d = float(end_time_d - start_time_d) / CLOCKS_PER_SEC * 1000.0;
    std::cout << "Time to process a range of " << input_deque.size() << " elements with std::deque: " << time_taken_d << " milliseconds" << std::endl;
}

//*************Vector Functions*************

int MergeProcessor::AddToVector(std::string number_list) {
    std::string num_s;
    std::istringstream iss(number_list);

    while (iss >> num_s) {
        long num;
        std::istringstream(num_s) >> num;

        // Vérification de l'overflow avant d'ajouter à la liste
        if (num > INT_MAX) {
            std::cerr << "Error: INT MAX\n";
            return 1;
        }

        // Conversion explicite en int (pas de push_back automatique pour des types incompatibles)
        input_vector.push_back(static_cast<int>(num));
    }

    return 0;
}

void MergeProcessor::CreatePairs() {
    for (size_t i = 0; i + 1 < input_vector.size(); i += 2) {
        // Création de la paire 
        std::pair<long, long> p(input_vector[i], input_vector[i + 1]);
        number_pairs.push_back(p);
    }

    if (input_vector.size() % 2 != 0) {
        odd_value = input_vector.back();
    }
}


void MergeProcessor::RecursiveInsert(size_t index) {
    if (index >= number_pairs.size()) {
        return;
    }

    // Comparaison des éléments de la paire et ajout dans les vecteurs appropriés
    if (number_pairs[index].first >= number_pairs[index].second) {
        max_values.push_back(number_pairs[index].first);
        min_values.push_back(number_pairs[index].second);
    } else {
        min_values.push_back(number_pairs[index].first);
        max_values.push_back(number_pairs[index].second);
    }

    // Appel récursif avec l'index suivant
    RecursiveInsert(index + 1);
}

void MergeProcessor::GenerateMaxValues() {
    if (max_values.empty()) {
        return;
    }

    // Trouver l'élément minimal dans max_values
    int value = *std::min_element(max_values.begin(), max_values.end());

    // Retirer toutes les occurrences de cette valeur de max_values
    max_values.erase(std::remove(max_values.begin(), max_values.end(), value), max_values.end());

    // Ajouter la valeur trouvée dans sorted_max_values
    sorted_max_values.push_back(value);

    // Appel récursif pour continuer le tri
    GenerateMaxValues();
}

void MergeProcessor::SortUsingInsertion() {
    for (size_t i = 0; i < min_values.size(); ++i) {
        // Recherche de la position d'insertion avec lower_bound
        std::vector<int>::iterator position = std::lower_bound(sorted_max_values.begin(), sorted_max_values.end(), min_values[i]);
        // Insertion de l'élément à la position trouvée
        sorted_max_values.insert(position, min_values[i]);
    }

    if (input_vector.size() % 2 != 0) {
        // Recherche de la position d'insertion pour odd_value
        std::vector<int>::iterator position = std::lower_bound(sorted_max_values.begin(), sorted_max_values.end(), odd_value);
        // Insertion de odd_value dans sorted_max_values
        sorted_max_values.insert(position, odd_value);
    }
}

//*************Deque Functions*************

int MergeProcessor::AddToDeque(std::string number_list) {
    std::string num_s;
    std::istringstream iss(number_list);

    while (iss >> num_s) {
        long num;
        std::istringstream(num_s) >> num;

        if (num > INT_MAX) {
            std::cerr << "Error: Integer exceeds maximum value\n";
            return 1;
        }

        input_deque.push_back(num);  // Ajout à deque
    }
    return 0;
}


void MergeProcessor::CreatePairsDeque() {
    for (size_t i = 0; i + 1 < input_deque.size(); i += 2) {
        // Création de la paire et ajout à number_pairs_deque
        number_pairs_deque.push_back(std::make_pair(input_deque[i], input_deque[i + 1]));
    }

    if (input_deque.size() % 2 != 0) {
        odd_diff = input_deque.back();  // Gestion de l'élément impair
    }
}


void MergeProcessor::RecursiveInsertDeque(size_t index) {
    if (index >= number_pairs_deque.size()) {
        return;
    }

    // Insertion dans max_deque et min_deque
    if (number_pairs_deque[index].first >= number_pairs_deque[index].second) {
        max_deque.push_back(number_pairs_deque[index].first);
        min_deque.push_back(number_pairs_deque[index].second);
    } else {
        min_deque.push_back(number_pairs_deque[index].first);
        max_deque.push_back(number_pairs_deque[index].second);
    }

    // Appel récursif pour l'élément suivant
    RecursiveInsertDeque(index + 1);
}


void MergeProcessor::GenerateMaxValuesDeque() {
    if (max_deque.empty()) {
        return;
    }

    // Trouver la valeur minimale dans max_deque
    int value = *std::min_element(max_deque.begin(), max_deque.end());

    // Supprimer cette valeur de max_deque
    max_deque.erase(std::remove(max_deque.begin(), max_deque.end(), value), max_deque.end());

    // Ajouter la valeur à sorted_max_deque
    sorted_max_deque.push_back(value);

    // Appel récursif pour continuer à générer les max
    GenerateMaxValuesDeque();
}


void MergeProcessor::SortUsingInsertionDeque() {
    for (size_t i = 0; i < min_deque.size(); ++i) {
        // Recherche de la position d'insertion pour min_deque
        std::deque<int>::iterator position = std::lower_bound(sorted_max_deque.begin(), sorted_max_deque.end(), min_deque[i]);
        sorted_max_deque.insert(position, min_deque[i]);
    }

    if (input_deque.size() % 2 != 0) {
        // Recherche et insertion de odd_diff dans sorted_max_deque
        std::deque<int>::iterator position = std::lower_bound(sorted_max_deque.begin(), sorted_max_deque.end(), odd_diff);
        sorted_max_deque.insert(position, odd_diff);
    }
}

