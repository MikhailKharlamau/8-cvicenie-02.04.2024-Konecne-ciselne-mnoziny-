#include <stdio.h>

void def_mnozinu(int *a){
	int l;
	
	printf("Zadaj pocet prvkov mnoziny:");
	scanf("%d",&l);
	
	a[0]=l;
	for (int i=1; i<a[0]+1; i++)
		{printf("Zadaj %d-ty prvkok mnoziny:",i);
		 scanf("%d",&a[i]);
		} 	
	}

void vypis_mnoziny(int *a){
	
	for (int i=1; i<a[0]+1; i++){
		 printf("%d ",a[i]);
		 }
	printf("\n");	 	
	}

		
main(){
	int *a=(int*)malloc(101*sizeof(int));
	int *b=(int*)malloc(101*sizeof(int));
	
	def_mnozinu(a);
	vypis_mnoziny(a);
	def_mnozinu(b);
	vypis_mnoziny(b);
}