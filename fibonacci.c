#include <stdio.h>
int fib(int n){
	int a=0,b=1;
	int c;
	for(int i=3;i<=n;i++){
		c=a+b;
		a=b;
		b=c;
	}
	return c;
}
int main(){
	int n;
	scanf("%d",&n);
   int k=fib(n);
	printf("%d",k);
	return 0;
}
