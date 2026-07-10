# Exercices Progressifs en Langage C

Un parcours structuré pour apprendre le C, de zéro à un niveau solide. Chaque section aborde un concept fondamental, avec des exercices classés par difficulté.

> **Conseil** : Compile chaque exercice avec les warnings activés :
> 
> ```bash
> gcc -Wall -Wextra -o exo exo.c
> ```

---

## 1. Bases et Entrées/Sorties

**Objectif** : Maîtriser `printf`, `scanf`, et les types fondamentaux.

### Débutant

| #   | Exercice                 | Description                                                                              |
| --- | ------------------------ | ---------------------------------------------------------------------------------------- |
| 1   | **Hello World**          | Afficher `"Bonjour tout le monde !"`                                                     |
| 2   | **Saisie de nom**        | Demander le prénom de l'utilisateur et afficher un message de bienvenue                  |
| 3   | **Calculatrice simple**  | Lire deux `int` et afficher leur somme, produit et différence                            |
| 4   | **Celsius → Fahrenheit** | Lire une température en Celsius et afficher l'équivalent Fahrenheit (`F = C * 9/5 + 32`) |

### Intermédiaire

| #   | Exercice             | Description                                                     |
| --- | -------------------- | --------------------------------------------------------------- |
| 5   | **Formatage**        | Afficher un `float` avec exactement 2 chiffres après la virgule |
| 6   | **Aire d'un cercle** | Demander le rayon, calculer l'aire avec `PI = 3.14159`          |
| 7   | **Somme et moyenne** | Lire 3 notes, afficher leur somme et leur moyenne               |

### Avancé

| #   | Exercice                 | Description                                                                       |
| --- | ------------------------ | --------------------------------------------------------------------------------- |
| 8   | **Conversion de temps**  | Lire un nombre de secondes et afficher au format `HH:MM:SS`                       |
| 9   | **Échange de variables** | Échanger deux `int` avec une variable temporaire, puis sans (astuce arithmétique) |

---

## 2. Variables et Opérateurs

**Objectif** : Comprendre les types, la conversion implicite, et les opérateurs.

### Débutant

| #   | Exercice               | Description                                                                   |
| --- | ---------------------- | ----------------------------------------------------------------------------- |
| 1   | **Taille des types**   | Afficher la taille en octets de `char`, `int`, `float`, `double` via `sizeof` |
| 2   | **Moyenne de 3 notes** | Calculer la moyenne de 3 `int` (attention à la division entière)              |
| 3   | **Modulo**             | Lire un `int` et afficher son reste modulo 7                                  |

### Intermédiaire

| #   | Exercice                 | Description                                             |
| --- | ------------------------ | ------------------------------------------------------- |
| 4   | **Puissance**            | Calculer x² et x³ sans `math.h` (uniquement avec `*`)   |
| 5   | **Périmètre et surface** | Calculer les deux à partir de la longueur et la largeur |
| 6   | **Swap arithmétique**    | Échanger deux variables avec `+` et `-` uniquement      |

### Avancé

| #   | Exercice                 | Description                                                            |
| --- | ------------------------ | ---------------------------------------------------------------------- |
| 7   | **Conversion d'unités**  | Convertir des mètres en pieds, pouces, et yards dans un seul programme |
| 8   | **Manipulation de bits** | Afficher la représentation binaire d'un `int` (opérateurs `&`, `>>`)   |

---

## 3. Structures de Contrôle

**Objectif** : Conditions (`if/else`, `switch`) et boucles (`for`, `while`, `do-while`).

### Débutant

| #   | Exercice                    | Description                                       |
| --- | --------------------------- | ------------------------------------------------- |
| 1   | **Pair ou Impair**          | Vérifier si un nombre saisi est pair ou impair    |
| 2   | **Maximum de 3**            | Trouver le plus grand parmi 3 nombres             |
| 3   | **Signe d'un nombre**       | Afficher si un nombre est positif, négatif ou nul |
| 4   | **Table de multiplication** | Afficher la table de 1 à 10 pour un nombre `n`    |

