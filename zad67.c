// Program ce izracunat volumen stozca.

#include<stdio.h>
#include <stdlib.h>
#define PI 3.14

//Funkcija za izracunavanje volumena stozca.
float volumen(int polumjer,int visina){
	
	float volumen;
	volumen=(1.0/3.0)*PI*polumjer*polumjer*visina;
	return volumen;
}

int main(){
   int polumjer,visina;
   printf("Unesi polumjer stozca:\n");
   scanf("%d",&polumjer);
   printf("Unesi visinu stozca:\n");
   scanf("%d",&visina);
   float V=volumen(polumjer,visina);
   printf("Volumen stozca je %f\n",V);
   return 0;
}
