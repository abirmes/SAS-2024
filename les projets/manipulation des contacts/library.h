#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct Contact{
	char nom[30];
	char numTel[20];
	char adesseE[100];
	struct Contact *suiv;
}Contact;
Contact* ajouterContact(char* nom , char* numTel, char* adresseM,Contact* listeContacts ){
	Contact* nouvContact=(Contact*)malloc(sizeof(Contact));
	strcpy(nouvContact->nom,nom);
	strcpy(nouvContact->numTel,numTel);
	strcpy(nouvContact->adesseE,adresseM);
	nouvContact->suiv=NULL;
	if(listeContacts==0){
		listeContacts=nouvContact;
	}
	else{
		Contact *courant=listeContacts;
		while(courant->suiv!=NULL){
			courant=courant->suiv;
		}
		courant->suiv=nouvContact;
	}
	return listeContacts;
}
void modifierContact(char* nom, char* nouvEmail, char* nouvNumTel, Contact* listeContacts){
	Contact* courant=listeContacts;
	while( courant->suiv!=NULL){
		if(strcmp(courant->nom, nom)==0){
			strcpy(courant->numTel,nouvNumTel);
			strcpy(courant->adesseE,nouvEmail);
			return;
		}
		courant=courant->suiv;
	}
}
void supprimerContact(char* nom , Contact* listeContacts){
	Contact* courant=listeContacts;
	Contact* preced;
	while(courant!=NULL){
		if(strcmp(courant->nom,nom)==0){
			if(preced==NULL){
			listeContacts=courant->suiv;
		    }
			else {
				preced->suiv=courant->suiv;
			}
			free(courant);
		}
		preced=courant;
		courant=courant->suiv;
	}
}
Contact* afficherListeContacts(Contact* listeContacts){
	Contact* courant=listeContacts;
	while(courant!=0){
		printf("le nom : %s\n" , courant->nom);
		printf("le numero du telephone : %s\n" , courant->numTel);
		printf("l'adresse email : %s\n" , courant->adesseE);
		courant=courant->suiv;
	}
}
void backtohome(){
	while(getchar()!='\n')
	;
	{
		printf("appuyez sur entrer pour revenir au menu...");
		getchar();
	}
}
