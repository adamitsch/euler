#include <stdio.h>
int main() {
	int vsota=0;

	int a=1;
	int b=2;
	int c=0;

	while(b<4000000){
		c=a;
		a=b;
		b=b+c;
		if(a%2==0){
			vsota=vsota+a;
		}
		

	}

	printf("Vsota je %i.\n",vsota);
	return 0;
}
