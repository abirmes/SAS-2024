#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//LES STRUCTURES
typedef struct {
	char jour[4];
	char mois[4];
	char annee[6];
} Date;
typedef struct Reservation {
	char nom[30];
	char prenom[30];
	char numDeTelephone[20];
	int age;
	char status[30];
	Date dateReservation;
	char ref[60];
	struct Reservation *suivant;
} Reservation;
//CRUD
Reservation* ajouterReservation(Reservation** listeRes , char* nom , char* prenom , char* numDeTele, int age , char* status , char* jour , char* mois , char* annee ) {
	Reservation* nouvR=(Reservation*)malloc(sizeof(Reservation));
	if(nouvR==NULL) {
		printf("allocation impossible");
		return NULL;
	}
	nouvR->ref[0]='\0';
	strcpy(nouvR->nom,nom);
	strcpy(nouvR->prenom,prenom);
	strcpy(nouvR->numDeTelephone,numDeTele);
	nouvR->age=age;
	strcpy(nouvR->status,status);
	strcpy(nouvR->dateReservation.jour,jour);
	strcpy(nouvR->dateReservation.mois,mois);
	strcpy(nouvR->dateReservation.annee,annee);
	strncat(nouvR->ref,nouvR->nom,3);
	strncat(nouvR->ref,nouvR->prenom,3);
	strncat(nouvR->ref,nouvR->dateReservation.annee,4);
	strncat(nouvR->ref,nouvR->dateReservation.mois,2);
	strncat(nouvR->ref,nouvR->dateReservation.jour,2);
	nouvR->suivant=NULL;
	if(*listeRes==NULL) {
		*listeRes=nouvR;
	} else {
		Reservation* courant=*listeRes;
		while(courant->suivant!=NULL) {
			courant=courant->suivant;
		}
		courant->suivant=nouvR;
	}
	return *listeRes;
}
void afficherListeReservation(Reservation* listeRes) {
	Reservation* courant=listeRes;
	while(courant!=NULL) {
		printf("\n\n\n*********\n\n");
		printf("le nom : %s\n" , courant->nom);
		printf("le prenom : %s \n" , courant->prenom);
		printf("numero du telephone : %s\n" , courant->numDeTelephone),
		       printf("age : %d\n" , courant->age);
		printf("status :%s\n" , courant->status);
		printf("unique reference : %s\n" , courant->ref);
		printf("date de reservation : %s/%s/%s" , courant->dateReservation.jour,courant->dateReservation.mois,courant->dateReservation.annee);
		courant=courant->suivant;
	}
}

