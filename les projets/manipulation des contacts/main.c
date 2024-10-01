
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "library.h"

int main(){
	Contact* listeContacts=NULL;
    listeContacts = ajouterContact("abir", "+212693844429", "abirmeskini02@gmail.com", listeContacts);
   
    int choix;
    char nom[20];
    char numTel[15];
    char adresseE[100];
    do{
    system("cls");
    printf("\n\n");
    printf("  ******* que qiueres? *********");
    printf("\n\n");
    printf("tapez votre choix :\n");
    printf("  1 - ajouter un contact . \n");
    printf("  2 - modifier un contact . \n");
    printf("  3 - supprimer un contact . \n");
    printf("  4 - afficher la liste des contacts . \n");
    scanf("%d" , &choix);
    	switch(choix){
    	case 1 : 
    		system("cls");
    		printf("donnez les informations du nouveau contact\n\n");
    		printf("nom : \n");
    		scanf("%s" ,nom);
    		printf("numero de telephone : \n");
    		scanf("%s" , numTel);
    		printf("adresse email :  : \n");
    		scanf("%s" , adresseE);
    		listeContacts=ajouterContact(nom , numTel , adresseE , listeContacts);
    		system("cls");
    		printf("liste de contacts apres les modification\n");
    		afficherListeContacts(listeContacts);
    		backtohome();
    		break;
    	case 2 :
    		system("cls");
    		printf("quelle est le nom du contact tu veux modifier??\n");
    		scanf("%s" , nom);
    		printf("\n\n");
    		printf("donnez les nouveaux donnees\n");
    		printf("numero de telephone :\n");
    		scanf("%s" , numTel);
    		printf("adresse email :");
    		scanf("%s" , adresseE);
    		modifierContact(nom , numTel , adresseE , listeContacts);
    		system("cls");
    		printf("liste de contacts apres les modification\n");
    		afficherListeContacts(listeContacts);
    		backtohome();
    		break;
    	case 3 :
    		system("cls");
    		printf("quelle est le nom du contact tu veux supprimer ??\n");
    		scanf("%s" , nom);
    		supprimerContact(nom,listeContacts);
    		system("cls");
    		printf("liste de contacts apres les modification\n");
    		afficherListeContacts(listeContacts);
    		backtohome();
    		break;
    	case 4 : 
    		system("cls");
    		afficherListeContacts(listeContacts);
    		backtohome();
    		break;
    	default : 
    		printf("ce n'est pas un choix");
    		break;
    	
	}
	}while(choix<5);
	while(listeContacts=!NULL){
		Contact* courant=listeContacts;
		listeContacts=listeContacts->suiv;
		free(courant);
	}
    return 0;
	
}
