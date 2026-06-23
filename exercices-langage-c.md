# Exercices Progressifs en Langage C

Ce document contient une série d'exercices pour apprendre et se perfectionner en langage C. Les exercices sont classés par thématique et par difficulté croissante.

---

## 1. Bases et Entrées/Sorties
### Niveau Débutant
1.  **Hello World** : Écrire un programme qui affiche "Bonjour tout le monde !".
2.  **Saisie de nom** : Demander à l'utilisateur son prénom et l'afficher avec un message de bienvenue.
3.  **Calculatrice simple** : Demander deux nombres entiers et afficher leur somme, produit et différence.

### Niveau Intermédiaire
4.  **Formatage de sortie** : Afficher un nombre réel (float) avec exactement 2 chiffres après la virgule.
5.  **Calcul d'aire** : Demander le rayon d'un cercle et calculer son aire (utiliser `3.14159`).

### Niveau Avancé
6.  **Conversion de temps** : Lire un nombre de secondes et le convertir en heures, minutes et secondes (format `HH:MM:SS`).

---

## 2. Variables et Opérateurs
### Niveau Débutant
1.  **Échange de valeurs** : Échanger le contenu de deux variables entières sans utiliser de troisième variable (optionnel : avec une variable temporaire d'abord).
2.  **Moyenne** : Calculer la moyenne de trois notes entières (attention à la division réelle).

### Niveau Intermédiaire
3.  **Calcul de puissance** : Calculer $x^2$ et $x^3$ pour un nombre $x$ donné sans utiliser la bibliothèque `math.h`.
4.  **Périmètre et surface** : Calculer le périmètre et la surface d'un rectangle à partir de sa longueur et largeur.

---

## 3. Structures de Contrôle (Conditions et Boucles)
### Niveau Débutant
1.  **Pair ou Impair** : Vérifier si un nombre saisi est pair ou impair.
2.  **Maximum de trois** : Trouver le plus grand parmi trois nombres saisis.
3.  **Table de multiplication** : Afficher la table de multiplication d'un nombre $n$ (de 1 à 10).

### Niveau Intermédiaire
4.  **Factorielle** : Calculer la factorielle d'un nombre $n$ ($n! = 1 \times 2 \times \dots \times n$).
5.  **Nombre Premier** : Déterminer si un nombre $n$ est premier.
6.  **Triangle d'étoiles** : Afficher un triangle rectangle d'étoiles de hauteur $n$.
    ```
    *
    **
    ***
    ****
    ```

### Niveau Avancé
7.  **Suite de Fibonacci** : Afficher les $n$ premiers termes de la suite de Fibonacci.
8.  **Nombre Parfait** : Vérifier si un nombre est "parfait" (la somme de ses diviseurs propres est égale au nombre lui-même, ex: 6 = 1+2+3).

---

## 4. Fonctions
### Niveau Débutant
1.  **Fonction Max** : Écrire une fonction `max2(a, b)` qui retourne le plus grand de deux nombres.
2.  **Fonction Carré** : Écrire une fonction qui calcule le carré d'un nombre.

### Niveau Intermédiaire
3.  **Vérification de signe** : Créer une fonction qui retourne 1 si un nombre est positif, -1 s'il est négatif, et 0 s'il est nul.
4.  **Conversion Celsius/Fahrenheit** : Écrire deux fonctions de conversion de température.

### Niveau Avancé
5.  **Récursivité** : Écrire une fonction récursive pour calculer la factorielle d'un nombre.
6.  **PGCD** : Calculer le Plus Grand Commun Diviseur de deux nombres en utilisant l'algorithme d'Euclide (version récursive).

---

## 5. Tableaux (1D et 2D)
### Niveau Débutant
1.  **Somme d'un tableau** : Calculer la somme des éléments d'un tableau d'entiers.
2.  **Recherche** : Vérifier si un nombre $x$ existe dans un tableau.

### Niveau Intermédiaire
3.  **Inversion** : Inverser les éléments d'un tableau (le premier devient le dernier, etc.).
4.  **Minimum/Maximum** : Trouver la valeur minimale et maximale dans un tableau.

### Niveau Avancé
5.  **Tri à bulles** : Implémenter l'algorithme de tri à bulles pour trier un tableau.
6.  **Matrices** : Additionner deux matrices de taille 3x3.

---

## 6. Chaînes de Caractères
### Niveau Débutant
1.  **Longueur** : Compter le nombre de caractères d'une chaîne sans utiliser `strlen`.
2.  **Copie** : Copier une chaîne dans une autre sans utiliser `strcpy`.

### Niveau Intermédiaire
3.  **Voyelles** : Compter le nombre de voyelles dans une phrase.
4.  **Palindrome** : Vérifier si un mot est un palindrome (se lit de la même façon dans les deux sens).

### Niveau Avancé
5.  **Inversion de phrase** : Inverser l'ordre des mots dans une phrase (ex: "Bonjour tout le monde" -> "monde le tout Bonjour").

---

## 7. Pointeurs
### Niveau Débutant
1.  **Manipulation de base** : Afficher l'adresse et la valeur d'une variable via un pointeur.
2.  **Somme via pointeurs** : Calculer la somme de deux nombres en passant par leurs adresses.

### Niveau Intermédiaire
3.  **Swap avec pointeurs** : Écrire une fonction `swap(int *a, int *b)` qui échange les valeurs des deux variables.
4.  **Parcours de tableau** : Afficher les éléments d'un tableau en utilisant l'arithmétique des pointeurs.

### Niveau Avancé
5.  **Allocation dynamique** : Demander à l'utilisateur la taille d'un tableau, l'allouer dynamiquement avec `malloc`, le remplir et l'afficher, puis libérer la mémoire.

---

## 8. Structures
### Niveau Débutant
1.  **Point 2D** : Créer une structure `Point` avec `x` et `y`. Initialiser un point et afficher ses coordonnées.

### Niveau Intermédiaire
2.  **Gestion d'étudiants** : Créer une structure `Etudiant` (nom, âge, note). Écrire une fonction qui affiche les informations d'un étudiant.
3.  **Distance entre deux points** : Calculer la distance entre deux structures `Point`.

### Niveau Avancé
4.  **Tableau de structures** : Créer un tableau de 5 `Produits` (nom, prix, quantité). Calculer la valeur totale du stock.

---

## 9. Fichiers
### Niveau Intermédiaire
1.  **Écriture** : Créer un programme qui écrit "Hello C Files" dans un fichier `test.txt`.
2.  **Lecture** : Lire le contenu du fichier `test.txt` et l'afficher à l'écran.

### Niveau Avancé
3.  **Copie de fichier** : Créer un programme qui copie le contenu d'un fichier source vers un fichier destination.
4.  **Compteur de lignes** : Compter le nombre de lignes dans un fichier texte donné.
