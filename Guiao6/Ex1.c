#include<stdio.h>
#include<assert.h>

unsigned static int r = 0;

int motzkin(int n){
  unsigned int tmp = 0;
  assert (n>=0);
  if(n<=1){
    return 1;
  }
  else{
    for(int k = 0; k<= (n-2); k++){
      r++;
      tmp += motzkin(k)*motzkin(n-2-k);
    }
    return (motzkin(n-1)+tmp);
  }
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
