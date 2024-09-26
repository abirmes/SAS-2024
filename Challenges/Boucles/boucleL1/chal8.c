#include <stdio.h>
int main(){
	int n,i;
    printf("donnez un nombre entier\n");
    scanf("%d" ,&n);
    if(n==0 || n==1) printf("%d" , n);
    else{
    	while(n!=2) n=(n-1)+(n-2);
    	
    	
    	
    	printf("%d" , n);	
    		
		
		
	}
	return 0;
}
