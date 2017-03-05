#include <stdio.h>

int main(){
	long vsota_kvadratov=0;
	

	long long vsota=(100*(101)) /2;


	
	long long razlika=vsota_kvadratov-vsota;
	
	printf("%ld je rezultat",razlika);

	
	long long a=0;
	long long b=0;

	for(int i=1; i<=100; i++){
		a=a+(i*i);
		b=b+i;
	
	}
	b=b*b;
	
	long long c=b-a;
	printf("%ld je rezultat...?\n",c);

}
