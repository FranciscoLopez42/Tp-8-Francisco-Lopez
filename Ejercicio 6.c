#include <stdio.h>
#include <stdlib.h>
int main() 
{
	int socioE[10][32]={0},i=0,j=0,socio=0;
	int repe[10]={0},k=0;
	int cant=0;
	do{	
		printf("Ingrese el numero de socio\n");
		scanf("%d",&socio);
		repe[k]=socio;
		if(socio != 0) {
			do { 
				printf("Ingrese Edad: "); 
				scanf("%d", &j); 
				if((j < 0) || (j > 99)){
					printf("ERROR: ingrese la edad de nuevo\n\n"); 
				}
			} 
			while((j < 1) || (j > 99)); 
			socioE[i][j-1] = socio; 
		}
		cant++;
		i++;   
	}   
	while(i < 10 && socioE[i-1][j-1] != 0);
	for(i=0;i<10;i++) { 
		for(j=0;j<32;j++) { 
			if(socioE[i][j] != 0) { 
				printf("%d\t%d\n", socioE[i][j], j + 1);         
			} 
		} 
	}  
	
	system("pause");
	return 0;   
}
