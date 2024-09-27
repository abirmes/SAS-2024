#include <stdio.h>
#include <math.h>

int main(){
	int a,b,c,;
	printf("donnez le a:");
	scanf("%d" , &a);
	printf("donnez le b:\n");
	scanf("%d" , &b);
	printf("donnez le c:\n");
	scanf("%d" , &c);
	float delta;
	delta=b*b-4*a*c;
	if(delta<0) printf("il na aucune solution'");
	else if(delta==0) printf("il ya une seul solution: %f" , -b/(2*a));
	else{
		printf("il ya 2 solutions la premiere est %f et la deuxieme est %f : " , (-b-sqrt(delta))/(2*a) , (-b+sqrt(delta))/(2*a) );
	}
	
	
	return 0;
}
