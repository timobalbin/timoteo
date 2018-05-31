#include <stdio.h>
int main(){
	traduc(587);
	par(200);


}



int traduc(int n){
	
	int centenas=0;
	int decenas=0;
	int unidades=0;
	centenas = n/100;
	decenas = n/10 - (centenas*10);
	unidades = n/1 - (centenas*100) - (decenas*10);
	printf("%i\n",centenas);
	printf("%i\n",decenas);
	printf("%i\n",unidades);

}	

int par(int n){
	int i;
	int suma=0;
	for(i=0;i<n;i=i+2){
	suma= suma + i; 
	printf("%i\n",suma);
	return suma;
	}	
}





