#include <stdio.h>
int multiplication( int n , int m){
	return n*m;
}
int main(){
	int n,m;
	printf("donnez deux nombre:\n");
	scanf("%d" , &n);
	scanf("%d" ,&m);
	printf("le produit est %d" , multiplication(n,m));
	return 0;
}
