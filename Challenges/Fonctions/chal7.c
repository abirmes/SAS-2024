#include <stdio.h>
#include <string.h>
char inverse(char mot[]){
	int n,i;
	for(i=0;i<n/2;i++){
		mot[i]=mot[n-1-i];
	}
	return mot;
}
	int main(){
	int n,i;
	printf("donnez la longuer de ce mot\n");
	scanf("%d" , &n);
	char chaine[n];
	printf("le mot?\n");
    scanf("%s" , chaine);
	printf("%s\n" , chaine);
	printf("le mot inverese est:\n");
	 inverse(chaine);
	strcpy(chaine,inverse(chaine);
	printf("%s" ,chaine);
    
	return 0;  
}
