/* Diseño de funcion para la ejecucion de problemas a mostrar al usuario y
que lo pueda regresar a la informacion 
*/



#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int menu( void );
void ifElse();
int problemas();
void mostrarTeoria();

int menu(){
	int op;
	printf("\nMENU DE IF Y ELSE \n");
	printf("1.- Informacion: Como usar if y else ?...\n");
	printf("2.- ifElse: \n");
	printf("3.- Terminar programa \n");
	printf("\nIngresa la opcion deseada no olvides que antes \nde ir al cuestionario debes ver la informacion !\n");
	scanf("%d",&op);
	return op;
}

void ifElse(void){
	int BANDERA=0, op, op2;
	do{
    op=menu();
    system("cls");
	switch(op){
		case 1: 
		//INFORMACION();
		mostrarTeoria();
		BANDERA=1;
		break;
		case 2: 
		if(BANDERA==1){
			
			op2= problemas();
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

int problemas(){
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
                mostrarTeoria();
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

void mostrarTeoria(){
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

