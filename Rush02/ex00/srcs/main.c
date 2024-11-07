#include "../includes/ft.h"
#include "../includes/dict.h"

int	is_valid_file(int fd)
{
	// Read le file
	// Respecter les normes definies dans le sujet
	// [a number][0 to n spaces]:[0 to n spaces][n'importe quel caractere imprimable]\n
}

void	initialize_dico(dico *dico)
{
	int	fd;
	int is_valid_path;

	fd = open(dico->selected_path, O_RDONLY);
	is_valid_path = (fd != -1);
	// Si le dico a bien ete alloue et que le chemin d'acces est valide
	if (dico != NULL && is_valid_path)
	{
		if (is_valid_file(fd))
		{
			// dico->first = parse_line(key);
		}
		else
			ft_putstr(DICT_ERROR);
	}
}

int	main(int argc, char *argv[])
{
	(void) argc;
	(void) argv;

	dico *dico;

	dico = malloc(sizeof(dico));
	dico->selected_path = DICT_PATH;
	printf("%s\n", dico->selected_path);
	return (0);
}
