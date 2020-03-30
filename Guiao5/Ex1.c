#include<stdio.h>
#include<math.h>

unsigned static int r = -1;

int t1(int n){
  r++;
  if(n == 0){
    return 0;
  }
  else{
    return t1(n/3)+n;
  }
}

int t2(int n){
  r++;
  if( n<=2){
    return n;
  }
  else{
    return t2(n/3) + t2((n+2)/3)+n;
  }
}


int t3(int n){
  r++;
  if( n<=2){
    return n;
  }
  else if((n%3)==0){
    return 2*t3(n/3)+n;
  }
  else{
    return t3(n/3)+t3((n+2)/3)+n;
  }
}


int main(void){
  for(int i=0;i<=28;i++){
    printf("i = %d |",i);
    r=-1;
    int x= t1(i);
    printf("T1: %d -> número de chamadas: %d |", x,r);
    r=-1;
    x= t2(i);
    printf("T2: %d -> número de chamadas: %d |", x,r);
    r=-1;
    x= t3(i);
    printf("T3: %d -> número de chamadas: %d \n", x,r);
  }
  return 0;
}
