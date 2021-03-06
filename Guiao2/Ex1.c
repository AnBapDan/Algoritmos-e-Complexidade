#include<stdio.h>
#include<math.h>
#include"elapsed_time.h"
static unsigned int iter=0;
static unsigned int a = 0;
static unsigned int b = 1;

unsigned int Pr (int n){
  if(n == 0){
  //  puts("P(0) = 0;\t");
    return a;
  }
  else if(n == 1){
  //  puts("P(1) = 1;\t");
    return b;
  }
  else{
//    printf("P(%d) = %d ;\t",n, 3 * P(n-1) + 2 * P(n-2));
    iter++;
    return 3 * Pr(n-1) + 2 * Pr(n-2);
  }
}


unsigned int Pi (int n){
  if(n == 0){
    return a;
  }
  else if(n == 1){
    return b;
  }
  else{
    int tmp =  3 * b + 2 * a;
    a = b;
    b = tmp;
    return b;
  }
}



int main(void){
  puts("Valor a calcular: ");
  int n = 0;
  scanf("%d",&n);


  for(int i = 0; i<=n; i++){
    elapsed_time();
    int x = Pr(i);
    double h= elapsed_time();
    printf("P(%d) = %d ;\t Time= %f\n",i, x, h);
  }
  printf("\n");


  for(int i = 0; i<= n; i++){
    elapsed_time();
    int y= Pi(i);
    double h= elapsed_time();
    printf("P(%d) = %d ;\t Time= %f\n",i, y, h);

  }
  printf("\n");

  return 0;
}
