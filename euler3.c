#include <stdio.h>

int main() {

	long maxfactor=0;
	long stevilo=600851475143L;	
	long delitelj=0;
	int pogoj=123456789;
	//printf("Najvecji faktor je %i, delitelj je %i, stevilo je %lo. \n",maxfactor,delitelj,stevilo) ;
	
	while(pogoj){
		
		long meja=stevilo;		
		
		for(long i=2; i<=meja; i++){
	
			if(stevilo%i==0){
				stevilo=stevilo/i;
				delitelj=i;

				if(i>maxfactor){
					maxfactor=i;
				}

				i=meja+1;

				if(stevilo==1){
					pogoj=0;
				}
			}
		}
	}

	printf("Najvecji faktor je %i.\n",maxfactor);
	
	return 0;
}
