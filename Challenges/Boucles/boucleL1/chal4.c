#include <stdio.h>
int main(){
	int n;
	int m=0;
	printf("donnez un entier\n");
	scanf("%d" ,&n);
	printf("les nombres impairs sont donc:\n");
	int j=0;
	while(m<n){
		
		if(j%2!=0) {printf("%d\t" , j);
		m++;
		}
		j++;
	}

	
	return 0;
	
}
