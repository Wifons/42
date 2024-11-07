#!/bin/sh
find . -type f -or -type d | wc -l

# 'find .' signifie que nous cherchons à partir du répertoire courant.
# '-type f' signifie que nous cherchons des fichiers.
# '-or' est un opérateur logique qui permet de chercher soit des fichiers, soit des répertoires.
# '-type d' signifie que nous cherchons des répertoires.
# '|' est un opérateur qui permet de passer le résultat de la commande précédente (find) à la commande suivante (wc).
# 'wc -l' est une commande qui compte le nombre de lignes. Dans ce cas, elle compte le nombre de fichiers et de répertoires trouvés par la commande 'find'.