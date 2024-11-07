#!/bin/sh
ls -l | awk 'NR % 2 == 1'

# 'ls -l' est une commande qui affiche les détails des fichiers et des répertoires dans le répertoire courant.
# '|' est un opérateur qui permet de passer le résultat de la commande précédente (ls -l) à la commande suivante (awk).
# 'awk' est un langage de programmation utilisé pour manipuler des données et générer des rapports. Ici, il est utilisé pour filtrer et afficher certaines informations.
# 'NR % 2 == 1' est une condition qui est vraie pour les lignes impaires. 
# NR est une variable intégrée dans awk qui représente le numéro de la ligne courante. 
# '% 2' est l'opérateur de modulo qui donne le reste de la division de NR par 2. Si le reste est 1, la ligne est impaire.