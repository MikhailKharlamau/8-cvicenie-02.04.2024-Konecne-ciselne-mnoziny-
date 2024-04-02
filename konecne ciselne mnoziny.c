#include <stdio.h>

typedef struct{
	int *a;
	int l;
} MNOZINA;

void def_a_vypis_mnozinu(MNOZINA *a){
	printf("Zadaj pocet prvkov mnoziny:");
	scanf("%d",&a->l);
	for (int i=0; i<a->l; i++)
		{printf("Zadaj %d-ty prvkok mnoziny:",i+1);
		 scanf("%d",&a->a[i]);
		}
	for (int i=0; i<a->l; i++){
		 printf("%d ",a->a[i]);
		 }
	printf("\n");	 
	}

void vypis_mnoziny(MNOZINA *a){
	
	for (int i=0; i<a->l; i++){
		 printf("%d ",a->a[i]);
		 }
	printf("\n");	 	
	}

MNOZINA zjednotenie_mnozin(MNOZINA *a,MNOZINA *b){
	MNOZINA z;
	
	z.l=a->l+b->l;
	for(int i=0;i<a->l;i++)
		{z.a[i]=a->a[i];
		}
	return(z);	
	}
		
main(){
	MNOZINA a,b,c;
	
	def_a_vypis_mnozinu(&a);
	def_a_vypis_mnozinu(&b);
	c=zjednotenie_mnozin(&a,&b);
	vypis_mnoziny(&c);
}