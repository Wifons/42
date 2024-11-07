#!/bin/sh

# Prendre les nombres contenus dans les variables FT_NBR1 et FT_NBR2
echo "$FT_NBR1 + $FT_NBR2" \
  | tr "'\\\"?!mrdoc" "0123401234" \
  | xargs -I{} echo "ibase=5;obase=23;{}" \
  | bc \
  | tr "0123456789ABC" "gtaio luSnemf"

# tr : traduire les caractères spéciaux en chiffres
  # "'"'\\"?!mrdoc' : caractères spéciaux à traduire
  # '0123401234' : chiffres correspondants

# xargs : construire et exécuter la commande
  # -I{} : remplacer {} par l'entrée standard
  # echo 'ibase=5;obase=23;'{} : définir la base d'entrée (5) et la base de sortie (23) pour bc

# bc : calculer la somme en utilisant les bases spécifiées

# tr : traduire les chiffres en caractères de la base gtaio luSnemf
  # '0123456789ABC' : chiffres à traduire
  # 'gtaio luSnemf' : caractères correspondants