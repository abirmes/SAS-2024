#include <stdio.h>
int main(){
	float tabTemp[5];
	int i;
	for(i=0;i<5;i++){
		printf("donnez la temperature numero %d\n" , i+1);
		scanf("%f" , &tabTemp[i]);
	}
	float max=tabTemp[0];
	float min=tabTemp[0];
	for(i=0;i<5;i++){
		if(max<tabTemp[i]){
			max=tabTemp[i];
		}
	}
	for(i=0;i<5;i++){
		if(min>tabTemp[i]){
			min=tabTemp[i];
		}
	}
	printf("la plus haute temperature est %f\n" , max);
	printf("la plus basse temperature est %f\n" , min);
	
	
	
	return 0;
}
