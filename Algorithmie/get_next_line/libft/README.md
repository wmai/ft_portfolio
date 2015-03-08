# LIBFT

**Note obtenue : 85/100**

##Part 1 - Fonctions de la libc

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

##Part 2 - Fonctions supplémentaires

Dans cette seconde partie, vous devrez coder un certain nombre de fonctions absentes de la **libc** ou présentes dans une forme différente. Certaines de ces fonctions peuvent avoir de l’intéret pour faciliter l’écriture des fonctions de la première partie.

- ft_memalloc
```
void * ft_memalloc(size_t size);
```
- ft_memdel
```
void ft_memdel(void **ap);
```
- ft_strnew
```
char * ft_strnew(size_t size);
```
- ft_strdel
```
void ft_strdel(char **as);
```
- ft_strclr
```
void ft_strclr(char *s);
```
- ft_striter
```
void ft_striter(char *s, void (*f)(char *));
```
- ft_striteri
```
void ft_striteri(char *s, void (*f)(unsigned int, char *));
```
- ft_strmap
```
char * ft_strmap(char const *s, char (*f)(char));
```
- ft_strmapi
```
char * ft_strmapi(char const *s, char (*f)(unsigned int, char));
```
- ft_strequ
```
int ft_strequ(char const *s1, char const *s2);
```
- ft_strnequ
```
int ft_strnequ(char const *s1, char const *s2, size_t n);
```
- ft_strsub
```
char * ft_strsub(char const *s, unsigned int start, size_t len);
```
- ft_strjoin
```
char * ft_strjoin(char const *s1, char const *s2);
```
- ft_strtrim
```
char * ft_strtrim(char const *s);
```
- ft_strsplit
```
char ** ft_strsplit(char const *s, char c);
```
- ft_itoa
```
char * ft_itoa(int n);
```
- ft_putchar
```
void ft_putchar(char c);
```
- ft_putstr
```
void ft_putstr(char const *s);
```
- ft_putendl
```
void ft_putendl(char const *s);
```
- ft_putnbr
```
void ft_putnbr(int n);
```
- ft_putchar_fd
```
void ft_putchar_fd(char c, int fd);
```
- ft_putstr_fd
```
void ft_putstr_fd(char const *s, int fd);
```
- ft_putendl_fd
```
void ft_putendl_fd(char const *s, int fd);
```
- ft_putnbr_fd
```
void ft_putnbr_fd(int n, int fd);
```


