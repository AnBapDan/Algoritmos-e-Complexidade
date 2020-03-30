#include<stdio.h>
#include<assert.h>

unsigned static int comp,shift,sz = 0;


void counter(int array[]){
  assert(sz>1);

  for(int i = 0; i< sz; i++){
    for(int j = i+1; j< sz; j++){
      comp++;
      if(array[i]==array[j]){
        for(int k = j; k < sz-1;k++){
          shift++;
          array[k]=array[k+1];
        }
        sz--;          //O Array diminuiu uma unidade
        j--;           //Necessário confirmar essa mesma posição, pois foi removida;
      }
    }
  }
}



int main(void){
  int array[10] = {1,2,2,2,3,3,4,5,8,8};
  sz = sizeof(array)/sizeof(int);
  counter(array);
  printf("comp = %d , nshifts = %d \n", comp, shift);
  comp =0;
  shift=0;

  int array1[10] = {1,2,2,2,3,3,3,3,8,8};
  sz = sizeof(array1)/sizeof(int);
  counter(array1);
  printf("comp = %d , nshifts = %d \n", comp, shift);
  comp =0;
  shift=0;

  int array2[7] = {1,2,3,2,1,3,4};
  sz = sizeof(array2)/sizeof(int);
  counter(array2);
  printf("comp = %d , nshifts = %d \n", comp, shift);
  comp =0;
  shift=0;

  int array3[10] = {1,2,5,4,7,0,3,9,6,8};
  sz = sizeof(array3)/sizeof(int);
  counter(array3);
  printf("comp = %d , nshifts = %d \n", comp, shift);
  comp =0;
  shift=0;
}
