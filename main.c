#include <stdio.h>

  // Função para imprimir espaços
  void printEspacos(int numEspacos) {
      for (int i = 0; i < numEspacos; i++) {
          printf(" ");
      }
  }

  int main() {
      int altura = 5;
      int largura = 9;

      // Retângulo
      printf("Retângulo:\n");
      for (int i = 0; i < altura; i++) {
          for (int j = 0; j < largura; j++) {
              printf("*");
          }
          printf("\n");
      }
      printf("\n");

      // Elipse
      printf("Elipse:\n");
      for (int i = 0; i < altura; i++) {
          for (int j = 0; j < largura; j++) {
              if (((i == 0 || i == altura - 1) && (j >= 2 && j <= 6)) ||
                  ((i == 1 || i == altura - 2) && (j >= 1 && j <= 7)) ||
                  ((i == 2 || i == altura - 3) && (j >= 0 && j <= 8))) {
                  printf("*");
              } else {
                  printf(" ");
              }
          }
          printf("\n");
      }
      printf("\n");

      // Setas
      printf("Seta:\n");
      int larguraSeta = 9;
      int meioSeta = larguraSeta / 2;
      for (int i = 0; i < larguraSeta; i++) {
          for (int j = 0; j < larguraSeta; j++) {
              if (i < meioSeta) {
                  if (j >= meioSeta - i && j <= meioSeta + i) {
                      printf("*");
                  } else {
                      printf(" ");
                  }
              } else {
                  if (j >= i - meioSeta && j <= larguraSeta - (i - meioSeta) - 1) {
                      printf("*");
                  } else {
                      printf(" ");
                  }
              }
          }
          printf("\n");
      }
      printf("\n");

      // Losango
      printf("Losango:\n");
      int metadeAltura = altura / 2;
      for (int i = 0; i < altura; i++) {
          for (int j = 0; j < largura; j++) {
              if (i < metadeAltura) {
                  if (j >= metadeAltura - i && j <= metadeAltura + i) {
                      printf("*");
                  } else {
                      printf(" ");
                  }
              } else {
                  if (j >= i - metadeAltura && j <= largura - (i - metadeAltura) - 1) {
                      printf("*");
                  } else {
                      printf(" ");
                  }
              }
          }
          printf("\n");
      }

      return 0;
    }