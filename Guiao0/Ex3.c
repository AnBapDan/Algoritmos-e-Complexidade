#include<stdio.h>
#include<math.h>

int main(void){
  int x=0;
  printf("Quantidade de números a encontrar: ");
  scanf("%d", &x);
  puts("Lista de numeros e seus quadrados/ raizes quadradas");
  puts("___________________________________________________");

  for(int i=1; i<=x; i++){
    printf("%d  %f  %f\n",i, pow(i,2), sqrt(i));
  }
  return 0;
}