### Intermédiaire

| #   | Exercice               | Description                                                     |
| --- | ---------------------- | --------------------------------------------------------------- |
| 5   | **Factorielle**        | Calculer `n!` avec une boucle `for`                             |
| 6   | **Nombre premier**     | Vérifier si un nombre est premier (test de division jusqu'à √n) |
| 7   | **Triangle d'étoiles** | Afficher un triangle rectangle de hauteur `n`                   |
| 8   | **Compte à rebours**   | Afficher un countdown de `n` à 1, puis "Décollage !"            |

### Avancé

| #   | Exercice               | Description                                                             |
| --- | ---------------------- | ----------------------------------------------------------------------- |
| 9   | **Fibonacci**          | Afficher les `n` premiers termes de la suite (0, 1, 1, 2, 3, 5, …)      |
| 10  | **Nombre parfait**     | Vérifier si la somme des diviseurs propres = le nombre (ex : 6 = 1+2+3) |
| 11  | **Suite de Collatz**   | Pour un `n`, afficher la suite : pair → n/2, impair → 3n+1, jusqu'à 1   |
| 12  | **Spirale de nombres** | Afficher une matrice `n×n` remplie en spirale (1, 2, 3, …)              |

---

## 4. Fonctions

**Objectif** : Découper le code en fonctions, comprendre les paramètres et la portée.

### Débutant

| #   | Exercice           | Description                                                      |
| --- | ------------------ | ---------------------------------------------------------------- |
| 1   | **max2**           | Écrire `int max2(int a, int b)` qui retourne le plus grand       |
| 2   | **carré**          | Écrire `int carré(int x)` qui retourne x²                        |
| 3   | **afficher_table** | Afficher la table de multiplication d'un nombre via une fonction |

### Intermédiaire

| #   | Exercice                                   | Description                                                   |
| --- | ------------------------------------------ | ------------------------------------------------------------- |
| 4   | **signe**                                  | Retourne `1` si positif, `-1` si négatif, `0` si nul          |
| 5   | **est_premier**                            | Fonction qui retourne `1` si le nombre est premier, `0` sinon |
| 6   | **celsius_vers_fahrenheit** et inversement | Deux fonctions de conversion                                  |
| 7   | **puissance**                              | `int puissance(int base, int exposant)` sans `math.h`         |

### Avancé

| #   | Exercice                  | Description                                                              |
| --- | ------------------------- | ------------------------------------------------------------------------ |
| 8   | **Factorielle récursive** | Implémenter `n!` avec la récursivité                                     |
| 9   | **PGCD**                  | Algorithme d'Euclide (récursif) pour calculer le PGCD de deux nombres    |
| 10  | **Fibonacci récursif**    | Version récursive (puis optimisée avec mémoïsation)                      |
| 11  | **Jerusalemmee function** | Écrire `int jerusalem(int n)` — exercice classique de récursion complexe |

---

## 5. Tableaux (1D et 2D)

**Objectif** : Manipuler des collections de données, algorithmes de base sur tableaux.

### Débutant

| #   | Exercice               | Description                                           |
| --- | ---------------------- | ----------------------------------------------------- |
| 1   | **Somme**              | Calculer la somme des éléments d'un tableau `int[]`   |
| 2   | **Recherche linéaire** | Vérifier si un nombre `x` existe dans un tableau      |
| 3   | **Affichage**          | Afficher tous les éléments d'un tableau sur une ligne |

### Intermédiaire

| #   | Exercice      | Description                                            |
| --- | ------------- | ------------------------------------------------------ |
| 4   | **Min/Max**   | Trouver la valeur minimale et maximale                 |
| 5   | **Inversion** | Inverser les éléments d'un tableau (premier ↔ dernier) |
| 6   | **Comptage**  | Compter les occurrences d'un nombre dans un tableau    |
| 7   | **Fusion**    | Fusionner deux tableaux triés en un seul tableau trié  |

### Avancé

| #   | Exercice              | Description                                 |
| --- | --------------------- | ------------------------------------------- |
| 8   | **Tri à bulles**      | Implémenter le bubble sort                  |
| 9   | **Tri par insertion** | Implémenter l'insertion sort                |
| 10  | **Matrice 3×3**       | Additionner et multiplier deux matrices     |
| 11  | **Transposée**        | Calculer la transposée d'une matrice carree |

---

## 6. Chaînes de Caractères

**Objectif** : Travailler avec les `char[]`, le tableau de caractères se terminant par `\0`.

### Débutant

| #   | Exercice       | Description                                    |
| --- | -------------- | ---------------------------------------------- |
| 1   | **Longueur**   | Compter les caractères sans utiliser `strlen`  |
| 2   | **Copie**      | Copier une chaîne dans une autre sans `strcpy` |
| 3   | **Majuscules** | Convertir tous les caractères en majuscules    |

### Intermédiaire

| #   | Exercice                 | Description                                                   |
| --- | ------------------------ | ------------------------------------------------------------- |
| 4   | **Comptage de voyelles** | Compter le nombre de voyelles dans une phrase                 |
| 5   | **Palindrome**           | Vérifier si un mot se lit de la même façon dans les deux sens |
| 6   | **Inversement**          | Inverser une chaîne de caractères en place                    |
| 7   | **Comparaison**          | Écrire sa propre version de `strcmp`                          |

### Avancé

| #   | Exercice                 | Description                                                                             |
| --- | ------------------------ | --------------------------------------------------------------------------------------- |
| 8   | **Inversion de mots**    | Inverser l'ordre des mots dans une phrase (`"Bonjour le monde"` → `"monde le Bonjour"`) |
| 9   | **Rotation**             | Rotate une chaîne de `k` positions vers la gauche                                       |
| 10  | **Plus long palindrome** | Trouver le plus long sous-palindrome dans une chaîne                                    |

---

## 7. Pointeurs

**Objectif** : Comprendre les adresses, le déréférencement, et l'arithmétique des pointeurs.

### Débutant

| #   | Exercice              | Description                                                          |
| --- | --------------------- | -------------------------------------------------------------------- |
| 1   | **Adresse et valeur** | Afficher l'adresse (`&`) et la valeur d'une variable via un pointeur |
| 2   | **Somme par adresse** | Calculer la somme de deux nombres en passant leurs adresses          |
| 3   | **Null check**        | Vérifier qu'un pointeur n'est pas `NULL` avant de l'utiliser         |

### Intermédiaire

| #   | Exercice                   | Description                                                          |
| --- | -------------------------- | -------------------------------------------------------------------- |
| 4   | **Swap par pointeurs**     | Écrire `void swap(int *a, int *b)`                                   |
| 5   | **Parcours de tableau**    | Afficher un tableau avec l'arithmétique des pointeurs (`*(tab + i)`) |
| 6   | **Tri de pointeurs**       | Trier un tableau de pointeurs vers `int` selon la valeur pointée     |
| 7   | **Réverser via pointeurs** | Inverser un tableau uniquement avec des pointeurs                    |

### Avancé

| #   | Exercice                   | Description                                                              |
| --- | -------------------------- | ------------------------------------------------------------------------ |
| 8   | **Allocation dynamique**   | Créer un tableau avec `malloc`, le remplir, l'afficher, puis `free`      |
| 9   | **Réallocation**           | Utiliser `realloc` pour agrandir un tableau dynamique                    |
| 10  | **Liste chaînée**          | Implémenter une liste chaînée simple (insertion, suppression, affichage) |
| 11  | **Tri rapide (pointeurs)** | Implémenter quicksort en utilisant uniquement des pointeurs              |

---

## 8. Structures

**Objectif** : Créer des types personnagés, manipuler des structures et des tableaux de structures.

### Débutant

| #   | Exercice        | Description                                                                        |
| --- | --------------- | ---------------------------------------------------------------------------------- |
| 1   | **Point 2D**    | Créer une struct `Point { int x; int y; }`, l'initialiser et l'afficher            |
| 2   | **Couleur RGB** | Créer une struct `Couleur { int r, g, b; }` et l'afficher au format `rgb(r, g, b)` |

### Intermédiaire

| #   | Exercice        | Description                                                                     |
| --- | --------------- | ------------------------------------------------------------------------------- |
| 3   | **Etudiant**    | Struct `Etudiant { char nom[50]; int age; float note; }` + fonction d'affichage |
| 4   | **Distance**    | Calculer la distance entre deux `Point` avec la formule euclidienne             |
| 5   | **Comparaison** | Écrire une fonction qui compare deux `Etudiant` par leur note                   |

### Avancé

| #   | Exercice                | Description                                                                    |
| --- | ----------------------- | ------------------------------------------------------------------------------ |
| 6   | **Tableau de produits** | 5 `Produits` (nom, prix, quantité) → valeur totale du stock                    |
| 7   | **Tri d'étudiants**     | Trier un tableau d'`Etudiant` par note décroissante                            |
| 8   | **Annuaire**            | Mini-annuaire : ajouter, rechercher, supprimer des contacts (struct + tableau) |

---

## 9. Fichiers

**Objectif** : Lire et écrire dans des fichiers, manipuler des flux.

### Intermédiaire

| #   | Exercice             | Description                                                       |
| --- | -------------------- | ----------------------------------------------------------------- |
| 1   | **Écriture**         | Écrire `"Hello C Files"` dans `test.txt` avec `fprintf`           |
| 2   | **Lecture**          | Lire `test.txt` caractère par caractère avec `fgetc`              |
| 3   | **Copie de fichier** | Copier le contenu d'un fichier source vers un fichier destination |

### Avancé

| #   | Exercice               | Description                                                                        |
| --- | ---------------------- | ---------------------------------------------------------------------------------- |
| 4   | **Compteur de lignes** | Compter le nombre de lignes dans un fichier texte                                  |
| 5   | **Fichier CSV**        | Lire un fichier CSV (nom,prenom,age) et afficher les données sous forme de tableau |
| 6   | **Statistiques**       | Lire un fichier de nombres et calculer : min, max, moyenne, médiane                |
| 7   | **Journal d'erreurs**  | Écrire les erreurs d'un programme dans un fichier log avec horodatage              |

---

## 10. Projet Final (Bonus)

Pour consolider toutes les compétences acquises :

| #   | Projet                        | Description                                                               |
| --- | ----------------------------- | ------------------------------------------------------------------------- |
| 1   | **Gestionnaire de contacts**  | CRUD complet avec structures, tableaux dynamiques, et persistance fichier |
| 2   | **Jeu du pendu**              | Version console avec lecture de fichier de mots, comptage de tentatives   |
| 3   | **Calculatrice scientifique** | Interface CLI avec fonctions, switch, et gestion d'erreurs                |
| 4   | **Mini-shell**                | Simuler un terminal basique : exécuter des commandes avec `fork`/`exec`   |

---

## Aide-mémoire rapide

```c
// Structure
typedef struct {
    char nom[50];
    int age;
} Etudiant;

// Allocation dynamique
int *tab = malloc(n * sizeof(int));
// Vérification obligatoire !
if (tab == NULL) { /* erreur */ }
free(tab);

// Pointeur et fonction
void doubler(int *x) { *x *= 2; }

// Fichier
FILE *f = fopen("texte.txt", "r");
if (f != NULL) {
    // lecture...
    fclose(f);
}
```
