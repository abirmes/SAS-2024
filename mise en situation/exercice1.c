#include <stdio.h>
int main(){
	float hauteur , base ;
	printf("donnez la base du triangle \n");
	scanf("%f" , &base);
	printf("donnez la hauteur du triangle \n");
	scanf("%f" , &hauteur);
	printf("l'aire est %f et le perimetre est %f" , (base*hauteur)/2 , 3*base);
	
    return 0;
}
