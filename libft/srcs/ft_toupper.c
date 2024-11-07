#include "../includes/ft.h"

int	ft_toupper(int c)
{
	if (ft_islower(c))
		return c & 0x5f;
	return c;
}