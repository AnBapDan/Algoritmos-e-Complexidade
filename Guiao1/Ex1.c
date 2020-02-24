#include<stdio.h>
#include<math.h>

static unsigned int nIter=0;

unsigned int f1(unsigned int n){
  unsigned int i, j, r= 0;
  for(i = 1; i <= n; i++){
    for(j = 1; j <=n;j++){
      r += 1;
      nIter++;
    }
  }
  return r;
}

unsigned int f2(unsigned int n){
  unsigned int i, j,r= 0;
  for(i = 1; i <= n; i++){
    for(j = 1; j <= i; j++){
      r += 1;
      nIter++;
    }
  }
  return r;
}

unsigned int f3(unsigned int n){
  unsigned int i, j,r= 0;
  for(i = 1; i <= n; i++){
    for(j = i; j <= n; j++){
      r += j;
      nIter++;
    }
  }
  return r;
}

unsigned int f4(unsigned int n){
  unsigned int i, j,r= 0;
  for(i = 1; i <= n; i++){
    for(j = i; j >= 1; j/=10){
      r += i;
      nIter++;
    }
  }
  return r;
}


int main (void){
  unsigned int r=0;
  for(unsigned int n=1; n<=15; n++){
    printf("%4d\t", n );
    nIter=0;
    r=f1(n);
    printf("%4d\t%4d\t",r,nIter);

    nIter=0;
    r=f2(n);
    printf("%4d\t%4d\t",r,nIter);

    nIter=0;
    r=f3(n);
    printf("%4d\t%4d\t",r,nIter);

    nIter=0;
    r=f4(n);
    printf("%4d\t%4d\t",r,nIter);
    puts("");

  }


}
