#!/bin/sh
git log --format='%H' -n5

# 'git log' est une commande Git qui affiche l'historique des commits.

# '--format=%H' est une option qui modifie la façon dont l'information est affichée. 
# '%H' est un format qui indique à Git d'afficher le hash complet du commit.

# '-n5' est une option qui limite le nombre de commits affichés à 5. 
# Donc, cette commande affiche les hashes complets des 5 derniers commits.