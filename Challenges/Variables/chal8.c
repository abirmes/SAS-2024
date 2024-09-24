#include <stdio.h>
int main(){
	float a,b,c;
	printf("donnez a\n");
	scanf("%f" , &a);
	printf("donnez b\n");
	scanf("%f" , &b);
	printf("donnez c\n");
	scanf("%f" , &c);
	float sum;
	sum=a*b*c;
	printf("la moyenne geometrique du ces nombres est: %f\n" , sum/3);
	return 0;
}
