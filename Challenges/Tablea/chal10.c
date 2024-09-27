int main(){
	int n;
	printf("donnez la taille du tableau\n");
	scanf("%d" , &n);
	int tab[n];
	int i,val;
	for(i=0;i<n;i++){
		printf ("donnez la valeur de la case %d du tableau :\n" , i+1);
		scanf("%d" , &tab[i]);
	}
	
	printf("donnez une valeur aleatoire\n");
	scanf("%d" ,&val);
	
	for(i=0;i<n;i++){
		if(val==tab[i]) {
			printf("felicitations la valeur existe!! dans la case %d" , i+1);
			return 0;
		} 	
	}
	printf("not found");
	return 0;
}
