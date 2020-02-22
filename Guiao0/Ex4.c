#include<stdio.h>
#include<math.h>
#define M_PI 3.14159265358979323846

int main(void){
  int nmin;
  int nmax;
  int space;
  printf("Valor minimo do ang: ");
  scanf("%d", &nmin );
  printf("Valor maximo do ang: ");
  scanf("%d" ,&nmax);
  printf("Distancia entre eles: ");
  scanf("%d", &space);
  puts("ang sin(ang)      cos(ang)      ");
  puts("--- ------------- -------------");
  for(int i =nmin; i<=nmax; i+=space){
    double rads = i * (M_PI/180);
    printf("%d  %f  %f\n", i ,cos(rads), sin(rads));
  }

  return 0;
}
