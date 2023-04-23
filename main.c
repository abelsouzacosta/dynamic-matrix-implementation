#include "headers/console.h"
#include "headers/matrix.h"
#define ROWS 2
#define COLUMNS 2

int main() {
  int **matrix = create_matrix(ROWS, COLUMNS);

  fill_matrix(matrix, ROWS, COLUMNS);

  clear_screen();

  print_matrix(matrix, ROWS, COLUMNS);

  return 0;
}