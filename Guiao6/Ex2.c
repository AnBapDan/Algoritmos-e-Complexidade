#include<stdio.h>
#include<assert.h>

unsigned static int r = 0;

int motzkin(int n){
  int array[n+1];
  array[0]=1;
  array[1]=1;

  for(int i = 2; i <= n; i++){
    int tmp = 0;
    for(int k = 0; k <= i-2; k++){
      r++;
      tmp += array[k]*array[i-2-k];
    }
    array[i] = array[i-1] + tmp;
  }
  return array[n];
}

int main(void){
  printf("n\tVR\tmult\n");
  for(int i = 0; i<16; i++){
    int result = motzkin(i);
    printf("%d\t%d\t%d\n",i,result, r);
    r=0;
  }
  return 0;
}
