/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 17:35:20 by biaroun           #+#    #+#             */
/*   Updated: 2025/01/01 21:09:04 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <cctype> 
#include <limits.h> 
#include <fstream>
#include <utility>
#include <deque>
#include <algorithm>
#include <ctime>
#include <iomanip>


class MergeProcessor {
    private :
        int odd_value;
        
        std::vector<int> input_vector;
        std::vector<int> max_values;
        std::vector<int> sorted_max_values;
        std::vector<int> min_values;
        std::vector<std::pair<int, int> > number_pairs;

        int odd_diff;
        
        std::deque<int> input_deque;
        std::deque<int> max_deque;
        std::deque<int> sorted_max_deque;
        std::deque<int> min_deque;
        std::deque<std::pair<int, int> > number_pairs_deque;

    public :
        MergeProcessor();
        MergeProcessor(const MergeProcessor &instance);
        MergeProcessor& operator=(const MergeProcessor &instance); 
        ~MergeProcessor();
        
        void ValidateInputNumbers(char **args);

        int AddToVector(std::string number_list);
        void CreatePairs();
        void RecursiveInsert(size_t index);
        void GenerateMaxValues();

        int AddToDeque(std::string number_list);
        void CreatePairsDeque();
        void RecursiveInsertDeque(size_t index);
        void GenerateMaxValuesDeque();
        
        void SortUsingInsertion();
        void SortUsingInsertionDeque();
};
