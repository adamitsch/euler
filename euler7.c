#include <stdio.h>

int isPrime(int stevilo){
	for(int i=2; i<stevilo; i++)
	{
		if(stevilo%i==0)
		{
			return 0;
		}
	}
	
	return 1;
	}


int main(){
	
	int a=1;
	int stevec=0;

	while(stevec<10001){
		a=a+1;	
		if(isPrime(a)){
			stevec++;
		}

	}
	
	printf("%i je to stevilo\n",a);

}
