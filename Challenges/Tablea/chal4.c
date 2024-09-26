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
	int max=T[0];
	for(i=0;i<n;i++){
		if(max<T[i]){
			max=T[i];
		}
	}
	printf("le maximum est %d" ,max);
}
