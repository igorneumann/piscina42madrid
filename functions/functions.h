#include <unistd.h>

#ifndef FUNCTIONS_H
# define FUNCTIONS_H

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);
void	ft_is_negative(int n);
void	ft_print_numbers(void);
void	ft_putstr_non_printable(char *str);
void	ft_putstr(char *str);
void	ft_sort_int_tab(int *tab, int size);
int		ft_str_is_alpha(char *str);
int		ft_str_is_lowercase(char *str);
int		ft_str_is_numeric(char *str);
int		ft_str_is_printable(char *str);
int		ft_str_is_uppercase(char *str);
char	*ft_strcat(char *dest, char *src);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strcpy(char *dest, char *src);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int		ft_strlen(char *str);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_strstr(char *str, char *to_find);
void	ft_swap(int *a, int *b);
void	ft_ultimate_div_mod(int *a, int *b);