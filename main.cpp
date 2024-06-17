// LIBRERIAS A USAR
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

// Se hara uso de dos programas para mostrar la informacion
// de cada seccion, para mas informacion, checar el documento
// de analisis del programa
// PROGRAMAS

#include "ifelse.c";
#include "switch.c";

int main(){
	int opc;
	do{
		printf("");
		printf("Bienvenido\n");
		printf("1.- If-Else\n2.- Switch\n3.-SALIR\n");
		scanf("%d", &opc);
		switch(opc){
			case 1:
				ifelse();
				//Se iniciara el menu de "teoria.c"
				break;
			case 2:
				switchDo();
				//Se iniciara el menu de "cuestionario.c"
				break;
			default:
			break;
		}
	} while (opc != 3);
}

