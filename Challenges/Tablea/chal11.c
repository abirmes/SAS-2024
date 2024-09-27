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
	int val;
	int nouvelleVal;
	printf("donnez la valeur qui tu veux changer \n");
	scanf("%d" ,&val);
	printf("donnez la nouvelle valeur \n");
	scanf("%d" ,&nouvelleVal);
	printf("le tableau avant les changement :\n \n \n");
	for(i=0;i<n;i++){
		
		printf("tab[%d] = %d\n" , i+1 , tab[i] );
	}
	
	
	for(i=0;i<n;i++){
		if(val==tab[i]) {
			tab[i]=nouvelleVal;
		}
	}
	printf("le tableau apres les changement :\n \n \n");
	for(i=0;i<n;i++){
		
		printf("tab[%d] = %d\n" ,i+1 , tab[i] );
	}
	
	return 0;
}
