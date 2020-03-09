#include<stdio.h>

unsigned static int op,sz = 0;

int counter(int array[]){
  op = 0;
  int result=0;
  for(int i =1; i<sz; i++){
    if(array [i] != array [i-1]){
      result++;
    }
    op++;
  }
  return result;
}



int main(void){

  int array[10] = {3,3,3,3,3,3,3,3,3,3};

  int res = counter(array);
  printf("n iguais = %d , n ops = %d \n", res, op);



  int array1[10] = {4,3,3,3,3,3,3,3,3,3};
  sz = sizeof(array1)/sizeof(int);
  res = counter(array1);
  printf("n iguais = %d , n ops = %d \n", res, op);

  int array2[10] = {4,5,3,3,3,3,3,3,3,3};
  sz = sizeof(array2)/sizeof(int);
  res = counter(array2);
  printf("n iguais = %d , n ops = %d \n", res, op);

  int array3[10] = {4,5,1,3,3,3,3,3,3,3};
  sz = sizeof(array3)/sizeof(int);
  res = counter(array3);
  printf("n iguais = %d , n ops = %d \n", res, op);

  int array4[10] = {4,5,1,2,3,3,3,3,3,3};
  sz = sizeof(array4)/sizeof(int);
  res = counter(array4);
  printf("n iguais = %d , n ops = %d \n", res, op);

  int array5[10] = {4,5,1,2,6,3,3,3,3,3};
  sz = sizeof(array5)/sizeof(int);
  res = counter(array5);
  printf("n iguais = %d , n ops = %d \n", res, op);

  int array6[10] = {4,5,1,2,6,8,3,3,3,3};
  sz = sizeof(array6)/sizeof(int);
  res = counter(array6);
  printf("n iguais = %d , n ops = %d \n", res, op);

  int array7[10] = {4,5,1,2,6,8,7,3,3,3};
  sz = sizeof(array7)/sizeof(int);
  res = counter(array7);
  printf("n iguais = %d , n ops = %d \n", res, op);

  int array8[10] = {4,5,1,2,6,8,7,9,3,3};
  sz = sizeof(array8)/sizeof(int);
  res = counter(array8);
  printf("n iguais = %d , n ops = %d \n", res, op);

  int array9[10] = {4,5,1,2,6,8,7,9,3,0};
  sz = sizeof(array9)/sizeof(int);
  res = counter(array9);
  printf("n iguais = %d , n ops = %d \n", res, op);


  return 0;
}
