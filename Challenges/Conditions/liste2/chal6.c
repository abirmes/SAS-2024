#include <stdio.h>
int main(){
    int utilisateur;
    int contrat;
    float consommation;
    float facture;
    printf("si vous etes un residentiel taper 1, si vous etes un commercial taper 2\n");
    scanf("%d" ,&utilisateur);
    printf("si vous avez une contrat standart taper 0, si vous avez une contrat reduit taper 1");
    scanf("%d" , &contrat);
    printf("quelle est votre consommation \n");
    scanf("%f" , &consommation);
    if(utilisateur==1 && contrat==0){
    	facture=0.20*consommation;
    	if(consommation>500) printf("votre facture est %f\n" , facture*0.1);
    	else 
		    printf("votre facture est %f\n" , facture);
	}
    
    
	return 0;
}
