#!/bin/bash

# Vérifie qu'un paramètre est fourni
if [ -z "$1" ]; then
    echo "Usage: $0 <nom_du_dossier>"
    exit 1
fi

DOSSIER="$1"

# Création de l'arborescence
mkdir -p "$DOSSIER/ressources"

# Création des fichiers
touch "$DOSSIER/flag"
touch "$DOSSIER/ressources/walkthrough.md"
touch "$DOSSIER/ressources/source.c"