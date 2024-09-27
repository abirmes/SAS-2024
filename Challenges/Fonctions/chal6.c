#include <stdio.h>

int fib(int n){
	if(n==0 || n==1) 
	return n;
	else return fib(n-2)+fib(n-1);
}
int main(){
	int n,i;
    printf("donnez un nombre entier\n");
    scanf("%d" ,&n);
    printf("%d" , fib(n));
	return 0;
}
