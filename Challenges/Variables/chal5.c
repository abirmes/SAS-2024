#include <stdio.h>
int main(){
	float temperature;
	printf("quelle est la temperature en Celisius?\n");
	scanf("%f" , &temperature);
	if(temperature<0) printf("l'etat de l'eau sur cette temperature est solide\n");
	else if (temperature>=0 && temperature<100) printf("l'etat de l'eau sur cette temperature est liquide");
	else printf("l'etat de l'eau sur cette temperature est gaz");
	return 0;
	
	
}

