#ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H

#include <unistd.h>
#include <stdlib.h>

typedef struct s_stock_str
{
    int size;
    char *str;
    char *copy;
}               t_stock_str;


void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	ft_show_tab(struct s_stock_str *par);
int	    ft_str_length(char *str);
char	*ft_strdup(char *src);
struct  s_stock_str	*ft_strs_to_tab(int ac, char **av);

#endif
