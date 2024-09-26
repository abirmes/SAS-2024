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
	float moy;
	for(i=0;i<n;i++){
		somme=somme+T[i];
	}
	moy=somme/n;
	printf("la moyenne du membre de ce tableau est %f" , moy);
	
}
