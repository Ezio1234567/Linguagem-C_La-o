#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a, b;
	
	for (a = 1; a<= 100; a++)
    if (a%2==1){ // operador %
    printf("\n %d",a);}
    
    for (b = 1; b <= 100; b += 2) {
    	printf("\n%d", b);
	}
    return 0;
	
}
