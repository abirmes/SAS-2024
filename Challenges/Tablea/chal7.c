#include <stdio.h>
int main(){
	int i,j,n;
	printf("donnez la taille du tableau:\n");
	scanf("%d" , &n);
	int T[n];
	
	for(i=0;i<n;i++){
		printf("donnez l'element %d du tableau \n" , i+1);
		scanf("%d" ,&T[i]);
	}
	
	printf("le tableau avant la modification :");
		for(i=0;i<n;i++){
		printf("T[%d] = %d \t" , i+1 , T[i]);
	}
	printf("\n");
	int temp;
	for(j=0;j<n-1;j++){
		for(i=0;i<n-1;i++){
			if(T[i]>T[i+1]){
			    temp=T[i];
			    T[i]=T[i+1];
			    T[i+1]=temp;
		    }
		}
	}
	printf("le tableau apres la modification :");
		for(i=0;i<n;i++){
		printf("T[%d] = %d \t" , i+1 , T[i]);
	}
	return 0;
}
