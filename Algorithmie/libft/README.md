# LIBFT

**Note obtenue : 85/100**

## Part 1 - Fonctions de la libc

Dans cette première partie, vous devez recoder un ensemble de fonctions de la **libc** telles que décrites dans leur man respectif sur votre système. Vos fonctions devront avoir exactement le même prototype et le même comportement que les originales. Leur nom devra être préfixé par “*ft_*”. Par exemple *strlen* devient *ft_strlen*.

Vous devez recoder les fonctions suivantes :
- memset
- bzero
- memcpy
- memccpy
- memmove
- memchr
- memcmp
- strlen
- strdup
- strcpy
- strncpy
- strcat
- strncat
- strlcat
- strchr
- strrchr
- strstr
- strnstr
- strcmp
- strncmp
- atoi
- isalpha
- isdigit
- isalnum
- isascii
- isprint
- toupper
- tolower

## Part 2 - Fonctions supplémentaires

Dans cette seconde partie, vous devrez coder un certain nombre de fonctions absentes de la **libc** ou présentes dans une forme différente. Certaines de ces fonctions peuvent avoir de l’intéret pour faciliter l’écriture des fonctions de la première partie.

- ft_memalloc
```c
void * ft_memalloc(size_t size);
```
- ft_memdel
```c
void ft_memdel(void **ap);
```
- ft_strnew
```c
char * ft_strnew(size_t size);
```
- ft_strdel
```c
void ft_strdel(char **as);
```
- ft_strclr
```c
void ft_strclr(char *s);
```
- ft_striter
```c
void ft_striter(char *s, void (*f)(char *));
```
- ft_striteri
```c
void ft_striteri(char *s, void (*f)(unsigned int, char *));
```
- ft_strmap
```c
char * ft_strmap(char const *s, char (*f)(char));
```
- ft_strmapi
```c
char * ft_strmapi(char const *s, char (*f)(unsigned int, char));
```
- ft_strequ
```c
int ft_strequ(char const *s1, char const *s2);
```
- ft_strnequ
```c
int ft_strnequ(char const *s1, char const *s2, size_t n);
```
- ft_strsub
```c
char * ft_strsub(char const *s, unsigned int start, size_t len);
```
- ft_strjoin
```c
char * ft_strjoin(char const *s1, char const *s2);
```
- ft_strtrim
```c
char * ft_strtrim(char const *s);
```
- ft_strsplit
```c
char ** ft_strsplit(char const *s, char c);
```
- ft_itoa
```c
char * ft_itoa(int n);
```
- ft_putchar
```c
void ft_putchar(char c);
```
- ft_putstr
```c
void ft_putstr(char const *s);
```
- ft_putendl
```c
void ft_putendl(char const *s);
```
- ft_putnbr
```c
void ft_putnbr(int n);
```
- ft_putchar_fd
```c
void ft_putchar_fd(char c, int fd);
```
- ft_putstr_fd
```c
void ft_putstr_fd(char const *s, int fd);
```
- ft_putendl_fd
```c
void ft_putendl_fd(char const *s, int fd);
```
- ft_putnbr_fd
```c
void ft_putnbr_fd(int n, int fd);
```


