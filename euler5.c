#include <stdio.h>

int main() {





	int gcd(int a, int b){
		if(b==0) return a;
		return gcd(b,a%b);
	}
	
	int tuj_vsem_v_tabeli(int i, int stevc, int tabelca []){
		for(int j=stevc; j>0; j--){
			if(gcd(i,tabelca[j-1])!=1){
				return 0;
				}
			}	
		return 1;
	}	


	int produkt=20;
	int stevec=0;
	int tabela[100];	
	
	for (int i=19; i>1; i--){
		if(gcd(20,i)==1  &&  (tuj_vsem_v_tabeli(i,stevec,tabela)) ){
			tabela[stevec]=i;
			stevec++;
			produkt=produkt*i;
			printf(" tuje stevilo je %i.\n",i);
		}
	}
	
	printf(" to stevilo je %i.\n",produkt);
	printf(" stevec je %i.\n",stevec);


	int m=1;
	int v=1;
	while(m){
		if(v%2==0 && v%3==0 && v%4==0 && v%5==0 && v%6==0 && v%7==0 && v%8==0  && v%9==0 && v%11==0 && v%12==0 && v%13==0&& v%14==0 && v%15==0 && v%16==0  && v%17==0 && 
v%19==0){
			printf(" %ld je to stevilo.", v);
			m=0;	
			}
		v++; 

	}

	
}

