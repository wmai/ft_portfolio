# get_next_line

**Note obtenue : 92/100**

##Partie obligatoire

- Ecrivez une fonction qui retourne une ligne lue dans un descripteur de fichier.
- On appelle “ligne” une suite de caractères terminée par un ’\n’ (code ascii 0x0a) ou bien par End Of File (EOF).
- Votre fonction aura le prototype suivant :
```c
int get_next_line(int const fd, char ** line);
```
- Le premier paramètre est le descripteur de fichier depuis lequel lire.
- Le second paramètre est l’adresse d’un pointeur sur caractère qui servira à stocker la ligne lue sur le descripteur de fichier.
- La valeur de retour peut être 1, 0 ou -1 selon qu’une ligne a été lue, que la lecture est terminée ou bien qu’une erreur est survenue respectivement.
- Votre fonction get_next_line doit renvoyer son resultat sans le ’\n’.
- Un appel en boucle à votre fonction get_next_line permettra donc de lire le texte disponible sur un descripteur de fichier une ligne à la fois jusqu’à la fin du texte.
- Assurez-vous que votre fonction se comporte bien lorsqu’elle lit depuis un fichier, depuis l’entrée standard, depuis une redirection, etc.

##Considérations techniques

- Votre fichier *get_next_line.h* doit au moins contenir le prototype de la fonction *get_next_line* et une macro permettant de choisir le nombre de caractères maximum lus à chaque appel de read. Cette valeur sera modifiée en soutenance pour évaluer la robustesse de votre rendu. Par exemple :
```c
#define BUFF_SIZE 32
```
- Interdiction d’utiliser des variables globales pour sauvegarder les caractères qui ont été lus mais non renvoyés par votre fonction. Les variables statiques sont autorisées.
- Si vous êtes malin et que vous utilisez votre biliothèque *libft* pour votre *get_next_line*, vous devez en copier les sources et le *Makefile* associé dans un dossier nommé libft qui devra être à la racine de votre dépot de rendu. Lors de la soutenance, votre correcteur compilera votre rendu de la manière suivante (le fichier main.c sera celui de votre correcteur) :
```
$>make -C libft/ fclean
$>make -C libft/
$>gcc -Wall -Wextra -Werror -I libft/includes/ -c get_next_line.c
$>gcc -Wall -Wextra -Werror -I libft/includes/ -c main.c
$>gcc -o test_gnl get_next_line.o main.o -L libft/ -lft
```