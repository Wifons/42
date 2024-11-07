#!/bin/sh
git ls-files --others --ignored --exclude-standard
# Cette commande fait trois choses :
# 1. '--others' dit à Git de montrer les fichiers qui ne sont pas suivis (c'est-à-dire les nouveaux fichiers que vous n'avez pas encore ajoutés à Git).
# 2. '--ignored' dit à Git de montrer les fichiers qui sont ignorés (c'est-à-dire les fichiers que Git ne suit pas parce qu'ils sont listés dans le fichier .gitignore ou pour une autre raison).
# 3. '--exclude-standard' dit à Git d'ignorer certains fichiers selon les règles standard (par exemple, les fichiers temporaires créés par votre éditeur de texte).