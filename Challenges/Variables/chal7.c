#include <stdio.h>
int main(){
	float a,b,c;
	printf("donnez a\n");
	scanf("%f" , &a);
	printf("donnez b\n");
	scanf("%f" , &b);
	printf("donnez c\n");
	scanf("%f" , &c);
	a*=2;
	b*=3;
	c*=5;
	printf("la moyenne ponderee est %f\n" , (a+b+c)/10);
	
	
	
	return 0;
}

