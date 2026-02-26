<div align="center">
  <img src="https://upload.wikimedia.org/wikipedia/commons/8/8d/42_Logo.svg" alt="42 logo" width="120"/>
  <h1>CPP Modules</h1>
  <p>Cursus C++ de 42 : <strong>module_00 à module_09</strong></p>

  <p>
    <img src="https://img.shields.io/badge/Language-C%2B%2B-00599C?logo=c%2B%2B&logoColor=white" alt="C++"/>
    <img src="https://img.shields.io/badge/Build-Makefile-427819?logo=gnu&logoColor=white" alt="Makefile"/>
    <img src="https://img.shields.io/badge/School-42-black?logo=42&logoColor=white" alt="42"/>
    <img src="https://img.shields.io/badge/Standard-C%2B%2B98-blue" alt="C++98"/>
  </p>
</div>

---

## 📚 Description

Ce dépôt regroupe mes exercices des **CPP Modules 42**.

Chaque module introduit progressivement des notions du C++ orienté objet :

- classes, encapsulation, orthodox canonical form
- héritage, polymorphisme, classes abstraites
- exceptions, templates, STL
- exercices pratiques par dossier `ex00`, `ex01`, etc.

---

## 🗂️ Structure

- `module_00/` à `module_09/` : modules du cursus C++
- Chaque module contient plusieurs exercices : `ex00/`, `ex01/`, ...
- Chaque exercice contient généralement :
  - `Makefile`
  - `inc/` ou `includes/` : headers
  - `src/` ou `sources/` : implémentation
- `template cpp/` : gabarit personnel pour démarrer un exercice

---

## ⚙️ Compilation

Depuis la racine d’un exercice :

```bash
cd module_XX/exYY
make
```

Puis exécuter le binaire généré (nom selon l’exercice), par exemple :

```bash
./<nom_du_binaire>
```

Nettoyage classique :

```bash
make clean
make fclean
make re
```

---

## 🚀 Objectif pédagogique

Ce dépôt sert à :

- pratiquer le C++98 dans le cadre 42
- travailler la qualité de conception orientée objet
- consolider les bases nécessaires aux projets C++ avancés

---

## ✅ Norme & qualité

- Compilation avec : `-Wall -Wextra -Werror`
- Exercices écrits selon les contraintes du sujet 42
- Organisation par module pour un suivi progressif

---

## 👤 Auteur

- `biaroun` — 42

---

## 📄 Licence

Projet académique 42.
Usage pédagogique et personnel.


```bash
make clean
make fclean
make re
```

---

## 🚀 Utilisation

1. Inclure le header dans ton projet :

```c
#include "libft.h"
```

2. Compiler avec la librairie :

```bash
gcc main.c -L. -lft -o program
```

---

## 🧠 Fonctions incluses

### Libc-like

- `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_isspace`
- `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strcat`
- `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`
- `ft_toupper`, `ft_tolower`
- `ft_atoi`, `ft_calloc`, `ft_strdup`

### Fonctions additionnelles

- `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`
- `ft_itoa`, `ft_strmapi`, `ft_striteri`
- `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### Bonus (`t_list`)

- `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`
- `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`
- `ft_lstiter`, `ft_lstmap`

### `ft_printf`

- `ft_printf`
- Helpers : `ftprintf_putchar`, `ftprintf_putstr`, `ftprintf_putnbr`, `ftprintf_putunbr`, `ftprintf_putunbr_base`, `ftprintf_putptr`

### `get_next_line`

- `get_next_line`
- `BUFFER_SIZE` défini dans `libft.h`

---

## ✅ Norme & qualité

- Code C compilé avec : `-Wall -Wextra -Werror`
- Organisation pensée pour les exigences du cursus 42

---

## 👤 Auteur

- `biaroun` — 42

---

## 📄 Licence

Projet académique 42.
Usage pédagogique et personnel.
