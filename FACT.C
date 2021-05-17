// factorial of n nos.
// first line t test cases followed no numbers in each line.
#include<stdio.h>

long  *ptr;
long  f(long n){
  if (n>0)
      return (ptr[n]);
  else return 0;
}

int main(){
   long  i,num,n;
   ptr=(long *) malloc(100001*sizeof(long));
   ptr[0]=ptr[1]=1;
   for(i=2; i<=100000;++i) {
       ptr[i]=(ptr[i-1]*i) % 1000000007;
   }
   scanf("%ld", &num);
   for(i = 0; i < num; ++i) {
	  scanf("%ld", &n);
	  printf("%ld\n", f(n));
    }
return 0;
}
