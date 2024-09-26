#include <stdio.h>
	int fact(int n){
		int somme ,i;
		for(i=n;i>0;i--){
			somme=somme+i;
			
		}
		return somme;
	}
int main(){
    int n;
	printf("donnez un nombre:\n");
	scanf("%d" , &n);
	printf("le factorielle de ce nombre est %d" , fact(n));
	return 0;
}
