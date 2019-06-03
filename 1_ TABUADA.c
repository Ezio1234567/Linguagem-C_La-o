#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
main ()
{
int m,n;
printf(" Digite um numero");
scanf ("%d",&m );

for (n=1;n<=10;n++) {
	printf("\n %d x %d= %d", m,n, m*n);
}

	return 0;
}
