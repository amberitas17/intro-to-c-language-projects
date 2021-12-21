#include <stdio.h>
#include <stdlib.h>
void deci(float);
void centi(float);
void kilom(float);

main(){
	float meter;
	
	printf("Enter Meter: ");
	scanf("%f", &meter);
	
	deci(meter);
	centi(meter);		
	kilom(meter);	
}

void deci(float meter){
	float dm;
	dm = meter * 10;
	printf("\nMeters to Decimeters: %.2f dm", dm);
}

void centi(float meter){
	float cm;
	cm = meter * 100;
	printf("\nMeters to Centimeters: %.2f cm", cm);
}

void kilom(float meter){
	float km;
	km = meter * 1000;
	printf("\nMeters to Kilometers: %.2f km", km);
}
