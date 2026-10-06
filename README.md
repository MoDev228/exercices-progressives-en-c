# Exercices progressifs en C

Ce dépôt accompagne mon apprentissage du langage C, avec une progression orientée vers la compréhension du langage, de la mémoire et de la programmation système.

## Progression

1. Bases et entrées/sorties
2. Variables et opérateurs
3. Conditions et boucles
4. Fonctions
5. Tableaux
6. Chaînes de caractères
7. Pointeurs
8. Mémoire dynamique
9. Structures
10. Fichiers
11. Structures de données
12. Linux et programmation système
13. Réseau et sockets
14. Projets

Les exercices sont volontairement progressifs. Le but n'est pas seulement d'obtenir un programme qui fonctionne, mais de comprendre pourquoi il fonctionne, ses limites et les erreurs de sécurité possibles.

## Compilation recommandée

```bash
gcc -std=c17 -Wall -Wextra -Wpedantic -o programme fichier.c
```

Pendant les exercices sur la mémoire, nous utiliserons aussi des outils de diagnostic comme AddressSanitizer et Valgrind.

## Méthode de travail

Pour chaque exercice :

1. comprendre le problème ;
2. réfléchir à la solution ;
3. écrire un pseudo-code ;
4. coder soi-même ;
5. tester plusieurs cas ;
6. corriger et améliorer ;
7. vérifier les problèmes de sécurité ;
8. valider puis enregistrer le travail avec Git.

## Objectif final

Arriver progressivement à écrire des programmes C plus importants : gestionnaires de données, outils Linux, mini-shell, programmes réseau et autres projets permettant de comprendre la programmation bas niveau.
