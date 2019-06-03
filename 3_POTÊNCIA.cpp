#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 

{
	
	// num= número

int n,resp;

for (n=0;n<=15;n++) {
	resp= pow (3,n);
	printf("\n %d ^ %d = %d", 3,n, resp); // %d= declaraçõa a ser substituido, a ordem deve ser obedecida.
}

	return 0;
}

// Para potência pow (3,2)
