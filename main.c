/*Faça um programa que receba uma palavra e calcule quantas vogais (a, e, i, o, u) possui essa
palavra.*/

#include <stdio.h>
#include <string.h>
#define TAM 100

int main(void) {
  int i,contV=0;
  char nome[TAM];

  printf("Digite uma palavra:");
  gets(nome);
  int tam = strlen(nome);

  for(i=0;i<tam;i++){
    if((nome[i] == 'a' || nome[i] == 'A')||(nome[i] == 'e' || nome[i] == 'E')||(nome [i] == 'i' || nome[i] == 'I')||(nome[i] == 'o' || nome[i] == 'O')||(nome[i] == 'u' || nome[i] == 'U')){
      contV++;
    }
  }
  printf("%s tem %d Vogais",nome,contV);
  return 0;
}