#include<stdio.h>

unsigned int size = 0 ;
unsigned int index = 0;
unsigned int iteracoes = 0;
int counter(int array[]){
  iteracoes = 0;
  index = 0;
  int amnt = -1;
  int i = size-1;
  for(i; i>0; i--){                                   //indice
    int count = 0;
    for(int j =0; j< i; j++){                         //valores

      if(amnt > i){                                   // Se a qntdd de numeros menores de um indice for maior que o indice a verificar, podemos sair
        return index;
      }
      iteracoes++;
      if(array[j]<array[i]){
        count++;
      }
    }
    if(count >= amnt){
      amnt = count;
      index = i;
      printf("%d \n", amnt);
    }

  }
  if(amnt == 0){
    return -1;
  }

  return 0;
}


int main(void){

  int array[10] = {1, 9, 2, 8, 3, 4, 5, 3, 7, 2};
  size = sizeof(array)/sizeof(int);
  int x = counter(array);
  printf("Elemento na posição: %d   Nmr de iteracoes: %d \n",x, iteracoes);

  int array1[10] ={1, 7, 4, 6, 5, 2, 3, 2, 1, 0};
  iteracoes = 0;
  size = sizeof(array)/sizeof(int);
  x = counter(array1);
  printf("Elemento na posição: %d   Nmr de iteracoes: %d \n",x, iteracoes);

  int array2[10] ={2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
  iteracoes = 0;
  size = sizeof(array)/sizeof(int);
  x = counter(array2);
  printf("Elemento na posição: %d   Nmr de iteracoes: %d \n",x, iteracoes);

  return 0;

}
