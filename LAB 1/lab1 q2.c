#include <stdio.h>
#include <stdlib.h>

int kitleindex(int boy, float kilo);

int main() {
	
	int boy;
	float kilo;
	
	printf("lütfen boyunuzu girin: "); scanf("%d",&boy);
	printf("lütfen kilonuzu girin: "); scanf("%f",&kilo);
	
	int a = kitleindex(boy,kilo);
	
	switch(a){
		case 1: printf("Durum = Zayif");
		break;
		case 2: printf("Durum = Normal");
		break;
		case 3: printf("Durum = Kilolu");
		break;
		case 4: printf("Durum = Obez");
		break;	
	}
	return 0;
}

int kitleindex(int boy, float kilo){
	float index;
	int r;
	index=kilo/(boy*boy);
	if(index <= 18)
		r=1;
	else if(index>=19 && index<=25)
		r=2;
	else if(index>=26 && index<=30)
		r=3;
	else
		r=4;
	return r;				
}
