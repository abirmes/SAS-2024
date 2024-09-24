#include <stdio.h>
int main(){
	float a,b;
	printf("donnez a\n");
	scanf("%f" , &a);
	printf("donnez b\n");
	scanf("%f" , &b);
	printf("%f + %f = %f\n" , a , b , a+b);
	printf("%f - %f = %f\n" , a , b , a-b);
	printf("%f x %f = %f\n" , a , b , a*b);
	printf("%f / %f = %f\n" , a , b , a/b);
	
	return 0;
}
