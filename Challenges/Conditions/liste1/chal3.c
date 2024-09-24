#include <stdio.h>
int main(){
    int n , m ;
    printf("donnez la valeur du premier nombre \n");
    scanf("%d" ,&n);
    printf("donnez la valeur du deuxieme nombre \n");
    scanf("%d" ,&m);
    if(n==m) printf("les nombres sont identiques !!! voila le triple de leur somme : %d" , (n+m)*3);
    else printf("les nombres ne sont pas identiques :( leur somme est %d" , n+m);
    
	return 0;
	
}
