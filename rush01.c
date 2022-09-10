#include <unistd.h>

void	ft_putchar(char c);

void	write_columns(int columns, char left, char middle, char right)
{
	if (columns-- >= 1)
	{
		ft_putchar(left);
		while (columns-- >=2)
			ft_putchar(middle);
		if (columns == 0)
			ft_putchar('\n);
	}

void	write_rows(i
