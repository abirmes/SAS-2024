#include <stdio.h>
int main(){
	int n , m;
	int i ;
	printf("donnez la taille du premier tableau\n ");
	scanf("%d" , &n);
	printf("donnez la taille du deuxieme tableau\n ");
	scanf("%d" , &m);
	int tab1[n];
	int tab2[m];
	for(i=0;i<n;i++){
		printf ("donnez la valeur de la case %d du premier tableau :\n" , i+1);
		scanf("%d" , &tab1[i]);
	}
	for(i=0;i<m;i++){
		printf ("donnez la valeur de la case %d du deuxieme tableau :\n" , i+1);
		scanf("%d" , &tab2[i]);
	}
	int fus[n+m];
	for(i=0;i<n;i++){
		fus[i]=tab1[i];
	}
	for(i=n;i<n+m;i++){
		fus[i]=tab2[i-n];
	}
	printf("voila le tableau fusionnee\n\n");
	for(i=0;i<n+m;i++){
		printf("tab[%d] = %d\n" , i , fus[i]);
	}
	return 0;
	
}
