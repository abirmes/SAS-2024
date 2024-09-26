#include <stdio.h>

main(){
	int n ;
int a,b,i,r;
printf("entre n:");
scanf("%d",&n);
a=n/1000;
b=(n/100)%10;
i=(n/10)%10;
r=n%10;
printf("%d%d%d%d",r,i,b,a);
}
