#include <stdio.h>
int main(){
	int n;
	int m=1;
	int i,j,k;
	printf("donnez un nombre entier");
	scanf("%d" , &n);
	n=2*n;
    for(i=0;i<n;i++){
    	for(j=n;j>i;j--){
    		printf(" ");
		}
		for(k=0;k<i;k++){
			if(i%2!=0)
			printf("* ");
		}
		printf("\n");
    	
	}
	return 0;
}
