#include <stdio.h>
int main(){
	int temp;
	printf("quelle est la temparature en C?\n");
	scanf("%d" , &temp);
	printf("la temperature en Kelvin est %f\n" , temp+273.15);
	return 0;
}
