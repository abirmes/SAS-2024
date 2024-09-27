#include <stdio.h>
int main(){
	int n;
    printf("donnez la taille du tableau\n");
	scanf("%d" , &n);
	int tab[n];
	int i;
	for(i=0;i<n;i++){
		printf ("donnez la valeur de la case %d du tableau :\n" , i+1);
		scanf("%d" , &tab[i]);
	}
	
	printf("les nombres paire dans le tableau sont:\n");
	for(i=0;i<n;i++){
		if(tab[i]%2==0) {
			printf ("tab[%d] = %d\n" , i+1 , tab[i]);	
		}
	}
	
	return 0;
}
