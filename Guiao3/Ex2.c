#include<stdio.h>


int counter(int array[]){
  int index = 0;
  int amnt = 0;
  int count = 0;

  for(int i = 0; i<size, i++){
    for(int j=0; j<i; j++){
      if(array[j]<array[i]){
        count++;
      }
    }
    if(amnt < count){
      index = i;
      amnt = count;
    }

  }
  if(amnt == 0){
    return -1;
  }

}


int main(void){

  return 0;

}
