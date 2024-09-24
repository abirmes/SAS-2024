#include <stdio.h>
#include <math.h>
int main(){
	float distance;
	float x,x1,x2,y,y1,y2,z,z1,z2;
	printf("donnez z1\n");
	scanf("%f" , &z1);
	printf("donnez z2\n");
	scanf("%f" , &z2);
	printf("donnez y1\n");
	scanf("%f" , &y1);
	printf("donnez y2\n");
	scanf("%f" , &y2);
	printf("donnez z1\n");
	scanf("%f" , &z1);
	printf("donnez z2\n");
	scanf("%f" , &z2);
	x=x2-x1;
	y=y2-y1;
	z=z2-z1;
	distance=sqrt(x*x + y*y + y*y);
	printf("la distance est %f\n" ,distance);
	
	
	
	
	
	return 0;
}
