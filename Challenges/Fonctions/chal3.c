#include <stdio.h>
int maximum(int n , int m){
	if(m>n){
		return m;
	}
	else return n;
}
int main(){
	int n,m;
	printf("donnez deux nombre:\n");
	scanf("%d" , &n);
	scanf("%d" ,&m);
	printf("le maximum est %d" , maximum(n,m));
	return 0;
}
