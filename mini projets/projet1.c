#include <stdio.h>
#include <string.h>


int main(){
	int n,i;
	printf("donnez le nombre des livres existent\n");
	scanf("%d" , &n);
	char livre[n][150];
	char auteur[n][100];
	float prix[n];
	int quantity[n];
	for(i=0;i<n;i++){
		printf("donnez le nom du livre %d \n" , i+1);
		scanf("%s" , &livre[i]);
		printf("donnez le nom du auteur de livre %d \n" , i+1);
		scanf("%s" , &auteur[i]);
		printf("donnez le prix du livre %d \n" , i+1);
		scanf("%f" , &prix[i]);
		printf("donnez la quantite du livre en stock %d \n" , i+1);
		scanf("%d" , &quantity[i]);
		
	}
	printf("\n\n\n ********************\n\n\n");
	printf("\n\n\n ********************\n\n\n");
	for(i=0;i<n;i++){
		printf("livre %d est %s\n" ,i+1, livre[i]);
		printf(" le nom du auteur de livre %d est %s \n" , i+1 , auteur[i]);
		printf("le prix du livre %d est %f\n" , i+1 , prix[i]);
		printf("la quantite du livre %d en stock est %d \n" , i+1 , quantity[i]);
	}
	char modif[50];
	int nouvelleQuan;
	printf("\n\n\n ********************\n\n\n");
	printf("\n\n\n ********************\n\n\n");
	printf("donnez le nom du livre que tu veux changer le quantite\n");
	scanf("%s" ,&modif );
	printf("donnez la nouvelle quantite\n");
	scanf("%d" , &nouvelleQuan );
	for(i=0;i<n;i++){
		if(strcmp(livre[i] , modif) == 0){
			quantity[i]=nouvelleQuan;
		}
	}
	printf("la liste des tableau apres les changement\n");
	printf("\n\n\n ********************\n\n\n");
	printf("\n\n\n ********************\n\n\n");
	for(i=0;i<n;i++){
		printf("livre %d est %s\n" ,i+1, livre[i]);
		printf(" le nom du auteur de livre %d est %s \n" , i+1 , auteur[i]);
		printf("le prix du livre %d est %f\n" , i+1 , prix[i]);
		printf("la quantite du livre %d en stock est %d \n" , i+1 , quantity[i]);
	}
	printf("\n\n\n ********************\n\n\n");
	printf("\n\n\n ********************\n\n\n");printf("\n\n\n ********************\n\n\n");
	printf("\n\n\n ********************\n\n\n");
	char supp[150];
	int m;
    printf("donnez le nom du livre que tu veux supprimer\n");
	scanf("%s" ,&supp );
	for(i=0;i<n;i++){
		if(strcmp(livre[i] , supp) == 0){
			m=i;
		}
	}
	for(i=m;i<n;i++){
		strcpy(livre[i] , livre[i+1]);
		strcpy(auteur[i] , auteur[i+1]);
		prix[i]=prix[i+1];
		quantity[i]=quantity[i+1];
		n--;
		
		}
	
	printf("la liste des tableau apres les changement\n");
	printf("\n\n\n ********************\n\n\n");
	printf("\n\n\n ********************\n\n\n");
	for(i=0;i<n;i++){
		printf("livre %d est %s\n" ,i+1, livre[i]);
		printf(" le nom du auteur de livre %d est %s \n" , i+1 , auteur[i]);
		printf("le prix du livre %d est %f\n" , i+1 , prix[i]);
		printf("la quantite du livre %d en stock est %d \n" , i+1 , quantity[i]);
	}
	printf("\n\n\n ********************\n\n\n");
	printf("\n\n\n ********************\n\n\n");
	int somme=0;
	for(i=0;i<n;i++){
		somme+=quantity[i];
		
	}
    printf("la somme des livres en stock est %d" , somme);
    
}
