#include <stdio.h>
int main(){
	printf("%i\n",sumatodo(4892395));
	return 0;

}

int segundos(int n){
	int sobran;	
	int dia;
	dia=n/86400;
	sobran=n-86400*dia;
	printf("%i\n",dia);
	return sobran;
}


int seguhora(int n){
	int sobran;	
	int hora;
	hora=n/3600;
	sobran=n-3600*hora;
	printf("%i\n",hora);
	return sobran;
}
int segumin(int n){
	int sobran;	
	int min;
	min=n/60;
	sobran=n-60*min;
	printf("%i\n",min);
	return sobran;							
}

int sumatodo(int n){
	 segundos(n);
	 seguhora(n);
	 segumin(n);
	

	return 0;

}
















