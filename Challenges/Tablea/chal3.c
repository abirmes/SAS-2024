#include <stdio.h>
int main(){
	int i,n;
	printf("donnez la taille du tableau:\n");
	scanf("%d" , &n);
	int T[n];
	for(i=0;i<n;i++){
		printf("donnez l'element %d du tableau \n" , i+1);
		scanf("%d" ,&T[i]);
	}
	int somme=0;
		for(i=0;i<n;i++){
		somme=somme+T[i];
	}
	printf("la somme du nombre du tableau est :%d\n" , somme);
	printf("le tableau :");
		for(i=0;i<n;i++){
		printf("T[%d] = %d \t" , i+1 , T[i]);
	}
	return 0;
}
