// LIBRERIAS A USAR
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

// Se hara uso de dos programas para mostrar la informacion
// de cada seccion, para mas informacion, checar el documento
// de analisis del programa
// PROGRAMAS

#include "ifelse.cpp";
#include "switch.cpp";

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
				//Se iniciara el menu de "ifelse.cpp"
				break;
			case 2:
				int opp;
				opp = PMENUswitch;
				PswitchDo(opp);
				//Se iniciara el menu de "switch.cpp"
				break;
			default:
			break;
		}
	} while (opc != 3);
}

