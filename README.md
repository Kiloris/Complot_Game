# Projet Epietch tek2 : Plazza

## Antoine Barbet | Zacharie Abidat | Adrien Ronse

    Langage : C++
    Compilation : Makefile -> make | make re

Le but du projet est de créer une pizzeria automatique à l'aide de thread et de la communication entre process.
La pizzeria est composée de la réception qui accepte les nouvelles commandes. Les cuisines de la pizzeria sont constituées elles même de cuisiniers ainsi que d'un stock d'ingrédients.
Lorsque la réception reçoit des commandes, elle ouvre des cuisines en concéquence. Celles-ci se ferment au bout de 5 secondes d'inactivité.

Chaque cuisine est un process différent, et chaque cuisinier un thread.

# Utilisation

#### Usage : ./plazza [int a] [int b] [int c]

    a : Le multiplicateur de temps de cuisson pour les pizzas en seconde.
    b : Nombre de cuisinier par cuisine.
    c : Temps (en milliseconde) du remplissage de stock des cuisines.

#### Pour commander une pizza il faut entrer une commande de la forme : [pizza] [taille] x[nombre].
    Les différentes pizzas sont : regina | margarita | americana| fantasia.
    Les différentes tailles sont : S | M | L | XL | XXL.
    Le nombre de pizza doit être "x" suivi d'un nombre entier supérieur à 0.

    Par exemple : regina S x2

Toute commande mal orthographié est ignoré.
# Liste des commandes :

    status : Affiche le total de commande que la réception a reçu, le nombre de cuisine ouverte avec le détail de son stock et de l'état de ses cuisiniers.

    ctrl d : Quitter le programme.

    commande de pizza : Exemple ci dessus.


# Bonus
    Au départ le projet à été effectué sans IPC ni différent process, uniquement à l'aide de thread.
    Le programme est fonctionnel, il est situé dans le dossier bonus.
# Complot_Game
