#include <stdio.h>
#define NLINHAS 2
#define NCOLUNAS 2

int main(void) {
  float notas[NLINHAS][NCOLUNAS];
  int i,j;  /* i rep linhas, j rep colunas */

  for( i=0; i<NLINHAS; i++){
    for( j=0; j<NCOLUNAS; j++){
      printf("\n Entrar nota aluno: %d , nota:%d :",i+1,j+1);
      scanf("%f", &notas[i][j] );
    }
  }

  for( i=0; i<NLINHAS; i++){
    for( j=0; j<NCOLUNAS; j++){
      printf("\n Nota aluno: %d , nota:%d : %.1f",i+1,j+1,notas[i][j]);
    }
  }
}