#include <stdio.h>
#include <stdlib.h>

int main(){
	int matriz[6][5],fila=0,col=0,valor=0;
	do{
	printf("Ingrese el numero de fila (1-6) y numero de columna (1-5): ");
	scanf("%d %d",&fila,&col);
	if(fila>=1 && fila<=6 && col>=1 && col<=5){
		printf("Ingrese el valor a cargar en la fila %d y columna %d: ",fila,col);
		scanf("%d",&valor);
		matriz[fila-1][col-1]=valor;
	}else{
		printf("Valores de fila y columna fuera de rango \n");
	}
	}while(fila!=0);
	
	printf("Matriz por filas \n");
	for(fila=0;fila<6;fila++){
		for(col=0;col<5;col++){
			printf("%d ",matriz[fila][col]);
		}
		printf("\n");
	}
	
	printf("Matriz por columnas \n");
	for(col=0;col<5;col++){
		for(fila=0;fila<6;fila++){
			printf("%d ",matriz[fila][col]);
		}
		printf("\n");
	}
	
	system("pause");
	return 0;
}
