#include<stdio.h>

unsigned int size = 0 ;

int counter(int array[]){
  int indexval = 0;
  int amnt = 0;
  int i= size-9;
  for(int i; i>0; i--){                               //indice
    int count = 0;
    for(int j =0; j< i; j++){                         //valores
      if(amnt > i){                                   // Se a qntdd de numeros menores de um indice for maior que o indice a verificar, podemos sair
        return amnt;
        return indexval;
      }
      if(array[j]<array[i]){
        count++;
      }
    }

  }
  if(amnt == 0){
    return -1;
  }
}


int main(void){

  array[10] = {1, 9, 2, 8, 3, 4, 5, 3, 7, 2};
  array1[10] ={1, 7, 4, 6, 5, 2, 3, 2, 1, 0};
  array2[10] ={2, 2, 2, 2, 2, 2, 2, 2, 2, 2};

  return 0;

}
