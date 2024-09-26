#include <stdio.h>
int parite(int n){
	if(n%2==0) return 1;
	else return 0;
}

int main(){
	int n;
	printf("donnez un nombre:\n");
	scanf("%d" , &n);
	if(parite(n)==1)
	printf("le nombre est pair");
	else printf("le nombre est impair");
	return 0;
}
