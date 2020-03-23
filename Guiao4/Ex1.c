#include<stdio.h>

unsigned static int op,sz = 0;

int counter(int array[]){
  op = 0;
  for(int i=1; i<sz; i++){
    op++;
    if(array[i]-array[i-1] != 1){
      return 0;
    }
  }
  return 1;
}


int main(void){
  int array[10] = {1,3,4,5,5,6,7,7,8,9};
  sz = sizeof(array)/sizeof(int);
  int res = counter(array);
  printf("Resultado = %d , n ops = %d \n", res, op);

  int array1[10] = {1,2,4,5,5,6,7,8,8,9};
  sz = sizeof(array1)/sizeof(int);
  res = counter(array1);
  printf("Resultado = %d , n ops = %d \n", res, op);

  int array2[10] = {1,2,3,6,8,8,8,9,9,9};
  sz = sizeof(array2)/sizeof(int);
  res = counter(array2);
  printf("Resultado = %d , n ops = %d \n", res, op);

  int array3[10] = {1,2,3,4,6,7,7,8,8,9};
  sz = sizeof(array3)/sizeof(int);
  res = counter(array3);
  printf("Resultado = %d , n ops = %d \n", res, op);

  int array4[10] = {1,2,3,4,5,7,7,8,8,9};
  sz = sizeof(array4)/sizeof(int);
  res = counter(array4);
  printf("Resultado = %d , n ops = %d \n", res, op);

  int array5[10] = {1,2,3,4,5,6,8,8,9,9};
  sz = sizeof(array5)/sizeof(int);
  res = counter(array5);
  printf("Resultado = %d , n ops = %d \n", res, op);

  int array6[10] = {1,2,3,4,5,6,7,9,9,9};
  sz = sizeof(array6)/sizeof(int);
  res = counter(array6);
  printf("Resultado = %d , n ops = %d \n", res, op);

  int array7[10] =  {1,2,3,4,5,6,7,8,8,9};
  sz = sizeof(array7)/sizeof(int);
  res = counter(array7);
  printf("Resultado = %d , n ops = %d \n", res, op);

  int array8[10] = {1,2,3,4,5,6,7,8,9,9};
  sz = sizeof(array8)/sizeof(int);
  res = counter(array8);
  printf("Resultado = %d , n ops = %d \n", res, op);

  int array9[10] = {1,2,3,4,5,6,7,8,9,10};
  sz = sizeof(array9)/sizeof(int);
  res = counter(array9);
  printf("Resultado = %d , n ops = %d \n", res, op);
  return 0;
}
