# Parcours progressif en C

Ce document définit l'ordre de progression du dépôt. Les exercices ne sont pas une simple liste : chaque palier prépare le suivant.

## 01 — Bases et entrées/sorties

- `printf`, `scanf`
- types fondamentaux
- formatage
- premières validations d'entrée
- compilation avec warnings

## 02 — Variables et opérateurs

- conversions de types
- division entière
- modulo
- opérateurs logiques et bit à bit
- représentation des données

## 03 — Conditions et boucles

- `if / else`
- `switch`
- `for`
- `while`
- `do while`
- algorithmes simples

## 04 — Fonctions

- paramètres
- valeur de retour
- prototypes
- portée des variables
- décomposition d'un programme
- récursivité

## 05 — Tableaux

- tableaux 1D
- tableaux 2D
- parcours
- recherche
- min/max
- tris
- premières analyses de complexité

## 06 — Chaînes de caractères

- `char[]`
- caractère nul `\\0`
- longueur, copie, comparaison
- manipulation en mémoire
- limites des buffers

## 07 — Pointeurs

- adresses
- déréférencement
- passage par adresse
- arithmétique des pointeurs
- pointeurs et tableaux
- pointeurs de fonctions plus tard

## 08 — Mémoire dynamique

- `malloc`
- `calloc`
- `realloc`
- `free`
- ownership
- fuites mémoire
- use-after-free
- double free
- dépassements de tampon

## 09 — Structures

- `struct`
- `typedef`
- tableaux de structures
- structures imbriquées
- structures et pointeurs

## 10 — Fichiers

- `FILE *`
- `fopen` / `fclose`
- lecture et écriture
- fichiers texte
- formats simples
- gestion des erreurs

## 11 — Structures de données

- listes chaînées
- piles
- files
- arbres
- tables de hachage
- comparaison des structures et de leurs coûts

## 12 — Linux et programmation système

- fichiers et descripteurs
- processus
- `fork`
- `exec`
- `wait`
- signaux
- mini-shell

## 13 — Réseau et sockets

- modèle client/serveur
- adresses IP et ports
- sockets TCP
- sockets UDP
- `bind`, `listen`, `accept`, `connect`
- serveur et client simples

## 14 — Projets

Les projets de synthèse seront ajoutés après validation des paliers précédents.

### Règles de progression

Pour chaque exercice :

1. comprendre le problème ;
2. réfléchir avant de coder ;
3. écrire un pseudo-code ;
4. produire sa propre solution ;
5. tester les cas normaux et limites ;
6. corriger les erreurs ;
7. effectuer une revue sécurité ;
8. compiler avec les warnings ;
9. valider ;
10. faire le commit et le push.

### Compilation de référence

```bash
gcc -std=c17 -Wall -Wextra -Wpedantic -o programme fichier.c
```

Pour les exercices liés à la mémoire, nous ajouterons progressivement AddressSanitizer et Valgrind.
