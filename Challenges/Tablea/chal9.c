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
	printf("le tableau avant la modification :\n");
		for(i=0;i<n;i++){
		printf("T[%d] = %d \t" , i+1 , T[i]);
	}
	for(i=0;i<n/2;i++){
		T[i]=T[n-1-i];
	}
	printf("le tableau apres la modification :");
		for(i=0;i<n;i++){
		printf("T[%d] = %d \t" , i+1 , T[i]);
	}
	return 0;
	
}
