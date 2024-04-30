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
	
void def_nah_mnozinu(int *a){
	int l;
	
	printf("Zadaj pocet prvkov mnoziny: ");
	scanf("%d",&l);
	
	a[0]=l;
	for (int i=1; i<a[0]+1; i++)
		{a[i]=(rand()%100);
		} 	
	}
	
void def_nah_mnozinu_dlzk(int *a, int l){
	
	a[0]=l;
	for (int i=1; i<a[0]+1; i++)
		{a[i]=(rand()%200);
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
		(*pocet)++;
		c[i]=a[i];
		}
	for (int j=1; j<b[0]+1; j++){
		(*pocet)++;
		for (int i=1; i<a[0]+1; i++)
			{(*pocet)++;
			 if (b[j]!=a[i])
				{(*pocet)++;
				 k++;
				 if (k==a[0]){
				 	(*pocet)++;
				 	c[a[0]+1+p]=b[j];
				 	p++;
					 }	 
				}	
			}
		k=0;
		}
	c[0]=a[0]+p;	
	}
	
void priecelnik_mnozin(int *a, int *b, int *c, int *pocet){
	int k=0,p=0;
	
	for (int i=1;i<a[0]+1;i++){
		(*pocet)++;
		 for (int j=1;j<b[0]+1;j++){
		 	(*pocet)++;
		 	if(a[i]==b[j]){
		 		(*pocet)++;
				k++;	
				}
			}
		 if (k>0)
			{
			c[1+p]=a[i];
			p++;	
		 	}
		 k=0;	
		}
	c[0]=p;	
	}
	
void vyp_poctu_oper(int *poc){
	int a[101];
	int b[101];
	int c[201];
	int p=0;
	
	poc[0]=100;
	for (int i=1;i<poc[0]+1;i++){
		poc[i]=0;
		}
	for (int i=1;i<poc[0]+1;i++){
		def_nah_mnozinu_dlzk(a,i);
		def_nah_mnozinu_dlzk(b,i);
		zjednotenie_mnozin (a,b,c,&p);
		priecelnik_mnozin (a,b,c,&p);	
		poc[i]=p;
		p=0;
		}
	}
	
zapis_mnoziny_do_txt(int *a){
	FILE* sub;
	
	sub=fopen("mnozina.txt","w");
	for (int i=1;i<a[0]+1;i++){
		fprintf(sub,"%d\n",a[i]);
		}
	fclose(sub);	
	}
		
main(){
/*	int a[201];
	int b[201];
	int c[201]; */
	int p[101];
	int pocet=0;
	
	srand(time(0));
/*	def_mnozinu(a);
	vypis_mnoziny(a);
	def_mnozinu(b);
	vypis_mnoziny(b);
	zjednotenie_mnozin(a,b,c,&pocet);
	printf("\nZjednotena mnozina: \n");
	vypis_mnoziny(c);
	priecelnik_mnozin(a,b,c,&pocet);
	printf("\nPriecelnik mnozin: \n");
	vypis_mnoziny(c);
	printf("\nPocet operacie z mnozinami: %d", pocet); */
	vyp_poctu_oper(p);
	vypis_mnoziny(p);
	zapis_mnoziny_do_txt(p);	
}