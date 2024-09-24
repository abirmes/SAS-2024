#include <stdio.h>
int main(){
	int vitesse;
	printf("quelle est la vitesse en kilometres par heure?\n");
	scanf("%d" , &vitesse);
	printf("la vitesse en metres par seconde est %f\n" , vitesse*0.27778);
	return 0;
}

