
#include "ft_strs_to_tab.h"

int main(int argc, char **argv)
{
    struct s_stock_str  *tab;

    tab = ft_strs_to_tab(argc, argv);
    ft_show_tab(tab);
    return (0);
}