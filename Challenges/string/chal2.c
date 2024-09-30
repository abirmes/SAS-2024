#include <stdio.h>
#include <string.h>
#define max 100
int main(){
	char mot1[max];
	char mot2[max];
	gets(mot1);
	gets(mot2);
	strcat(mot1,mot2);
	puts(mot1);

}