void modifierListeReservation(Reservation* listeRes , char* ref) {
	Reservation* courant=listeRes;
	while(courant!=NULL) {
		if(strcmp(courant->ref,ref)==0) {
			printf("donnez les nouveau informations : \n\n");
			printf("le nom : ");
			scanf("%s" , courant->nom);
			printf("le prenom : ");
			scanf("%s" , courant->prenom);
			printf("le numero du telephone : ");
			scanf("%s" , courant->numDeTelephone);
			do {
				printf("status : ");
				scanf("%s" , courant->status);
			} while(strcmp(courant->status,"traite")!=0 && strcmp(courant->status,"annule")!=0 && strcmp(courant->status,"valide")!=0 && strcmp(courant->status,"reporte")!=0);
			printf("l'age : ");
			scanf("%d" , &courant->age);
			printf("le jour de reservation : ");
			scanf("%s" , courant->dateReservation.jour);
			printf("le mois de reservation : ");
			scanf("%s" , courant->dateReservation.mois);
			printf("l'annee de reservation : ");
			scanf("%s" , courant->dateReservation.annee);
			return;
		}
		courant=courant->suivant;
	}
}
void supprimerReservation(Reservation* listeRes , char* ref) {
	Reservation* courant=listeRes;
	Reservation* preced=NULL;
	while(courant!=NULL) {
		if(strcmp(courant->ref,ref)==0) {
			if(preced==NULL) listeRes=courant->suivant;
			else {
				preced->suivant=courant->suivant;
			}
			free(courant);
			return;
		}
		preced=courant;
		courant=courant->suivant;
	}
}
//RECHERCHE DES RESERVATIONS
void rechercherReservationParRef(Reservation* listeRes, char* ref) {
	Reservation* courant=listeRes;
	while(courant!=NULL) {
		if(strcmp(courant->ref,ref)==0) {
			printf("la reservation est trouvee!\n");
			printf("le nom : %s\n" , courant->nom);
			printf("le prenom : %s \n" , courant->prenom);
			printf("numero du telephone : %s\n" , courant->numDeTelephone),
			       printf("age : %d\n" , courant->age);
			printf("status :%s\n" , courant->status);
			printf("unique reference : %s\n" , courant->ref);
			printf("date de reservation : %s/%s/%s\n" , courant->dateReservation.jour,courant->dateReservation.mois,courant->dateReservation.annee);
			return;
		}
		courant=courant->suivant;
	}
}
void rechercherReservationParNom(Reservation* listeRes, char* nom) {
	Reservation* courant=listeRes;
	while(courant!=NULL) {
		if(strcmp(courant->nom,nom)==0) {
			printf("la reservation est trouvee!\n");
			printf("le nom : %s\n" , courant->nom);
			printf("le prenom : %s \n" , courant->prenom);
			printf("numero du telephone : %s\n" , courant->numDeTelephone),
			printf("age : %d\n" , courant->age);
			printf("status :%s\n" , courant->status);
			printf("unique reference : %s\n" , courant->ref);
			printf("date de reservation : %s/%s/%s\n" , courant->dateReservation.jour,courant->dateReservation.mois,courant->dateReservation.annee);
		}
		courant=courant->suivant;
	}
}
void rechercherReservationParDate(Reservation* listeRes, char* jour , char* mois , char* annee) {
	Reservation* courant=listeRes;
	while(courant!=NULL) {
		if(strcmp(courant->dateReservation.jour,jour)==0 && strcmp(courant->dateReservation.mois,mois)==0 && strcmp(courant->dateReservation.annee,annee)==0 ) {
			printf("les reservations est trouvee!\n");
			printf("le nom : %s\n" , courant->nom);
			printf("le prenom : %s \n" , courant->prenom);
			printf("numero du telephone : %s\n" , courant->numDeTelephone),
			       printf("age : %d\n" , courant->age);
			printf("status :%s\n" , courant->status);
			printf("unique reference : %s\n" , courant->ref);
			printf("date de reservation : %s/%s/%s\n" , courant->dateReservation.jour,courant->dateReservation.mois,courant->dateReservation.annee);
			printf("**************\n");
		}
		courant=courant->suivant;
	}
}
//STATISTIQUE
float calculerMoyAgeReserve(Reservation* listeRes){
	Reservation* courant=listeRes;
	int somme=0;
	int count=0;
	while(courant!=NULL){
		somme+=courant->age;
		count++;
		courant=courant->suivant;
	}
	return somme/count;
}
void afficherNombrePatientAge(Reservation* listeRes ){
	Reservation* courant=listeRes;
	int adolescents=0;
	int jeunes=0;
	int adultes=0;
	while(courant!=NULL){
		if(courant->age<19) adolescents++;
		else if(courant->age>18 && courant->age<36) jeunes++;
		else adultes++;
		courant=courant->suivant;
	}
	printf("le nombre des adolescents est : %d\n" , adolescents);
	printf("le nombre des jeunes est : %d\n" , jeunes);
	printf("le nombre des adultes est : %d\n" , adultes);
}
void afficherNombreTotaleParStatu(Reservation* listeRes){
	int traite=0;
	int annule=0;
	int valide=0;
	int reporte=0;
	Reservation* courant=listeRes;
	while(courant!=NULL){
		if(strcmp(courant->status,"traite")==0) traite++;
		else if (strcmp(courant->status,"annule")==0) annule++;
		else if (strcmp(courant->status,"valide")==0) valide++;
		else reporte++;
		courant=courant->suivant;
	}
	printf("le nombre du reservations traite est : %d\n" , traite);
	printf("le nombre du reservations annule est : %d\n" , annule);
	printf("le nombre du reservations valide est : %d\n" , valide);
	printf("le nombre du reservations reporte est : %d\n" , reporte);
	
	
}
//TRI
int calculerTempsDuDate(Reservation* listeRes){
	int somme =0;
	somme=atoi(listeRes->dateReservation.annee)*12*30+atoi(listeRes->dateReservation.mois)*30+atoi(listeRes->dateReservation.jour);
	return somme;
}
void triListeReservationParDate(Reservation* listeRes){
	if(listeRes==NULL) return;
	int swapped;
	Reservation* courant;
	Reservation* dernier=NULL;
	Reservation temp;
	do{
		swapped=0;
		courant=listeRes;
		while(courant->suivant!=dernier){ 
		if(calculerTempsDuDate(courant)>calculerTempsDuDate(courant->suivant)){
			temp=*courant;
			strcpy(courant->nom,courant->suivant->nom);
			strcpy(courant->prenom,courant->suivant->prenom);
			strcpy(courant->status,courant->suivant->status);
			strcpy(courant->dateReservation.jour,courant->suivant->dateReservation.jour);
			strcpy(courant->dateReservation.mois,courant->suivant->dateReservation.mois);
			strcpy(courant->dateReservation.annee,courant->suivant->dateReservation.annee);
			strcpy(courant->numDeTelephone,courant->suivant->numDeTelephone);
			strcpy(courant->ref,courant->suivant->ref);
			courant->age=courant->suivant->age;
			
			strcpy(courant->suivant->nom,temp.nom);
			strcpy(courant->suivant->prenom,temp.prenom);
			strcpy(courant->suivant->status,temp.status);
			strcpy(courant->suivant->dateReservation.jour,temp.dateReservation.jour);
			strcpy(courant->suivant->dateReservation.mois,temp.dateReservation.mois);
			strcpy(courant->suivant->dateReservation.annee,temp.dateReservation.annee);
			strcpy(courant->suivant->numDeTelephone,temp.numDeTelephone);
			strcpy(courant->suivant->ref,temp.ref);
			courant->suivant->age=temp.age;
			swapped=1;
			
		}
		courant=courant->suivant;
	}	
	dernier=courant;	
	}while(swapped);
}
void triListeReservationParStatus(Reservation* listeRes){
	if(listeRes==NULL) return;
	int swapped;
	Reservation* courant;
	Reservation* dernier=NULL;
	Reservation temp;
	do{
		swapped=0;
		courant=listeRes;
		while(courant->suivant!=dernier){ 
		if(strcmp(courant->status,courant->suivant->status)>0){
			temp=*courant;
			strcpy(courant->nom,courant->suivant->nom);
			strcpy(courant->prenom,courant->suivant->prenom);
			strcpy(courant->status,courant->suivant->status);
			strcpy(courant->dateReservation.jour,courant->suivant->dateReservation.jour);
			strcpy(courant->dateReservation.mois,courant->suivant->dateReservation.mois);
			strcpy(courant->dateReservation.annee,courant->suivant->dateReservation.annee);
			strcpy(courant->numDeTelephone,courant->suivant->numDeTelephone);
			strcpy(courant->ref,courant->suivant->ref);
			courant->age=courant->suivant->age;
			
			strcpy(courant->suivant->nom,temp.nom);
			strcpy(courant->suivant->prenom,temp.prenom);
			strcpy(courant->suivant->status,temp.status);
			strcpy(courant->suivant->dateReservation.jour,temp.dateReservation.jour);
			strcpy(courant->suivant->dateReservation.mois,temp.dateReservation.mois);
			strcpy(courant->suivant->dateReservation.annee,temp.dateReservation.annee);
			strcpy(courant->suivant->numDeTelephone,temp.numDeTelephone);
			strcpy(courant->suivant->ref,temp.ref);
			courant->suivant->age=temp.age;
			swapped=1;
			
		}
		courant=courant->suivant;
	}	
	dernier=courant;	
	}while(swapped);
}
void triListeReservationParNom(Reservation* listeRes){
	if(listeRes==NULL) return;
	int swapped;
	Reservation* courant;
	Reservation* dernier=NULL;
	Reservation temp;
	do{
		swapped=0;
		courant=listeRes;
		while(courant->suivant!=dernier){ 
		if(strcmp(courant->nom,courant->suivant->nom)>0){
			temp=*courant;
			strcpy(courant->nom,courant->suivant->nom);
			strcpy(courant->prenom,courant->suivant->prenom);
			strcpy(courant->status,courant->suivant->status);
			strcpy(courant->dateReservation.jour,courant->suivant->dateReservation.jour);
			strcpy(courant->dateReservation.mois,courant->suivant->dateReservation.mois);
			strcpy(courant->dateReservation.annee,courant->suivant->dateReservation.annee);
			strcpy(courant->numDeTelephone,courant->suivant->numDeTelephone);
			strcpy(courant->ref,courant->suivant->ref);
			courant->age=courant->suivant->age;
			
			strcpy(courant->suivant->nom,temp.nom);
			strcpy(courant->suivant->prenom,temp.prenom);
			strcpy(courant->suivant->status,temp.status);
			strcpy(courant->suivant->dateReservation.jour,temp.dateReservation.jour);
			strcpy(courant->suivant->dateReservation.mois,temp.dateReservation.mois);
			strcpy(courant->suivant->dateReservation.annee,temp.dateReservation.annee);
			strcpy(courant->suivant->numDeTelephone,temp.numDeTelephone);
			strcpy(courant->suivant->ref,temp.ref);
			courant->suivant->age=temp.age;
			swapped=1;
			
		}
		courant=courant->suivant;
	}	
	dernier=courant;	
	}while(swapped);
}
void backToHome()
{
    while (getchar() != '\n')
        ;
    printf("\nAppuyez sur Entree pour revenir au menu...");
    getchar();
}






















