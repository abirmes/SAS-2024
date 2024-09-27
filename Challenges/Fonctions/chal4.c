#include <stdio.h>
#include <stdio.h>
int minimum(int n , int m){
	if(m<n){
		return m;
	}
	else return n;
}
int main(){
	int n,m;
	printf("donnez deux nombre:\n");
	scanf("%d" , &n);
	scanf("%d" ,&m);
	printf("le minimum est %d" , minimum(n,m));
	return 0;
}
