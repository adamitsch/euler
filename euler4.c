#include <stdio.h>

int main() {

	int palindrom=1;
	int I=2;
	int J=3;

	for(int i=100; i<1000; i++){

		for(int j=100; j<1000; j++){

			int produkt=i*j;
			int temp=produkt;
			int ostanek;
			int obrnjeno=0;

			while(temp>0){
				ostanek=temp%10;
				obrnjeno=obrnjeno*10+ostanek;
				temp=temp/10;
			}

			if(obrnjeno==produkt && produkt>palindrom){
				palindrom=produkt;
				I=i;
				J=j;

			}
		}
	}
	
	printf("Najvecji palindrom %i, ki je produkt %i in %i.\n",palindrom,I,J);
	
	return 0;
}
