#!/bin/sh
find . -type f -name '*.sh' -execdir basename {} .sh ';'

# La commande 'find' est utilisée pour chercher des fichiers dans un répertoire.
# '.' signifie que la recherche doit commencer à partir du répertoire courant.
# '-type f' signifie que nous cherchons uniquement des fichiers (et non des répertoires).
# '-name '*.sh'' signifie que nous cherchons des fichiers dont le nom se termine par '.sh' (des scripts shell).
# '-execdir' signifie que pour chaque fichier trouvé, la commande suivante doit être exécutée dans le répertoire contenant le fichier.
# 'basename {} .sh' est la commande à exécuter pour chaque fichier trouvé. 
# 'basename' est une commande qui supprime le chemin d'accès et l'extension d'un nom de fichier. 
# '{}' est remplacé par le nom du fichier trouvé. '.sh' est l'extension à supprimer.
# ';' signifie la fin de la commande '-execdir'.