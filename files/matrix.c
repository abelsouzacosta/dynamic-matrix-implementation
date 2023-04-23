#include "../headers/console.h"
#include "../headers/matrix.h"
#include <stdio.h>
#include <stdlib.h>

int **create_matrix(int rows, int columns) {
  callout("Criando a Matriz\n");
  int **matrix = (int **)calloc(rows, sizeof(int *));
  for (int r = 0; r < rows; r += 1) {
    matrix[r] = (int *)calloc(columns, sizeof(int));
  }
  return matrix;
}

void fill_matrix(int **matrix, int rows, int columns) {
  for (int r = 0; r < rows; r += 1) {
    for (int c = 0; c < columns; c += 1) {
      write_console("Digite o número para ser alocado em matrix[%d][%d]", r, c);
      scanf("%d", &matrix[r][c]);
    }
  }
}

void print_matrix(int **matrix, int rows, int columns) {
  for (int r = 0; r < rows; r += 1) {
    printf("[");
    for (int c = 0; c < columns; c += 1) {
      if (c == columns - 1) {
        write_console("%d", matrix[r][c]);
      } else {
        write_console("%d, ", matrix[r][c]);
      }
    }
    printf("]\n");
  }
}