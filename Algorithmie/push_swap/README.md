# push_swap

**Note obtenue : ??/100**

## Description du jeu

- Le jeu est constitué de 2 piles nommées **a** et **b** (si vous savez pas ce qu’est une pile, Google est votre ami).
- Au départ **b** est vide et **a** contient un certain nombre de nombres positifs ou négatifs (sans doublons).
- Le but du jeu est de faire en sorte que a contienne les mêmes nombres mais dans l’ordre croissant.
- Pour ce faire, on ne dispose que des opérations suivantes :
 - **sa** : swap a - intervertit les 2 premiers éléments au sommet de la pile a. (ne fait rien s’il n’y en a qu’un ou aucun).
 - **sb** : swap b - intervertit les 2 premiers éléments au sommet de la pile b. (ne fait rien s’il n’y en a qu’un ou aucun).
 - **ss** : sa et sb en même temps.
 - **pa** : push a - prend le premier élément au sommet de b et le met sur a. (ne fait rien si b est vide).
 - **pb** : push b - prend le premier élément au sommet de a et le met sur b. (ne fait rien si a est vide).
 - **ra** : rotate a - décale d’une position tous les élements de la pile a. (vers le haut, le premier élément devient le dernier).
 - **rb** : rotate b - décale d’une position tous les élements de la pile b. (vers le haut, le premier élément devient le dernier).
 - **rr** : ra et rb en meme temps.
 - **rra** : reverse rotate a (vers le bas, le dernier élément devient le premier).
 - **rrb** : reverse rotate b (vers le bas, le dernier élément devient le premier).
 - **rrr** : rra et rrb en même temps.

## Sujet

- Vous devez faire un programme qui prend en paramètre la pile a sous la forme d’une liste de nombres. Le premier paramètre est au sommet de la pile (attention donc à l’ordre).
- Le programme doit afficher la suite d’opérations qui permet de trier la pile, le plus petit nombre étant au sommet. Les opérations seront affichées separées par un espace, pas d’espace au debut ni à la fin, le tout suivi d’un ’\n’.
- Le but est de trier la pile avec le moins d’opérations possibles
```
$./push_swap 2 1 3 6 5 8
sa pb pb pb sa pa pa pa
$
```
En cas d’erreur, vous afficherez "Error" suivi d’un ’\n’ sur la sortie d’erreur. Par
exemple, certains paramètres ne sont pas des nombres, ou ne tiennent pas dans un int
(qui est le type d’un élément sur les piles), ou encore il y a des doublons.

## Test

Ligne de commande qui compte le nombre d'opération efféctuée sur un intervalle de 10.000 nombres :
```
./push_swap `ruby -e "puts (-5000...5000).to_a.shuffle.join(' ')"` | wc -w
```
