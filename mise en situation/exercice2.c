#include <stdio.h>
int main(){
	float temperature;
	printf("quelle est votre temperature??\n");
	scanf("%f" , &temperature);
	if(temperature>=38) printf("Vous avez de la fievre ");
	else{
		printf("votre temperature est normale");
	}
	
	return 0;
}
