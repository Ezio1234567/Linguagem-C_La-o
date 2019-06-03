#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	// nh = Número de homens
	// nm  = Número de mulheres
	// sx = Sexo
	// hh = Altura homem
	// hm = Altura mulher
	// mdm = média altura da mulher
	// mrg = maior altura do grupo
	// mng = menor altura do grupo
	// alt = altura
	
	int nh,nm,sx,hh,hm,stop=1,top=0,top1 = 0,top2 = 0;
	float alt,mrg,mng,mdm=0;
	
	while (stop!=0){
	printf("\n Digite o sexo, 1 para Homem 2 para mulher");	
	scanf ("%d",&sx);
	
	printf("\n Digite a altura.");	
	scanf ("%d",&alt);
	
	if (sx==1){
	top1++;
	}
	else {
	top2++;
	mdm=mdm+alt
	}
	
	if (top==0){
	mrg = alt;
	mng = alt;
	}
	
	if(alt>mrg){
	mrg=alt;
	}
	
	if(alt<mng){
	mng=alt;
	}
	
	
	top++;
	
	printf("\n Digite 0 para parar");
	scanf ("%d",&stop);
}

	printf("TOTAL: %d", top);
	printf("HOMENS: %d", top1);
	printf("MULHERES: %d", top2);
	printf("MAIOR ALTURA DO GRUPO: %d", mrg);

   return 0;
	
}
