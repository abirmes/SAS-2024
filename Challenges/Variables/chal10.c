#include <stdio.h>
#include <math.h>
int main(){
	float rayon;
	float volume;
	printf("le rayon du sphere?\n");
	scanf("%f" , &rayon);
	volume =(4/3)*3.14*pow(rayon , 3);
	printf("le volume du sphere est : %f \n" , volume);
	return 0;
}
