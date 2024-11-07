#!/bin/sh

cat /etc/passwd \
| sed '/^#/d' \
| awk 'NR % 2 == 0 {print $0}' \
| awk -F ":" '{ print $1 }' \
| rev \
| sort -fnr \
| awk -v FT_LINE1="$FT_LINE1" -v FT_LINE2="$FT_LINE2" 'NR >= FT_LINE1 && NR <= FT_LINE2 { print $0 }' \
| tr '\n' ' ' \
| sed 's+ +, +g' \
| sed 's+, $+.+g' \
| tr -d '\n'

# Lire le fichier /etc/passwd
# cat /etc/passwd

# Supprimer les lignes qui commencent par un # 
# ^ : début de ligne
# # : caractère de commentaire
# d : supprimer la ligne
# sed '/^#/d'

# awk: NR est le numéro de ligne, % 2 == 0 signifie une ligne sur deux
# NR : numéro de ligne
# % 2 == 0 : ligne paire
# {print $0} : imprime la ligne entière
# awk 'NR % 2 == 0 {print $0}'

# awk: -F ":" définit ":" comme séparateur de champs, { print $1 } imprime le premier champ (login)
# -F ":" : définit ":" comme séparateur de champs
# { print $1 } : imprime le premier champ (login)
# awk -F ":" '{ print $1 }'

# Inverser chaque login
# rev

# Trier les logins par ordre alphabétique inverse (de Z à A)
# -f : ignore la casse
# -n : trie numériquement
# -r : trie en ordre inverse
# sort -fnr

# awk: -v FT_LINE1 et -v FT_LINE2 définissent les variables, NR >= FT_LINE1 && NR <= FT_LINE2 sélectionne les lignes entre FT_LINE1 et FT_LINE2
# -v FT_LINE1="$FT_LINE1" : définit la variable FT_LINE1
# -v FT_LINE2="$FT_LINE2" : définit la variable FT_LINE2
# NR >= FT_LINE1 && NR <= FT_LINE2 : sélectionne les lignes entre FT_LINE1 et FT_LINE2
# awk -v FT_LINE1="$FT_LINE1" -v FT_LINE2="$FT_LINE2" 'NR >= FT_LINE1 && NR <= FT_LINE2 { print $0 }'

# tr: remplacer les nouvelles lignes par des espaces
# '\n' : nouvelle ligne
# ' ' : espace
# tr '\n' ' '

# sed: s+ +, +g remplace les espaces par ", "
# sed 's+ +, +g'

# sed: s+, $+.+g remplace la dernière ", " par un "."

# tr: supprimer la nouvelle ligne finale
# tr -d '\n'