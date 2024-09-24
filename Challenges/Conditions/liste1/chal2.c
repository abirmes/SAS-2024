#include <stdio.h>
int main(){
	char vowel;
	printf("donnez un caractere\n");
	scanf("%c" , &vowel);
	switch(vowel){
		case 'i' :
			printf("c'est un voyelle !!\n");
			break;
		case 'u' :
			printf("c'est un voyelle !!\n");
			break;
		case 'a' :
			printf("c'est un voyelle !!\n");
			break;
		case 'e':
			printf("c'est un voyelle !!\n");
			break;
		case 'y' :
			printf("c'est un voyelle !!\n");
			break;
		case 'o' :
		    printf("c'est un voyelle !!\n");
			break;
		default : 
		printf("c'est pas un voyelle :(\n");
		
	}
	return 0;
	
}
