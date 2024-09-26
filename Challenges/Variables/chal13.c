#include <stdio.h>
int main(){
	int n;
	int m,s;
	printf("donnez un nombre entier:\n");
	scanf("%d" , &n);
	int i=1;
	m=1;
	while(n!=0){
		
		n=n/2;
		if(n%2!=0){
			m=m*i+1;
		}
		else {
			m=m*i;
		}
		i*=10;
		s++;
		
	}
	printf(" avant l'inverse \t\t%d \n" ,m);
	printf("%d\n" , s);
	int var,j;
	j=1;
	printf("c'est la convertion du %d en binaire \t" ,n);
	for(i=0;i<s+1;i++){
		var=(m/j)%10;
		printf("%d" , var);
		j*=10;
		
	}

	
	
    	
	
	
	
}

