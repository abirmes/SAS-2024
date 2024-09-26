#include <stdio.h>
int main(){
	int n;
	int m=0;
	printf("donnez un entier\n");
	scanf("%d" ,&n);
	int j=0;
	while(m<n){
		
		if(j%2==0) {printf("%d\n" , j);
		m++;
		}
		j++;
	}

	
	return 0;
}
