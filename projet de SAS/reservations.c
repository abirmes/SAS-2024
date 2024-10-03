#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "library.h"

int main(){
	Reservation* listeRes=NULL;
	ajouterReservation(&listeRes , "abir" , "meskini" , "+2123456789" , 22,"traite" , "27" , "01" ,"2024"  );
	ajouterReservation(&listeRes , "jasmine" , "tms" , "+2124584258" , 23,"valide" , "31" , "03" ,"2023"  );
	ajouterReservation(&listeRes , "leona" , "reina" , "+212344569" , 56,"reporte" , "19" , "11" ,"2009" );
	ajouterReservation(&listeRes , "soufiane" , "rod" , "+212237954" , 39,"annule" , "01" , "05" ,"2020"  );
	ajouterReservation(&listeRes , "carmen" , "les" , "+212349246" , 29,"traite" , "01" , "01" ,"2022"  );
	ajouterReservation(&listeRes , "bros" , "cloe" , "+2122365489" , 69,"reporte" , "29" , "04" ,"2019"  );
	ajouterReservation(&listeRes , "majid" , "el" , "+21225896" , 41,"valide" , "11" , "30" , "2023"  );
	ajouterReservation(&listeRes , "hamid" , "ben" , "+212378954" , 45,"annule" , "16" , "01" ,"2020"  );
	ajouterReservation(&listeRes , "oussama" , "elalaoui" , "+212125478" , 29,"traite" , "18" , "06" ,"2021"  );
	ajouterReservation(&listeRes , "kloe" , "clo" , "+212365214" , 32,"annule" , "18" , "06" ,"2021"  );
	int choix;
	int chercher;
	int trier;
	char nom[30];
	char prenom[30];
	char numDeTelephone[20];
	int age;
	char status[30];
	char jour[4];
	char mois[4];
	char annee[6];
	char ref[60];
	do{
		system("cls");
		printf("\n\n***************  que voulez-vous?  ***********\n");
		printf(" 1 - ajouter un patient.\n");
		printf(" 2 - afficher la liste des patients .\n");
		printf(" 3 - modifier les donnees d'un patient .\n");
		printf(" 4 - supprimer un patient .\n");
		printf(" 5 - chercher sur un patient .\n");
		printf(" 6 - trier la liste des patients .\n");
		printf(" 7 - calculer la moyenne d'age des patients .\n");
		printf(" 8 - afficher le nombre des patient par status .\n");
		printf(" 9 - afficher le nombre des reservations par status  .\n");
		printf(" 10 -  quitter .\n");
		printf("     tapez votre choix : ");
		scanf("%d",&choix);
		switch(choix){
			case 1 :
			system("cls");
			printf("donnez les informations du patient: \n\n");
			printf("le nom : ");
			scanf("%s" , nom);
			printf("le prenom : ");
			scanf("%s" , prenom);
			printf("le numero du telephone : ");
			scanf("%s" , numDeTelephone);
			do {
				printf("status : ");
				scanf("%s" , status);
			} while(strcmp(status,"traite")!=0 && strcmp(status,"annule")!=0 && strcmp(status,"valide")!=0 && strcmp(status,"reporte")!=0);
			printf("l'age : ");
			scanf("%d" , &age);
			printf("le jour de reservation : ");
			scanf("%s" , jour);
			printf("le mois de reservation : ");
			scanf("%s" , mois);
			printf("l'annee de reservation : ");
			scanf("%s" , annee);
			ajouterReservation(&listeRes , nom , prenom , numDeTelephone , age,status , jour , mois,annee  );
			system("cls");
			printf("\n\n la liste apres modification : \n\n");
			afficherListeReservation(listeRes);
			backToHome();
			break;
		case 2 :
			system("cls");
			afficherListeReservation(listeRes);
			backToHome();
			break;
		case 3 :
			system("cls");
			printf("donnez le reference du patient tu veux modifier : \n");
			scanf("%s" , ref);
			modifierListeReservation(listeRes,ref);
			system("cls");
			printf("\n\n la liste apres modification : \n\n");
			afficherListeReservation(listeRes);
			backToHome();
			break;
		case 4 :
			system("cls");
			printf("donnez le reference du patient tu veux supprimer : \n");
			scanf("%s" , ref);
			supprimerReservation(listeRes,ref);
			system("cls");
			printf("\n\n la liste apres modification : \n\n");
			afficherListeReservation(listeRes);
			backToHome();
			break;
		case 5 :
			system("cls");
			printf("comment voulez vous chercher sur le patient ?\n");
			printf(" 1 - avec le reference.\n");
			printf(" 2 - avec le nom.\n");
			printf(" 3 - avec la date .\n");
			scanf("%d" ,&chercher);
			switch(chercher){
				case 1 :
					system("cls");
					printf("donnez le reference du patient tu veux chercher\n");
					scanf("%s" , ref);
					rechercherReservationParRef(listeRes,ref);
					break;
				case 2 :
					system("cls");
					printf("donnez le nom du patient tu veux chercher\n");
					scanf("%s" , nom);
					rechercherReservationParNom(listeRes,nom);
					break;
				case 3 :
					system("cls");
					printf("donnez la date ou le patient exist \n");
					printf("le jour :");
					scanf("%s" , jour);
					printf("le mois :");
					scanf("%s" , mois);
					printf("l'annee :");
					scanf("%s" , annee);
					rechercherReservationParDate(listeRes,jour,mois,annee);
					break;
				default :
					printf("ce n'est pas un choix");
					break;
				}
				backToHome();
				break;
			case 6:
				printf("comment veux tu trier les reservations ?\n");
				printf(" 1 - par nom.\n");
				printf(" 2 - par date .\n");
				printf(" 3 - par status .\n");
				scanf("%d" , &trier);
				/*witch(trier){
					case 1 :
				}
				backToHome();
				break;*/
			case 7 :
				system("cls");
				printf("la moyenne d'age du patients reserve : %.2f" ,calculerMoyAgeReserve(listeRes) );
				backToHome();
				break;
			case 8 :
				system("cls");
				afficherNombrePatientAge(listeRes);
				backToHome();
				break;
			case 9 :
				system("cls");
				afficherNombreTotaleParStatu(listeRes);
				backToHome();
				break;
			case 10 :
				printf("exiting .");
				break;
		}
		
	}while(choix!=10);
	
	
	
	
	
	
	
	
	

	return 0;
}
