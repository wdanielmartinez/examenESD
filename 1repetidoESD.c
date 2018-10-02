#include <stdio.h>

int main(){

	int fila, columna, filas, columnas;
	int burbuja;
	int i, j, v, numero;
	
	printf("Ingrese el número de filas de las dos matrices: ");
	scanf("%i",&filas);
	
	printf("Ingrese el número de columnas de las dos matrices: ");
	scanf("%i",&columnas);
	
	int matrizUno[filas][columnas];
	int matrizDos[filas][columnas];
	
	/*numero de espacios en el vector*/
	numero = filas*columnas*2;
	
	int vector[numero];
	
/*--------------------------------------------------------------------*/
		printf("\n");
/*--------------------------------------------------------------------*/
	
	/*INGRESAR DATOS A LA PRIMERA MATRIZ*/
	for(fila = 0; fila < filas; fila++){
		for(columna = 0; columna < columnas; columna++){
			printf("Ingrese el número en matriz uno[%i][%i]: ",fila+1,columna+1);
			scanf("%i",&matrizUno[fila][columna]);
		}
	}
	
	/*método de la burbuja */
	for(fila = 0; fila < filas; fila++){
		for(columna = 0; columna < columnas; columna++){
			
			if(matrizUno[fila][columna] < matrizUno[fila+1][columna+1]){
				burbuja = matrizUno[fila][columna];
				matrizUno[fila][columna] = matrizUno[fila+1][fila+1];
				matrizUno[fila+1][columna+1] = burbuja;					
				}
		}
	}
	
/*--------------------------------------------------------------------*/
		printf("\n");
/*--------------------------------------------------------------------*/
	
	/*INGRESAR DATOS A LA SEGUNDA MATRIZ*/
	for(i = 0; i < filas; i++){
		for(j = 0; j < columnas; j++){
			printf("Ingrese el número en matriz dos[%i][%i]: ",i+1,j+1);
			scanf("%i",&matrizDos[i][j]);
		}
	}
	
	/*método de la burbuja*/
	for(i = 0; i < filas; i++){
		for(j = 0; j < columnas; j++){
			
			if(matrizDos[fila][columna] < matrizDos[fila+1][columna+1]){
				burbuja = matrizUno[fila][columna];
				matrizDos[fila][columna] = matrizDos[fila+1][fila+1];
				matrizDos[fila+1][columna+1] = burbuja;					
			}
		}
	}
	
/*--------------------------------------------------------------------*/
	/*LLENADO DEL VECTOR*/
	for(v = 0; v < numero; v++){
		
		/*primera matriz*/
		for(fila = 0; fila < filas; fila++){
			for(columna = 0; columna < columnas; columna++){
				vector[v] = matrizUno[fila][columna];
			}
		}
		
		/*segunda matriz*/
		for(i = 0; i < filas; i++){
			for(j = 0; j < columnas; j++){
				vector[v] = matrizDos[i][j];
			}
		}
	}
/*--------------------------------------------------------------------*/
		printf("\n");	
/*--------------------------------------------------------------------*/
	
	/*MÉTODO DE LA BURBUJA APLICADO EN EL VECTOR*/
	for(v = 0; v < numero; v++){
		
		if(vector[v] < vector[v+1]){
			burbuja = vector[v];
			vector[v] = vector[v+1];
			vector[v+1] = burbuja;					
		}
	}
	printf("Los números ordenados son : \n");
	/*MOSTRAR LOS DATOS DEL VECTOR*/
	for(v = 0; v < numero; v++){
		printf("%i",vector[v],"\t");
	}

	printf("\n");
	
	return 0;
}
