#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void def_mnozinu(int *a){
	int l;
	
	printf("Zadaj pocet prvkov mnoziny: ");
	scanf("%d",&l);
	
	a[0]=l;
	for (int i=1; i<a[0]+1; i++)
		{printf("Zadaj %d-ty prvkok mnoziny: ",i);
		 scanf("%d",&a[i]);
		} 	
	}
	
void def_nahodnu_mnozinu(int *a){
	int l;
	
	printf("Zadaj pocet prvkov mnoziny: ");
	scanf("%d",&l);
	
	a[0]=l;
	for (int i=1; i<a[0]+1; i++)
		{a[i]=(rand()%100);
		} 	
	}

void vypis_mnoziny(int *a){
	
	for (int i=1; i<a[0]+1; i++){
		 printf("%d ",a[i]);
		 }
	printf("\n");	 	
	}

void zjednotenie_mnozin (int *a, int *b, int *c, int *pocet){
	int k=0,p=0;
	
	for (int i=1; i<a[0]+1; i++){
		c[i]=a[i];
		(*pocet)++;
		}
	for (int j=1; j<b[0]+1; j++){
		for (int i=1; i<a[0]+1; i++)
			{if (b[j]!=a[i])
				{k++;
				 (*pocet)++;
				 if (k==a[0]){
				 	c[a[0]+1+p]=b[j];
				 	p++;
				 	(*pocet)+=2;
					 }	 
				}	
			}
		k=0;
		(*pocet)++;
		}
	c[0]=a[0]+p;
	(*pocet)++;	
	}
	
void priecelnik_mnozin(int *a, int *b, int *c, int *pocet){
	int k=0,p=0;
	
	for (int i=1;i<a[0]+1;i++){
		 for (int j=0;j<b[0]+1;j++){
			if(a[i]==b[j]){
				k++;
				(*pocet)++;	
				}
			}
		 if (k>0)
			{c[1+p]=a[i];
				p++;
				(*pocet)++;	
		 	}
		 k=0;
		 (*pocet)++;		
		}
	c[0]=p;
	(*pocet)++;	
	}
		
main(){
	int a[101];
	int b[101];
	int c[101];
	int pocet=0;
	
	def_nahodnu_mnozinu(a);
	vypis_mnoziny(a);
	def_nahodnu_mnozinu(b);
	vypis_mnoziny(b);
	zjednotenie_mnozin(a,b,c,&pocet);
	printf("\nZjednotena mnozina: \n");
	vypis_mnoziny(c);
	priecelnik_mnozin(a,b,c,&pocet);
	printf("\nPriecelnik mnozin: \n");
	vypis_mnoziny(c);
	printf("\nPocet operacie z mnozinami: %d", pocet);
}