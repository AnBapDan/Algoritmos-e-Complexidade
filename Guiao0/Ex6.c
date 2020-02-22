#include<stdio.h>
#include<math.h>
#define M_PI 3.14159265358979323846


int printArray(char*s, int a[], int n){
  printf("%s : ", s);
  for(int i =0; i< n; i++){
    printf("%d ", a[i]);
  }
  puts("");
  return 0;
}

int cumSum(int a[], int b[],int n){
  int c=0;
  for (int i=0; i<n; i++) {
    c+=a[i];
    b[i]=c;
  }
  return 0;
}

int main(void){

  int a[] = {31,28,31,30,31,30,31,31,30,31,30,31},n;
  n = sizeof(a)/sizeof(a[0]);
  printArray("a" , a, n);

  int b[12];
  cumSum(a, b, n);
  int n1 = sizeof(b)/sizeof(b[0]);
  printArray("b", b, n1);

  return 0;
}
