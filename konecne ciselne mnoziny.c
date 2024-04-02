#include <stdio.h>

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

void vypis_mnoziny(int *a){
	
	for (int i=1; i<a[0]+1; i++){
		 printf("%d ",a[i]);
		 }
	printf("\n");	 	
	}

void zjednotenie_mnozin (int *a, int *b, int *c){
	int k=0,p=0;
	
	for (int i=1; i<a[0]+1; i++){
		c[i]=a[i];
		}
	for (int j=1; j<b[0]+1; j++){
		for (int i=1; i<a[0]+1; i++)
			{if (b[j]!=a[i])
				{k++;
				 if (k==a[0]){
				 	c[a[0]+1+p]=b[j];
				 	p++;
					 }	 
				}	
			}
		k=0;
		}
	c[0]=a[0]+p;	
	}
		
main(){
	int *a=(int*)malloc(101*sizeof(int));
	int *b=(int*)malloc(101*sizeof(int));
	int *c=(int*)malloc(101*sizeof(int));
	
	def_mnozinu(a);
	vypis_mnoziny(a);
	def_mnozinu(b);
	vypis_mnoziny(b);
	zjednotenie_mnozin(a,b,c);
	printf("\nZjednotena mnozina: \n");
	vypis_mnoziny(c);
}