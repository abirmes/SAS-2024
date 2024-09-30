#include <stdio.h>
#include <string.h>
#define max 100
int main(){
	char mot1[max];
	char mot2[max];
	gets(mot1);
	gets(mot2);
	if(strcmp(mot1,mot2)==0) printf("les chaines sont egales");
	else printf("les chaines sont deffirents");
}
