#include <stdio.h>
int main(){
	int n,i;
	printf("donnez un nombre entier\n");
	scanf("%d" , &n);
	char motDePass[n];
	printf("ecrivez votre mot de passe chiffre par chiffre\n");
	for(i=0;i<n;i++){
		scanf("%c" ,motDePass[i]);
	}
	for(i=0;i<n;i++){
		printf("%c" ,motDePass[i]);
	}
	
	
}
