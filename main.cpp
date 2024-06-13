// LIBRERIAS A USAR
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

// Se hara uso de dos programas para mostrar la informacion
// de cada seccion, para mas informacion, checar el documento
// de analisis del programa
// PROGRAMAS

/*
#include "ifelse.c";
#include "switch.c";
*/

// Funciones if-else

int MENUif_else( void );
void ifelse();
int PROBLEMASifElse();
void mostrarTeoriaIfElse();

// Funciones switch

int MENUswitch( void );
void PROBLEMASswitch(void);
void switchDo();

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

///////////////////////////////////////////////////////////////////////////////////////////////////////
// Funciones if - else

int MENUif_else(){
	int op;
	Sleep(40);
	printf("\nMENU DE IF Y ELSE \n");
	Sleep(20);
	printf("1.- Informacion: Como usar if y else ?...\n");
	printf("2.- Problemario: \n");
	printf("3.- Terminar programa \n");
	printf("\nIngresa la opcion deseada no olvides que antes \nde ir al cuestionario debes ver la informacion !\n");
	scanf("%d",&op);
	return op;
}

void ifelse(void){
	int BANDERA=0, op, op2;
	do{
    op=MENUif_else();
    system("cls");
	switch(op){
		case 1: 
		//INFORMACION();
		mostrarTeoriaIfElse();
		BANDERA=1;
		break;
		case 2: 
		if(BANDERA==1){
			
			op2= PROBLEMASifElse();
			if(op2==1){

			BANDERA=1;}
			else{
	
				BANDERA=2;
			}
		}
		else{
			printf("\nNo has leido la informacion lee la informacion y luego regresas al cuestionario \n");
			BANDERA=1;
		}
		break;
		case 3: 
		printf("Saliendo del menu if else ...........");
		BANDERA=2;
		break;
		
		default:printf("Elegiste mal una opcion !... "); BANDERA=1; 
	} //FIN DE SWITCH 
}while(BANDERA==1);
}

int PROBLEMASifElse(){
	int i, op2, respuesta;
	int respuestasCorrectas = 0, conteo;
	for(i=1; i<=6; i++){
		
		
		switch(i){
			case 1:  
         while (1) {
        system("cls");
        printf("Ejercicio 2: Verificar si una persona es mayor de edad.\n");
        printf("Edad = 16\n");
        printf("¿Cual es la salida correcta?\n");
        printf("1. La persona es mayor de edad.\n");
        printf("2. La persona es menor de edad.\n");
        printf("3. La persona tiene exactamente 18 años.\n");
        printf("Seleccione una opcion (1-3): ");
        scanf("%d", &respuesta);

        if (respuesta == 2) {
            printf("¡Correcto! La persona es menor de edad.\n\n");
            conteo=1; 
			break;} 
			else {
            printf("Incorrecto. \n¿Desea intentar de nuevo (1) o regresar a la teoria (2)? ");
            int opcion;
            scanf("%d", &opcion);
            if (opcion == 2) {
            	system("cls");
                mostrarTeoriaIfElse();
                conteo=0;
                break;
            }
        }
    }
            if (respuesta == 2) {
                    break;
                }
                continue;
			break;
			case 2: printf("PROLEMA 2 \n");
			break;
			case 3: printf("PROLEMA 3 \n");
			break;
			case 4: printf("PROLEMA 4 \n");
			break;
			case 5: printf("PROLEMA 5 \n");
			break;
			default: printf("...");
		}
	}
	printf("EJERCICIOS DE PRACTICA\n");
	respuestasCorrectas += conteo;
    printf("Has completado los ejercicios. \nRespuestas correctas: %d de 2.\n", respuestasCorrectas);
    printf("\n");
	printf("Acabaste el cuestionario ingresa una opcion\n");
	printf("1.- Regresar al menu\n");
	printf("2.- Salir del programa if else\n");
	scanf("%d",&op2);
	return op2;

}

void mostrarTeoriaIfElse(){
printf("\t\t\t\tTEORIA DE USO DE if-else EN C:\n");
printf("\n");
    printf("El uso de if-else en C permite la ejecucion condicional de bloques de codigo.\n");
    printf("La estructura basica es:\n");
    printf("if (condicion) {\n");
    printf("    // Codigo si la condicion es verdadera\n");
    printf("} else {\n");
    printf("    // Ccdigo si la condicion es falsa\n");
    printf("}\n\n");	
}


///////////////////////////////////////////////////////////////////////////////////////////////////////
// Funciones switch

void switchDo(){
	int BANDERA=0, op, op2;
	do{
    op=MENUswitch();
    system("cls");
	switch(op){
		case 1: 
		//INFORMACION();
		//mostrarTeoriaIfElse();
		BANDERA=1;
		break;
		case 2: 
			if(BANDERA==1){
			
				PROBLEMASswitch();
			if(op2==1){

			BANDERA=1;}
			else{
	
				BANDERA=2;
			}
		}
		else{
			printf("\nNo has leido la informacion lee la informacion y luego regresas al cuestionario \n");
			BANDERA=1;
		}
		break;
		case 3: 
		printf("Saliendo del menu if else ...........");
		BANDERA=2;
		break;
		
		default:printf("Elegiste mal una opcion !... "); BANDERA=1; 
	} //FIN DE SWITCH 
}while(BANDERA==1);
}

int MENUswitch(void){
	int op;
	Sleep(40);
	printf("\nMENU Switch \n");
	Sleep(20);
	printf("1.- Informacion: Como usar la funcion switch?...\n");
	printf("2.- Problemario: \n");
	printf("3.- Terminar programa \n");
	printf("\nIngresa la opcion deseada no olvides que antes \nde ir al cuestionario debes ver la informacion !\n");
	scanf("%d",&op);
	return op;
}

void PROBLEMASswitch(void){
		int r,r1,r2,r3,r4,r5,r6,r7,r8,r9,r10;
	do{
	printf("pregunta 1\n");
	printf("respuesta correcta 2");
		scanf("%d",&r1);
		if(r1==2)r1=1;
		else r1=0;
	printf("pregunta 2\n");
	printf("respuesta correcta 2");
		scanf("%d",&r2);
		if(r2==2)r2=1;
		else r2=0;
	printf("pregunta 3\n");
	printf("respuesta correcta 2");
		scanf("%d",&r3);
		if(r3==2)r3=1;
		else r3=0;
	printf("pregunta 4\n");
	printf("respuesta correcta 2");
		scanf("%d",&r4);
		if(r4==2)r4=1;
		else r4=0;
	printf("pregunta 5\n");
	printf("respuesta correcta 2");
		scanf("%d",&r5);
		if(r5==2)r5=1;
		else r5=0;
	printf("pregunta 6\n");
	printf("respuesta correcta 2");	
		scanf("%d",&r6);
		if(r6==2)r6=1;
		else r6=0;
	printf("pregunta 7\n");
	printf("respuesta correcta 2");	
		scanf("%d",&r7);
		if(r7==2)r7=1;
		else r7=0;
	printf("pregunta 8\n");
	printf("respuesta correcta 2");
		scanf("%d",&r8);
		if(r8==2)r8=1;
		else r8=0;
	printf("pregunta 9\n");
	printf("respuesta correcta 2");
		scanf("%d",&r9);
		if(r9==2)r9=1;
		else r9=0;
	printf("pregunta 10\n");
	printf("respuesta correcta 2");
		scanf("%d",&r10);
		if(r10==2)r10=1;
		else r10=0;
	r=r1+r2+r3+r4+r5+r6+r7+r8+r9+r10;
	printf("calificacion = %d",r);
	}while(r<5);
}