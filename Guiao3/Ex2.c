#include<stdio.h>

unsigned int size, index, iteracoes = 0;
int counter(int array[]){
  int index = 0;
  int count = 0;
  int amnt = -1;
  iteracoes = 0;
  for(int i=0;i<size;i++){
    count = 0;
    for(int j=0;j<i;j++){
      iteracoes++;
      if(array[j]<array[i]){
        count++;
      }
    }
    if(count>=amnt){
      amnt=count;
      index = i;
    }
  }
  if(amnt == 0){
    return -1;
  }
  return index;
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
