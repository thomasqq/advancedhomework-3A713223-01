#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	char ch='a';
	char sh='A';
	
	for(int num=0;num<=25;num++){
		ch='a';
		ch+=num;
		printf("%c ",ch);
	}
	for(int num=0;num<=25;num++){
		sh='A';
		sh+=num;
		printf("%c ",sh);
	}
	printf("\n");
	
	system("PAUSE");
	return 0;
}
