#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef struct 
{
    int size;
    int **grid;
    int *constraints[4];
} Grid;

Grid	*init_grid(int size, int *input_constraints) {
    Grid *g; 
	int		i;
	int		j;

	g = (Grid *)malloc(sizeof(Grid));
    g->size = size;
    g->grid = (int **)malloc(size * sizeof(int *));
    i = 0;
    while (i < size) 
	{
        g->grid[i] = (int *)malloc(size * sizeof(int));
        j = 0;
        while (j < size) 
		{
            g->grid[i][j] = 0;
            j++;
        }
        i++;
    }

    i = 0;
    while (i < 4) 
	{
        g->constraints[i] = (int *)malloc(size * sizeof(int));
        int j = 0;
        while (j < size) {
            g->constraints[i][j] = input_constraints[i * size + j];
            j++;
        }
        i++;
    }
    
    return g;
}

void	print_grid(Grid *g) {
    int i = 0;
    while (i < g->size) {
        int j = 0;
        while (j < g->size) {
            printf("%d ", g->grid[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
}

int is_valid(Grid *g, int row, int col, int value) {
    for (int i = 0; i < g->size; i++) {
        if (g->grid[row][i] == value || g->grid[i][col] == value) {
            return FALSE;
        }
    }
    return TRUE;
}

int count_visible(int *line, int size) {
    int visible = 0, max_height = 0;
    int i = 0;
    while (i < size) {
        if (line[i] > max_height) {
            max_height = line[i];
            visible++;
        }
        i++;
    }
    return visible;
}

int count_visible_reverse(int *line, int size) {
    int visible = 0, max_height = 0;
    for (int i = size - 1; i >= 0; i--) {
        if (line[i] > max_height) {
            max_height = line[i];
            visible++;
        }
    }
    return visible;
}

int check_visibility(Grid *g) {
    for (int col = 0; col < g->size; col++) {
        int column[g->size];
        for (int row = 0; row < g->size; row++) {
            column[row] = g->grid[row][col];
        }
        
        int up_visible = count_visible(column, g->size);
        int down_visible = count_visible_reverse(column, g->size);
        if (up_visible != g->constraints[0][col] || down_visible != g->constraints[1][col]) {
            return FALSE;
        }
    }
    
    for (int row = 0; row < g->size; row++) {
        int left_visible = count_visible(g->grid[row], g->size);
        int right_visible = count_visible_reverse(g->grid[row], g->size);
        if (left_visible != g->constraints[2][row] || right_visible != g->constraints[3][row]) {
            return FALSE;
        }
    }
    
    return TRUE;
}

int solve(Grid *g, int row, int col) {
    if (row == g->size) {
        return check_visibility(g); // Vérifier les contraintes de visibilité à la fin
    }

    int next_row = (col == g->size - 1) ? row + 1 : row;
    int next_col = (col == g->size - 1) ? 0 : col + 1;

    for (int num = 1; num <= g->size; num++) {
        if (is_valid(g, row, col, num)) {
            g->grid[row][col] = num;
            if (solve(g, next_row, next_col)) {
                return TRUE;
            }
            g->grid[row][col] = 0; // Backtrack
        }
    }
    return FALSE;
}

int main(int argc, char *argv[]) {
    if (argc != 2) 
	{
        write(1, "Error\n", 6);
        return (1);
    }

    int size = 4; // Taille par défaut (peut être généralisée)
    int constraints[16];
    
    // Parse les contraintes fournies en argument
    for (int i = 0; i < 16; i++) {
        constraints[i] = argv[1][i * 2] - '0';
    }

    Grid *g = init_grid(size, constraints);
    
    // Résoudre la grille
    if (solve(g, 0, 0)) {
        print_grid(g); 
    } else {
        write(1, "Error\n", 6);
    }

    return 0;
}
