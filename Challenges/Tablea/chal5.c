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
	int min=T[0];
	for(i=0;i<n;i++){
		if(min>T[i]){
			min=T[i];
		}
	}
	printf("le minimum est %d" ,min);
	return 0;
}
