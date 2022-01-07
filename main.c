#include "funcoes.h"

int main(void) {
  float notas[NLINHAS][NCOLUNAS];
  void entraMatriz(), mostraMatriz();

  entraMatriz( notas );
  mostraMatriz( notas );
}