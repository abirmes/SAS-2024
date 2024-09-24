#include <stdio.h>
int main(){
	int n;
	printf("donnez un nombre reel\n");
	scanf("%d" , &n);
	if(n%2==0) printf("le nombre est pair");
	else printf("le nombre est impair");
	return 0;
	
}
