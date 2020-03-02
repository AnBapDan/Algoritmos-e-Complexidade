#include<stdio.h>
#include<math.h>
#define C1 0.24253562503633297352
#define C2 1.27019663313689157536

unsigned int f1(int n){
  int x= (pow(0.5*(3+ sqrt(17)),n) - pow(0.5*(3 - sqrt(17)),n))/ sqrt(17);
  return x;
}

unsigned int f2(int n){
  int a = round(1/sqrt(17) * pow(0.5*(3+ sqrt(17)),n) + 0.5 );
  return a;
}

unsigned int f3(int n){
  int a = round(C1 * exp(C2*n));

  return a;
}


int main(void){
  puts("Valor a calcular: ");
  int n = 0;
  scanf("%d",&n);

  int a= f1(n);
  printf("%d \t", a);

  a= f2(n);
  printf("%d \t", a);

  a= f3(n);
  printf("%d \t", a);



  return 0;
}
