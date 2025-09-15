#include <stdio.h>
int fact(int n){
	if(n==1){
		return 1;
	}
	return n*fact(n-1);
}
int main(){
	int n;
	scanf("%d",&n);
   int k=fact(n);
	printf("%d",k);
	return 0;
}
