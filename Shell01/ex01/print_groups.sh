#!/bin/sh
id -Gn $FT_USER | tr -s ' ' ',' | tr -d '\n'

# La commande 'id -Gn' affiche les groupes auxquels appartient l'utilisateur spécifié.
# '-Gn' est une option qui affiche tous les noms de groupes auxquels l'utilisateur appartient.
# $FT_USER est une variable d'environnement qui contient le nom de l'utilisateur.

# 'tr' est une commande qui traduit ou supprime des caractères.
# -s ' ' ',' indique que tous les espaces (' ') doivent être remplacés par des virgules (',').

# 'tr -d '\n'' supprime tous les sauts de ligne. 
# '-d' est une option qui signifie "delete", elle indique que les caractères spécifiés doivent être supprimés.
# '\n' est le caractère de saut de ligne.
