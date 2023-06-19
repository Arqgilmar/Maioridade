#include <stdio.h>

//Elabore um algoritmo que receba a idade do usuario e informe se o mesmo é maior ou menor idade.

int main(void) {
  int idade;
  
  printf("Informe sua idade:\n");
  scanf("%d", &idade);
  
    if(idade >= 18){
      printf("Você é maior de idade");
    }else{
          printf("Você não é maior de idade");
      }
  return 0;
}
