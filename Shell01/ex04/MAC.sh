#!/bin/sh
ifconfig | awk '/ether/ {print $2}'

# 'ifconfig' est une commande qui affiche les informations les interfaces réseau de votre machine.
# '|' est un opérateur qui permet de passer le résultat de la commande précédente (ifconfig) à la commande suivante (awk).
# 'awk' est un langage de programmation utilisé pour manipuler des données et générer des rapports. Ici, il est utilisé pour filtrer et afficher certaines informations.
# '/link\/ether/' est une expression régulière qui correspond aux lignes contenant 'link/ether'. Ces lignes contiennent les adresses MAC.
# '{print $2}' est une action awk qui imprime le deuxième champ (séparé par des espaces ou des tabulations) de chaque ligne. Dans ce cas, il imprime les adresses MAC.