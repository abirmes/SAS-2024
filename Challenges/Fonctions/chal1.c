#include <stdio.h>
int addition( int n , int m){
	return n+m;
}
int main(){
	int n,m;
	printf("donnez deux nombre:\n");
	scanf("%d" , &n);
	scanf("%d" ,&m);
	printf("l'addition est %d" , addition(n,m));
	return 0;
}
