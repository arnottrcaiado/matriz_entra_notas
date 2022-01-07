#include <stdio.h>

#define NLINHAS 5
#define NCOLUNAS 3

void entraMatriz(float v[NLINHAS][NCOLUNAS]){
  int i,j;

  for( i=0; i<NLINHAS; i++){
    printf("\n Entrar notas aluno: %d \n",i+1 );
    for( j=0; j<NCOLUNAS; j++){
      printf(" nota:%d :",j+1);
      scanf("%f", &v[i][j] );
    }
  }
}


void mostraMatriz(float v[NLINHAS][NCOLUNAS] ){
  int i,j;

  for( i=0; i<NLINHAS; i++){
    printf("\n Notas aluno: %d", i+1 );

    for( j=0; j<NCOLUNAS; j++){
      printf(" n%d: %.1f",j+1,v[i][j]);
    }
  }
}