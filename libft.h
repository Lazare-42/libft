#ifndef LIBFT_H
# define LIBFT_H

#include <stddef.h>

void	ft_putstr(char *str);
char	*ft_itoa(int nbr);
void	ft_putchar(char c);
char	*ft_strdup(char *src);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_strcat(char *dest, char *src);
int		ft_strlen(char *str);
char	**ft_strcpy(char **dest, char **src);
char	*ft_strncat(char *dest, char *src, int nb);
char 	*strstr(const char *haystack, const char *needle);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
char *ft_strnstr(const char *haystack, const char *needle, size_t n);
char *ft_strstr(const char *haystack, const char *needle);
int ft_strcmp(const char *s1, const char *s2);
int ft_strncmp(const char *s1, const char *s2, size_t n);
void *ft_memccpy(void *dest, const void *src, int c, size_t n);

#endif 
