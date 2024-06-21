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
		printf("\t\t\t\tBienvenido, %cQue quieres aprender hoy?\n\n", 168);
		printf("\t\t\t\t\t1.- If-Else\n\t\t\t\t\t2.- Switch\n\t\t\t\t\t3.-SALIR\n");
		scanf("%d", &opc);
		switch(opc){
			case 1:
				system("cls");
				ifElse();
				system("cls");
				//Se iniciara el menu de "teoria.c"
				break;
			case 2:
				system("cls");
				PswitchDo();
				system("cls");
				//Se iniciara el menu de "switch.cpp"

				break;
			default:
			break;
		}
	} while (opc != 3);
}

