#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>
#include<math.h>
#include<dos.h>
#include<dir.h>
void PMENUSwitch( void );//esta funcion visualiza el menu principal 
void Pproblemas(void);//esta funcion visuliza todo el cuestionario del tema y nos da una calificacion
void PmostrarTeoria(void);//esta funcion nos visualiza todos los ejemplos que se trabajaron
void T1(void);//esta funcion es para visualizar la primera hoja de teoria donde se habla sobre como funciona switch y que hace
void T2(void);//esta funcion nos muestra la sintaxis correcta dentro del comando switch
void T3(void);//esta funcion nos muestra la sintaxis correcta cuando se anidan comandos switch
void SC(int ForgC);//esta funcion sirve para cambiar el color de las letras
	void SwitchNumeros(int numero);
	void SwitchTrigonometrico(int opcion);
	void SwitchPotencias(int opcion);
	void mostrarMenu();
	void calcularSumaImaginarios();
	void calcularRestaImaginarios();
	void calcularProductoImaginarios();
	void calcularDivisionImaginarios();
	void calcularSumaRacionales();
	void calcularRestaRacionales();
	void calcularProductoRacionales();
	void calcularDivisionRacionales();
	int SUBMENU2(void);
	int SUBMENU3(void);
void PswitchDo(void);//swtich principal del programa
//////////////////////////inicio de main
int main(){
	int op;
	PswitchDo();
}
///////////////////////////fin de main
void PswitchDo(void){
	int op;
	uno:
	system("cls");
	PMENUSwitch();
		printf("\nIngresa la opcion deseada no olvides que antes\nde ir al cuestionario debes ver la informacion !\n");
	scanf("%d",&op);
		switch(op)
		{
			case 1:
				T1();
				T2();
				T3();
				PmostrarTeoria();
				goto uno;
			break;
			case 2:
				Pproblemas();
				goto uno;
			break;
			case 3:
				printf("salir del programa");
			break;
			default: 
			printf("Vuelve a escoger una opcion valida"); 
			goto uno;
			break;
		}
}
void PMENUSwitch(){
	Sleep(40);
	SC(6);printf("\nMENU Switch \n");SC(7);
	Sleep(20);
	printf("1.- Informacion: Como usar la funcion switch?...\n");
	printf("2.- Problemario: \n");
	printf("3.- Terminar programa \n");
}
void Pproblemas(void){
		int r=0,r1,r9=0,op;
		system("cls");
	SC(4);printf("\t\tPARA PASAR A LA SIGUIENTE PARTE ES NECESARIO TENER MAS DE SEIS PREGUNTAS CORRECTAS\n");SC(7);
	do{
	for(r9=0;r9<=3;r9++)
	{
	SC(3);printf("\na) %cCuantas veces se pueden anidar comandos switch dentro de otros comandos switch?\n",168);SC(7);
	printf("1) Una vez\n");
	printf("2) Dos veces\n");
	printf("3) Las veces que necesarias\n");
		scanf("%d",&r1);
		if(r1==3){
		r=r+1;	
		printf("Felicidades la respuesta es correcta\n");
		r9=r9+3;

		}
		else {
			printf("Deseas visualizar la informacion de nuevo?\n");
			printf("ingresa uno si deseas visualizar la informacion de nuevo\n");
			printf("ingresa dos si deseas continuar con el programa\n");
			scanf("%d",&op);
			system("cls");
			if(op==1){
				T1();
				system("pause");
				printf("Si deseas volver a contestar la pregunta inserta 1\n");
				printf("Si deseas continuar con con el programa ingresa 2 \n");
				scanf("%d",&op);
				
				if(op==2)r9=r9+3;
				system("cls");
			}
			if(op==2)r9=r9+3;
		}
	}
		system("pause");
		system("cls");	
			for(r9=0;r9<=3;r9++)
	{
	SC(3);printf("b) %cQue le hace falta al programa:\n",168);SC(7);
	printf(" switch( ){\n\tcase 1:\n\tbrake:}\n");
	printf("1) Una variable\n");
	printf("2) Un break\n");
	printf("3) Un caracter\n");
	scanf("%d",&r1);
		if(r1==1){
		r=r+1;	
		printf("Felicidades la respuesta es correcta\n");
		r9=r9+3;

		}
		else {
			printf("Deseas visualizar la informacion de nuevo?\n");
			printf("ingresa uno si deseas visualizar la informacion de nuevo\n");
			printf("ingresa dos si deseas continuar con el programa\n");
			scanf("%d",&op);
			system("cls");
			if(op==1){
				T2();
				system("pause");
				printf("Si deseas volver a contestar la pregunta inserta 1\n");
				printf("Si deseas continuar con con el programa ingresa 2 \n");
				scanf("%d",&op);
				
				if(op==2)r9=r9+3;
				system("cls");
			}
			if(op==2)r9=r9+3;
		}
	}
		system("pause");
		system("cls");	
			for(r9=0;r9<=3;r9++)
	{
	SC(3);printf("c) %cSi tienes 3 switch anidados, uno dentro de otro, que tendrias que hacer\n",168);
	printf("\tpara hacer funcionar los switch?\n");SC(7);
	printf("1) Hacer un menu diferente para cada switch\n");
	printf("2) Nada\n");
	printf("3) Solamente verificar la sintaxis\n");
		scanf("%d",&r1);
		if(r1==1){
		r=r+1;	
		printf("Felicidades la respuesta es correcta\n");
		r9=r9+3;

		}
		else {
			printf("Deseas visualizar la informacion de nuevo?\n");
			printf("ingresa uno si deseas visualizar la informacion de nuevo\n");
			printf("ingresa dos si deseas continuar con el programa\n");
			scanf("%d",&op);
			system("cls");
			if(op==1){
				T2();
				system("pause");
				printf("Si deseas volver a contestar la pregunta inserta 1\n");
				printf("Si deseas continuar con con el programa ingresa 2 \n");
				scanf("%d",&op);
				
				if(op==2)r9=r9+3;
				system("cls");
			}
			if(op==2)r9=r9+3;
		}
	}
		system("pause");
		system("cls");
	for(r9=0;r9<=3;r9++)
	{
	SC(3);printf("d) %cQue tipo de variables puedo ingresar en el comando switch?\n",168);SC(7);
	printf("1) todas\n");
	printf("2) todas exeptuando las variables flotantes\n");
	printf("3) todas menos las variables tipo char\n");
		scanf("%d",&r1);
		if(r1==2){
		r=r+1;	
		printf("Felicidades la respuesta es correcta\n");
		r9=r9+3;

		}
		else {
			printf("Deseas visualizar la informacion de nuevo?\n");
			printf("ingresa uno si deseas visualizar la informacion de nuevo\n");
			printf("ingresa dos si deseas continuar con el programa\n");
			scanf("%d",&op);
			system("cls");
			if(op==1){
				T1();
				system("pause");
				printf("Si deseas volver a contestar la pregunta inserta 1\n");
				printf("Si deseas continuar con con el programa ingresa 2 \n");
				scanf("%d",&op);
				
				if(op==2)r9=r9+3;
				system("cls");
			}
			if(op==2)r9=r9+3;
		}
	}
	system("pause");
	system("cls");
	for(r9=0;r9<=3;r9++)
	{
	SC(3);printf("e) %cPara que sirve el comando default?\n",168);SC(7);
	printf("1) Para iniciar un caso\n");
	printf("2) Para ejecutar si no se cumple ninguno de los casos anteriores\n");
	printf("3) ninguna de las anteriores\n");
		scanf("%d",&r1);
		if(r1==2){
		r=r+1;	
		printf("Felicidades la respuesta es correcta\n");
		r9=r9+3;
		}
		else {
			printf("Deseas visualizar la informacion de nuevo?\n");
			printf("ingresa uno si deseas visualizar la informacion de nuevo\n");
			printf("ingresa dos si deseas continuar con el programa\n");
			scanf("%d",&op);
			system("cls");
			if(op==1){
				T1();
				system("pause");
				printf("Si deseas volver a contestar la pregunta inserta 1\n");
				printf("Si deseas continuar con con el programa ingresa 2 \n");
				scanf("%d",&op);
				
				if(op==2)r9=r9+3;
				system("cls");
			}
			if(op==2)r9=r9+3;
		}
	}
		system("pause");
		system("cls");
	for(r9=0;r9<=3;r9++)
	{
	SC(3);printf("f) %cPara que sirve el comando break dentro del comando switch?\n",168);SC(7);
	printf("1) Para terminar el caso que estamos trabajando\n");
	printf("2) Para iniciar el caso\n");
	printf("3) Ninguna de las anteriores\n");
		scanf("%d",&r1);
		if(r1==1){
		r=r+1;	
		printf("Felicidades la respuesta es correcta\n");
		r9=r9+3;

		}
		else {
			printf("Deseas visualizar la informacion de nuevo?\n");
			printf("ingresa uno si deseas visualizar la informacion de nuevo\n");
			printf("ingresa dos si deseas continuar con el programa\n");
			scanf("%d",&op);
			system("cls");
			if(op==1){
				T1();
				system("pause");
				printf("Si deseas volver a contestar la pregunta inserta 1\n");
				printf("Si deseas continuar con con el programa ingresa 2 \n");
				scanf("%d",&op);
				
				if(op==2)r9=r9+3;
				system("cls");
			}
			if(op==2)r9=r9+3;
		}
	}
		system("pause");
		system("cls");
	for(r9=0;r9<=3;r9++)
	{
	SC(3);printf("g) Revisa la sintaxis del siguiente programa y encuentra el error si es que hay\n");SC(7);
	printf("\tswitch(cate){\n");
	printf("\tcase 1: nsue=sue*1.15;\n");
	printf("\tprintf(\"&quot;su categoria es %d!n!n&quot;,cate);\n");
	printf("\tprintf(\"&quot;su nuevo sueldo es %f!n!n&quot;,nsue);\n");
	printf("\tbreak;\n");
	printf("\tcase 2:nsue=sue*1.10;\n");
	printf("\tprintf(\"&quot;su categoria es %d!n!n&quot;,cate);\n");
	printf("\tprintf(\"&quot;su nuevo sueldo es %f!n!n&quot;,nsue);\n");
	printf("\tbreak;\n");
	printf("\tcase 3:nsue=sue*1.08;\n");
	printf("\tprintf(\"&quot;su categoria es %d!n!n&quot;,cate);\n");
	printf("\tprintf(\"&quot;su nuevo sueldo es %f!n!n&quot;,nsue);\n");
	printf("\tbreak;\n");
	printf("\tcase 4:\n");
	printf("\tnsue=sue*1.07;\n");
	printf("\tprintf(\"&quot;su categoria es %d!n!n&quot;,cate);\n");
	printf("\tprintf(\"&quot;su nuevo sueldo es %f!n!n&quot;,nsue);\n");
	printf("\tbreak;\n");
	printf("\tdefault: printf(\"&quot;!n!n categoria no\n");
	printf("\taceptada!n!n&quot;);\n");
	printf("\tbreak;\n");
	printf("1) } final\n");
	printf("2) caso 4\n");
	printf("3) Ninguna de las anteriores\n");
		scanf("%d",&r1);
		if(r1==1){
		r=r+1;	
		printf("Felicidades la respuesta es correcta\n");
		r9=r9+3;

		}
		else {
			printf("Deseas visualizar la informacion de nuevo?\n");
			printf("ingresa uno si deseas visualizar la informacion de nuevo\n");
			printf("ingresa dos si deseas continuar con el programa\n");
			scanf("%d",&op);
			system("cls");
			if(op==1){
				T2();
				T3();
				system("pause");
				printf("Si deseas volver a contestar la pregunta inserta 1\n");
				printf("Si deseas continuar con con el programa ingresa 2 \n");
				scanf("%d",&op);
				
				if(op==2)r9=r9+3;
				system("cls");
			}
			if(op==2)r9=r9+3;
		}
	}
		system("pause");
		system("cls");
	for(r9=0;r9<=3;r9++)
	{
	SC(3);printf("h) Revisa la sintaxis del siguiente programa y encuentra el error si es que hay\n");SC(7);
	printf("\tswitch(){\n");
	printf("\tcase 1: nsue=sue*1.15;\n");
	printf("\tprintf(&quot;su categoria es %d!n!n&quot;,cate);\n");
	printf("\tprintf(&quot;su nuevo sueldo es %f!n!n&quot;,nsue);\n");
	printf("\tbreak;\n");
	printf("\tcase 2:nsue=sue*1.10;\n");
	printf("\tprintf(&quot;su categoria es %d!n!n&quot;,cate);\n");
	printf("\tprintf(&quot;su nuevo sueldo es %f!n!n&quot;,nsue);\n");
	printf("\tbreak;\n");
	printf("\tcase 3:nsue=sue*1.08;\n");
	printf("\tprintf(&quot;su categoria es %d!n!n&quot;,cate);\n");
	printf("\tprintf(&quot;su nuevo sueldo es %f!n!n&quot;,nsue);\n");
	printf("\tbreak;\n");
	printf("\tcase 4:\n");
	printf("\tnsue=sue*1.07;\n");
	printf("\tprintf(&quot;su categoria es %d!n!n&quot;,cate);\n\"");
	printf("\tprintf(&quot;su nuevo sueldo es %f!n!n&quot;,nsue);\n\"");
	printf("\tbreak;\n");
	printf("\tdefault: printf(&quot;!n!n categoria no\n");
	printf("\taceptada!n!n&quot;);\n");
	printf("\tbreak;\n}\n");
	printf("1) } \n");
	printf("2) variable\n");
	printf("3) Ninguna de las anteriores\n");
		scanf("%d",&r1);
		if(r1==2){
		r=r+1;	
		printf("Felicidades la respuesta es correcta\n");
		r9=r9+3;

		}
		else {
			printf("Deseas visualizar la informacion de nuevo?\n");
			printf("ingresa uno si deseas visualizar la informacion de nuevo\n");
			printf("ingresa dos si deseas continuar con el programa\n");
			scanf("%d",&op);
			system("cls");
			if(op==1){
				T2();
				T3();
				system("pause");
				printf("Si deseas volver a contestar la pregunta inserta 1\n");
				printf("Si deseas continuar con con el programa ingresa 2 \n");
				scanf("%d",&op);
				
				if(op==2)r9=r9+3;
				system("cls");
			}
			if(op==2)r9=r9+3;
		}
	}
		system("pause");
		system("cls");
			for(r9=0;r9<=3;r9++)
	{
	SC(3);printf("i) Revisa la sintaxis del siguiente programa y encuentra el error si es que hay\n");SC(7);
	printf("\tswitch(cate){\n");
	printf("\tcase 1; nsue=sue*1.15;\n");
	printf("\tprintf(&quot;su categoria es %d!n!n&quot;,cate);\n");
	printf("\tprintf(&quot;su nuevo sueldo es %f!n!n&quot;,nsue);\n");
	printf("\tbreak;\n");
	printf("\tcase 2;nsue=sue*1.10;\n");
	printf("\tprintf(&quot;su categoria es %d!n!n&quot;,cate);\n");
	printf("\tprintf(&quot;su nuevo sueldo es %f!n!n&quot;,nsue);\n");
	printf("\tbreak;\n");
	printf("\tcase 3;nsue=sue*1.08;\n");
	printf("\tprintf(&quot;su categoria es %d!n!n&quot;,cate);\n");
	printf("\tprintf(&quot;su nuevo sueldo es %f!n!n&quot;,nsue);\n");
	printf("\tbreak;\n");
	printf("\tcase 4;\n");
	printf("\tnsue=sue*1.07;\n");
	printf("\tprintf(&quot;su categoria es %d!n!n&quot;,cate);\n");
	printf("\tprintf(&quot;su nuevo sueldo es %f!n!n&quot;,nsue);\n");
	printf("\tbreak;\n");
	printf("\tdefault; printf(&quot;!n!n categoria no\n");
	printf("\taceptada!n!n&quot;);\n");
	printf("\tbreak;\n}\n");
	printf("1) ;\n");
	printf("2) default\n");
	printf("3) Ninguna de las anteriores\n");
		scanf("%d",&r1);
		if(r1==1){
		r=r+1;	
		printf("Felicidades la respuesta es correcta\n");
		r9=r9+3;

		}
		else {
			printf("Deseas visualizar la informacion de nuevo?\n");
			printf("ingresa uno si deseas visualizar la informacion de nuevo\n");
			printf("ingresa dos si deseas continuar con el programa\n");
			scanf("%d",&op);
			system("cls");
			if(op==1){
				T2();
				T3();
				system("pause");
				printf("Si deseas volver a contestar la pregunta inserta 1\n");
				printf("Si deseas continuar con con el programa ingresa 2 \n");
				scanf("%d",&op);
				
				if(op==2)r9=r9+3;
				system("cls");
			}
			if(op==2)r9=r9+3;
		}
	}
		system("pause");
		system("cls");
			for(r9=0;r9<=3;r9++)
	{
	SC(3);printf("j) Revisa la sintaxis del siguiente programa y encuentra el error si es que hay\n");SC(7);
	printf("\tswitch(cate){\n");
	printf("\tcase 1: nsue=sue*1.15;\n");
	printf("\tprintf(&quot;su categoria es %d!n!n&quot;,cate);\n");
	printf("\tprintf(&quot;su nuevo sueldo es %f!n!n&quot;,nsue);\n");
	printf("\tbreak;\n");
	printf("\tcase 2:nsue=sue*1.10;\n");
	printf("\tprintf(&quot;su categoria es %d!n!n&quot;,cate);\n");
	printf("\tprintf(&quot;su nuevo sueldo es %f!n!n&quot;,nsue);\n");
	printf("\tbreak;\n");
	printf("\tcase 3:nsue=sue*1.08;\n");
	printf("\tprintf(&quot;su categoria es %d!n!n&quot;,cate);\n");
	printf("\tprintf(&quot;su nuevo sueldo es %f!n!n&quot;,nsue);\n");
	printf("\tbreak;\n");
	printf("\tcase 4:\n");
	printf("\tnsue=sue*1.07;\n");
	printf("\tprintf(&quot;su categoria es %d!n!n&quot;,cate);\n");
	printf("\tprintf(&quot;su nuevo sueldo es %f!n!n&quot;,nsue);\n");
	printf("\tbreak;\n");
	printf("\tdefault: printf(&quot;!n!n categoria no\n");
	printf("\taceptada!n!n&quot;);\n");
	printf("\tbreak;\n}\n");
	printf("1) } final\n");
	printf("2) caso 4\n");
	printf("3) Ninguna de las anteriores\n");
		scanf("%d",&r1);
		if(r1==3){
		r=r+1;	
		printf("Felicidades la respuesta es correcta\n");
		r9=r9+3;

		}
		else {
			printf("Deseas visualizar la informacion de nuevo?\n");
			printf("ingresa uno si deseas visualizar la informacion de nuevo\n");
			printf("ingresa dos si deseas continuar con el programa\n");
			scanf("%d",&op);
			system("cls");
			if(op==1){
				T2();
				T3();
				system("pause");
				printf("Si deseas volver a contestar la pregunta inserta 1\n");
				printf("Si deseas continuar con con el programa ingresa 2 \n");
				scanf("%d",&op);
				
				if(op==2)r9=r9+3;
				system("cls");
			}
			if(op==2)r9=r9+3;
		}
	}
		system("pause");
		system("cls");
	printf("calificacion = %d",r);
	if(r<=5){
	printf("\nSi deseas volver a contestar el examen presiona 1\n");
	printf("Si deseas continuar con el programa presiona 2 \n");
	scanf("%d",&op);
	}
	if(op==2)r=r+6;
	system("cls");
	}while(r<=6);
	system("pause");
}
void PmostrarTeoria(void){	
int op=0;
    do { // inicio de ciclo do-while 
    	system("cls");
        mostrarMenu();
        printf("\tSeleccione un ejemplo: ");
        scanf("%d", &op);
        switch (op) { // Inicio de switch 
            case 1: {system("cls"); // Inicio de case 1
                int numero;
                printf("\n");
                  SC(6);   printf("  \t\t 1. Uso de switch con numeros \n\n");SC(7);
                printf(" \t\t || Este ejemplo nos muestra la lectura de los numeros ingresados || \n\n");               
                printf("Ingrese un valor entre 1 y 5: \n\n");
                printf("\t"); scanf("%d", &numero);
                printf("\t"); SwitchNumeros(numero );
                printf("\n");
                printf(" \t\t||* Desarrollo de la funcion switch para realizar este ejercicio *|| \n\n");    
                printf(" switch (opcion) {\n");
                printf(" case 1: {\n");
                printf(" int numero;\n");
                printf(" printf(%cIngrese un valor entre 1 y 5:%c);\n" ,34,34);
                printf(" scanf(%cd%c, &numero);\n", 34,34,100);
                printf(" switchNumeros(numero );\n");
                printf(" break; \n");
                printf(" }\n\n");
           SC(4);printf(" \t\t | PRESIONA CUALQUIER TECLA PARA VOLVER AL MENU  | ");SC(7);
                getch(); // retorna el caracter leido desde el teclado 
                break; // fin de case 1
            }
            case 2: {system("cls");//inicio case 2
                int subOpcion; 
                 printf("\n");
                  SC(6);printf("  \t\t 2. Uso de switch con trigonometria \n\n");SC(7);
				printf(" \t\t|| Este ejemplo muestra calculos trigonometricos a calcular || \n");  
                printf("\n Seleccione una opcion de Trigonometria:\n"); 
                printf("1. Seno \n");           
                printf("2. Coseno \n");
                printf("3. Tangente \n");
                printf("4. Salir \n");
                printf("opcion: ");
                scanf("%d", &subOpcion);
                SwitchTrigonometrico(subOpcion);
                 getch();
                break;// fin de case 2
            }
            case 3: {system("cls");//inicio case 3
                int subOpcion;
                 printf("\n");
                SC(6);printf("  \t\t 3. Uso de switch con potencias \n\n");SC(7);
                printf(" \t\t || Este ejemplo muestra calculos de potencia a calcular || \n");
                printf("\n Seleccione una opcion de Potencias:\n");
                printf("1. Potencia cuadrada\n");
                printf("2. Potencia X^Y\n");
                printf("3. Salir\n");
                printf("opcion: ");
                scanf("%d", &subOpcion);
                SwitchPotencias(subOpcion);
                 getch();
                break; // fin de case 3
            }
            case 4: {system("cls");//inicio case 4
                int opcion2 = SUBMENU2(); //SUBMENU DE IMAGINARIOS
                switch(opcion2) {
                    case 1: calcularSumaImaginarios(); break;
                    case 2: calcularRestaImaginarios(); break;
                    case 3: calcularProductoImaginarios(); break;
                    case 4: calcularDivisionImaginarios(); break;
                    case 5: printf("Salida del submenu imaginarios\n"); break;
                    default: printf("Opcion incorrecta\n"); break;
                }
                break;// fin de case 4
            }
            case 5: {system("cls");//funcion para borrar lo mostrado en la visualizacion del programa
                int opcion2 = SUBMENU3();// SUBMENU DE RACIONALES 
                switch(opcion2) {
                    case 1: calcularSumaRacionales(); break;
                    case 2: calcularRestaRacionales(); break;
                    case 3: calcularProductoRacionales(); break;
                    case 4: calcularDivisionRacionales(); break;
                    case 5: printf("Salida del submenu de racionales\n"); break;
                    default: printf("Opcion incorrecta\n"); break;
                     getch();
                }
                break;// fin de case 5
            }
            case 6://inicio case 6
                printf("Regresando al menu principal\n");
				break;
            default: 
                printf("Opcion incorrecta, vuelve a escoger una opcion\n");
                break; // fin de case 6
        }// fin de swtch
    } while(op != 6); // fin de ciclo do-while 


}
void SwitchNumeros(int numero) { // DEARROLLO DE switch DE EJEMPLO NUMEROS 
    switch (numero) {// inicio de swtch
        case 1: printf(" Uno \n\n"); 
		break;
        case 2: printf(" Dos \n\n");   
		 break;
        case 3: printf(" Tres \n\n"); 
		break;
        case 4: printf(" Cuatro \n\n");
		 break;
        case 5: printf(" Cinco \n\n");
		 break;
        default:
            printf("El numero esta fuera de rango, ingresa otro numero entre el 1 y 5 \n\n");
                scanf("%i", &numero);
                SwitchNumeros(numero);
				
    }// fin de swtch
}


void SwitchTrigonometrico(int opcion) {/////// Desarrollo de calculos para  trigonometricos //////////
    float X, R;// inicio de swtch
    switch (opcion) {
        case 1: system("cls");//
         printf("\n");
            printf(" \t 1. Seno \n\n"); 
            printf("Digita los grados = ");
            scanf("%f", &X);
            R = (X * M_PI) / 180.0;
             printf("\n");
            printf("El seno del angulo %5.1f = %5.2f \n\n\n", X, sin(R)); 
            printf(" \t\t||* A continuacion se muestra el desarrollo de la funcion switch para realizar este ejercicio *||\n\n ");
            printf("switch (opcion) { \n");
            printf("case 1: \n");
            printf("printf(%cDigita los grados = %c); \n" ,34,34);
            printf("scanf(%cf%c, &X); \n",34,34,102);
            printf(" printf(%cEl seno del angulo 5.1f = 5.2f%c) , X, sin(R); \n", 34,34);
            printf(" break; \n\n\n");
              SC(4);printf(" \t\t | PRESIONA CUALQUIER TECLA PARA VOLVER AL MENU  | ");SC(7);
            break;  // fin de case 1
		getch();
        case 2:system("cls"); //
         printf("\n");
         printf("\t2. Coseno \n\n");
            printf("Digita los grados = ");
            scanf("%f", &X);
            R = (X * M_PI) / 180.0;
             printf("\n");
            printf("El coseno del angulo %5.1f = %5.2f \n\n\n", X, cos(R));
             printf(" \t\t||* A continuacion se muestra el desarrollo de la funcion switch para realizar este ejercicio *||\n\n ");
             printf("switch (opcion) { \n");
             printf("case 2:\n");
             printf("printf(%cDigita los grados = %c); \n" ,34,34);
             printf("scanf(%cf%c, &X); \n",34,34,102); 
             printf("R = (X * M_PI) / 180.0; \n");
             printf("printf(%cEl coseno del angulo 5.1f = 5.2f %c, X, cos(R));\n" ,34,34);
             printf("break;\n\n\n");
                SC(4);printf(" \t\t | PRESIONA CUALQUIER TECLA PARA VOLVER AL MENU  | ");SC(7);
            break; // fin de case2
        case 3:system("cls"); //
         printf("\n");
         printf("\t 3. Tangente \n\n");
            printf(" Digita los grados = ");
            scanf("%f", &X);
            R = (X * M_PI) / 180.0;
             printf("\n");
            printf("La tangente del angulo %5.1f = %5.2f \n\n\n", X, tan(R));
             printf(" \t\t||* A continuacion se muestra el desarrollo de la funcion switch para realizar este ejercicio *||\n\n ");
             printf("switch (opcion) { \n");
             printf(" case 3:\n");
             printf("printf(%cDigita los grados = %c); \n" ,34,34);
             printf("scanf(%cf%c, &X); \n",34,34,102);
             printf("R = (X * M_PI) / 180.0;\n");
             printf("printf(%cLa tangente del angulo 5.1f = 5.2f %c, X, tan(R));\n" ,34,34);
             printf("break;\n\n\n");
              SC(4);printf(" \t\t | PRESIONA CUALQUIER TECLA PARA VOLVER AL MENU  | ");SC(7);
            break;  // fin de case3
        case 4://
            printf("Salida del submenu trigonometricos \n\n");
               SC(4);printf(" \t\t | PRESIONA CUALQUIER TECLA PARA VOLVER AL MENU  | ");SC(7);
            break; // fin de case
        default:
            printf("Opcion incorrecta \n");
            break;
    }// fin de swtch
}////Fin de calculos//////
//////////////// Desarrollo de calculos para Potencias /////////////////////
 void SwitchPotencias(int opcion) {
    float X, Y, R;
    switch (opcion) { // inicio de switch 
        case 1:  system("cls");//
            printf("\t\t1. Potencia cuadrada\n\n");
            printf("Digita la base de la potencia = ");
            scanf("%f", &X);
            printf("La potencia de %5.1f ^ 2 = %5.2f  \n\n", X, pow(X, 2));
             printf(" \t\t||* A continuacion se muestra el desarrollo de la funcion switch para realizar este ejercicio *||\n\n ");    
			 printf("switch (opcion) {\n"); 
			 printf("case 1:  \n"); 
	         printf("printf(%cDigita la base de la potencia= %c); \n" ,34,34); 
			 printf("scanf(%cf%c, &X); \n",34,34,102);
			 printf("printf(%cLa potencia de 5.1f ^ 2 = 5.2f %c, X, pow(X, 2));\n" ,34,34); 
			 printf("break;\n\n");
              SC(4);printf(" \t\t | PRESIONA CUALQUIER TECLA PARA VOLVER AL MENU  | ");SC(7);
            break; // fin de case 1
        case 2: system("cls");//
         printf("\t\t2. Potencia X^Y\n\n");
            printf("Digita la base de la potencia = ");
            scanf("%f", &X);
            printf("Digita el exponente = ");
            scanf("%f", &Y);
            R = pow(X, Y);
            printf("La potencia de %5.1f ^ %5.1f = %5.2f  \n\n", X, Y, R);
             printf(" \t\t||* A continuacion se muestra el desarrollo de la funcion switch para realizar este ejercicio *||\n\n ");
             printf("switch (opcion) {\n"); 
			 printf("case 2:  \n"); 
	         printf("printf(%cDigita la base de la potencia= %c); \n" ,34,34); 	         
			 printf("scanf(%cf%c, &X); \n",34,34,102);
			 printf("printf(%cDigita el exponente = %c);\n",34,34);
			 printf("scanf(%cf%c, &Y); \n",34,34,102);
			 printf("R = pow(X, Y);\n");
			 printf("printf(%cLa potencia de 5.1f ^ 2 = 5.2f %c, X, Y, R);\n" ,34,34); 
			 printf("break;\n\n");
               SC(4);printf(" \t\t | PRESIONA CUALQUIER TECLA PARA VOLVER AL MENU  | ");SC(7);
            break; // fin de case 2 
        case 3:  system("cls");//
            printf("Salida del submenu potencias \n");
             printf(" \t\t | PRESIONA CUALQUIER TECLA PARA VOLVER AL MENU  | ");
            break;// fin de case
        default:
            printf("Opcion incorrecta \n");
            break;
    } // fin de switch
}////////Fin de calculos///////////

int SUBMENU2(void) {//////////Menu De imaginarios//////////
    int OPCION;
    printf("\t\t MENU IMAGINARIOS \n");
    printf("\t\t 1.- Suma \n");
    printf("\t\t 2.- Resta \n"); 
    printf("\t\t 3.- Producto \n");
    printf("\t\t 4.- Division \n");
    printf("\t\t 5.- Salida\n");
    printf("OPCION: "); scanf("%d", &OPCION);
    return OPCION;
} /////////////////////////////////

int SUBMENU3(void) {//////////Menu Racionales//////////
    int OPCION;
    printf("\t\t MENU RACIONALES \n");
    printf("\t\t 1.- Suma \n"); 	
    printf("\t\t 2.- Resta \n");
    printf("\t\t 3.- Producto \n");
    printf("\t\t 4.- Division \n");
    printf("\t\t 5.- Salida\n");
    printf("OPCION: "); scanf("%d", &OPCION);
    return OPCION;
}//////////////////////////////

void calcularSumaImaginarios() {///////// Inicio Desarrolo de suma imaginarios///////////
    float a, b, c, d;
    system("cls");
    printf("\n");
     SC(6);printf("\t\t 1.- Suma \n\n"); SC(7);
	printf("Ingrese la parte real del primer numero: ");
    scanf("%f", &a);
    printf("Ingrese la parte imaginaria del primer numero: ");
    scanf("%f", &b);
    printf("Ingrese la parte real del segundo numero: ");
    scanf("%f", &c);
    printf("Ingrese la parte imaginaria del segundo numero: ");
    scanf("%f", &d);
    printf("La suma es: %f + %fi\n", a + c, b + d);
    printf("\n\n");
     printf(" \t\t||* A continuacion se muestra el desarrollo de la funcion switch para realizar este ejercicio *||\n\n ");
      printf("switch (opcion) { \n");
     printf(" case : \n");
     printf(" Desarrollo del algoritmo o casos a realizar \n");
      printf(" break; \t\t\ Al termino de cada case se utiliza break \n");
     printf(" default:\n");
     printf(" }     fin de switch \n");
     printf("\n\n");
      SC(4);printf(" \t\t | PRESIONA CUALQUIER TECLA PARA VOLVER AL MENU  | ");SC(7);
      getch();
}//////Fin de desarrollo/////////

void calcularRestaImaginarios() {//////// Inicio Desarrolo de resta imaginarios//////////
    float a, b, c, d;
    system("cls");
    printf("\n");
    SC(6);printf("\t\t 2.- Resta \n\n");SC(7);
    printf("Ingrese la parte real del primer numero: ");
    scanf("%f", &a);
    printf("Ingrese la parte imaginaria del primer numero: ");
    scanf("%f", &b);
    printf("Ingrese la parte real del segundo numero: ");
    scanf("%f", &c);
    printf("Ingrese la parte imaginaria del segundo numero: ");
    scanf("%f", &d);
    printf("La resta es: %f + %fi\n", a - c, b - d);
     printf("\n\n");
     printf(" \t\t||* A continuacion se muestra el desarrollo de la funcion switch para realizar este ejercicio *||\n\n ");
      printf("switch (opcion) { \n");
     printf(" case : \n");
     printf(" Desarrollo del algoritmo o casos a realizar \n");
   printf(" break; \t\t Al termino de cada case se utiliza break \n");
     printf(" default:\n");
     printf(" }     fin de switch \n");
     printf("\n\n");
     SC(4);printf(" \t\t | PRESIONA CUALQUIER TECLA PARA VOLVER AL MENU  | ");SC(7);
      getch();
}////////Fin de desarrollo /////////////

void calcularProductoImaginarios() {////////// Inicio de Desarrollo de suma imaginarios///////
    float a, b, c, d, real, imag;
     system("cls");
     printf("\n");
    SC(6);printf("\t\t 3.- Producto \n\n");  SC(7);
    printf("Ingrese la parte real del primer numero: ");
    scanf("%f", &a);
    printf("Ingrese la parte imaginaria del primer numero: ");
    scanf("%f", &b);
    printf("Ingrese la parte real del segundo numero: ");
    scanf("%f", &c);
    printf("Ingrese la parte imaginaria del segundo numero: ");
    scanf("%f", &d);
    real = (a * c) - (b * d);
    imag = (a * d) + (b * c);
    printf("El producto es: %f + %fi\n", real, imag);
     printf("\n\n");
     printf(" \t\t||* A continuacion se muestra el desarrollo de la funcion switch para realizar este ejercicio *||\n\n ");
      printf("switch (opcion) { \n");
     printf(" case : \n");
     printf(" Desarrollo del algoritmo o casos a realizar \n");
       printf(" break; \t\t Al termino de cada case se utiliza break \n");
     printf(" default:\n");
     printf(" }     fin de switch \n");
     printf("\n\n");
      SC(4);printf(" \t\t | PRESIONA CUALQUIER TECLA PARA VOLVER AL MENU  | ");SC(7);
      getch();
}///// Fin de desarrollo/////

void calcularDivisionImaginarios() {////////// Inicio de Desarrollo division de imaginarios///////
    float a, b, c, d, real, imag, denom;
    system("cls");
    printf("\n");
    SC(6); printf("\t\t 4.- Division \n\n");SC(7);
    printf("Ingrese la parte real del primer numero: ");
    scanf("%f", &a);
    printf("Ingrese la parte imaginaria del primer numero: ");
    scanf("%f", &b);
    printf("Ingrese la parte real del segundo numero: ");
    scanf("%f", &c);
    printf("Ingrese la parte imaginaria del segundo numero: ");
    scanf("%f", &d);
    denom = (c * c) + (d * d);
    real = ((a * c) + (b * d)) / denom;
    imag = ((b * c) - (a * d)) / denom;
    printf("La division es: %f + %fi\n", real, imag);
     printf("\n\n");
     printf(" \t\t||* A continuacion se muestra el desarrollo de la funcion switch para realizar este ejercicio *||\n\n ");
     printf("switch (opcion) { \n");
     printf(" case : \n");
     printf(" Desarrollo del algoritmo o casos a realizar \n");
      printf(" break; \t\t Al termino de cada case se utiliza break \n");
     printf(" default:\n");
     printf(" }     fin de switch \n");
     printf("\n\n");
     SC(4);printf(" \t\t | PRESIONA CUALQUIER TECLA PARA VOLVER AL MENU  | ");SC(7);
      getch();
}/////Fin de desarrollo/////

void calcularSumaRacionales() {////////// Inicio de Desarrollo de suma Racionales///////
    float a, b, c, d;
    system("cls");
    printf("\n");
     SC(6);printf("\t\t 1.- Suma \n\n"); SC(7);
    printf("Ingrese el numerador del primer numero: ");
    scanf("%f", &a);
    printf("Ingrese el denominador del primer numero: ");
    scanf("%f", &b);
    printf("Ingrese el numerador del segundo numero: ");
    scanf("%f", &c);
    printf("Ingrese el denominador del segundo numero: ");
    scanf("%f", &d);
    printf("La suma es: %f / %f\n", (a * d) + (c * b), b * d);
     printf("\n\n");
     printf(" \t\t||* A continuacion se muestra el desarrollo de la funcion switch para realizar este ejercicio *||\n\n ");
      printf("switch (opcion) { \n");
     printf(" case : \n");
     printf(" Desarrollo del algoritmo o casos a realizar \n");
        printf(" break; \t\t Al termino de cada case se utiliza break \n");
     printf(" default:\n");
     printf(" }     fin de switch \n");
     printf("\n\n");
      SC(4);printf(" \t\t | PRESIONA CUALQUIER TECLA PARA VOLVER AL MENU  | ");SC(7);
      getch();
}/////Fin de desarrollo/////

void calcularRestaRacionales() {////////// Inicio de Desarrollo de resta Racionales///////
    float a, b, c, d;
     system("cls");
    printf("\n");
    SC(6);printf("\t\t 2.- Resta \n\n");SC(7);
    printf("Ingrese el numerador del primer numero: ");
    scanf("%f", &a);
    printf("Ingrese el denominador del primer numero: ");
    scanf("%f", &b);
    printf("Ingrese el numerador del segundo numero: ");
    scanf("%f", &c);
    printf("Ingrese el denominador del segundo numero: ");
    scanf("%f", &d);
    printf("La resta es: %f / %f\n", (a * d) - (c * b), b * d);
     printf("\n\n");
     printf(" \t\t||* A continuacion se muestra el desarrollo de la funcion switch para realizar este ejercicio *||\n\n ");
      printf("switch (opcion) { \n");
     printf(" case : \n");
     printf(" Desarrollo del algoritmo o casos a realizar \n");
       printf(" break; \t\t Al termino de cada case se utiliza break \n");
     printf(" default:\n");
     printf(" }     fin de switch \n");
     printf("\n\n");
    SC(4);printf(" \t\t | PRESIONA CUALQUIER TECLA PARA VOLVER AL MENU  | ");SC(7);
      getch();
}/////Fin de desarrollo/////

void calcularProductoRacionales() {////////// Inicio de Desarrollo de producto Racionales///////
    float a, b, c, d;
    system("cls");
     printf("\n");
    SC(6);printf("\t\t 3.- Producto \n\n"); SC(7); 
    printf("Ingrese el numerador del primer numero: ");
    scanf("%f", &a);
    printf("Ingrese el denominador del primer numero: ");
    scanf("%f", &b);
    printf("Ingrese el numerador del segundo numero: ");
    scanf("%f", &c);
    printf("Ingrese el denominador del segundo numero: ");
    scanf("%f", &d);
    printf("El producto es: %f / %f\n", a * c, b * d);
     printf("\n\n");
     printf(" \t\t||* A continuacion se muestra el desarrollo de la funcion switch para realizar este ejercicio *||\n\n ");
      printf("switch (opcion) { \n");
     printf(" case : \n");
     printf(" Desarrollo del algoritmo o casos a realizar \n");
    printf(" break; \t\t Al termino de cada case se utiliza break \n");
     printf(" default:\n");
     printf(" }     fin de switch \n");
     printf("\n\n");
     SC(4);printf(" \t\t | PRESIONA CUALQUIER TECLA PARA VOLVER AL MENU  | ");SC(7);
      getch();
}//////Fin de desarrollo/////

void calcularDivisionRacionales() {////////// Inicio de Desarrollo de division Racionales///////
    float a, b, c, d;
    system("cls");
    printf("\n");
     SC(6);printf("\t\t 4.- Division \n\n");SC(7);
    printf("Ingrese el numerador del primer numero: ");
    scanf("%f", &a);
    printf("Ingrese el denominador del primer numero: ");
    scanf("%f", &b);
    printf("Ingrese el numerador del segundo numero: ");
    scanf("%f", &c);
    printf("Ingrese el denominador del segundo numero: ");
    scanf("%f", &d);
    printf("La division es: %f / %f\n", a * d, b * c);
     printf("\n\n");
     printf(" \t\t||* A continuacion se muestra el desarrollo de la funcion switch para realizar este ejercicio *||\n\n ");
      printf("switch (opcion) { \n");
     printf(" case : \n");
     printf(" Desarrollo del algoritmo o casos a realizar \n");
     printf(" break; \t\t Al termino de cada case se utiliza break \n");
     printf(" default:\n");
     printf(" }     fin de switch \n");
     printf("\n\n");
     SC(4);printf(" \t\t | PRESIONA CUALQUIER TECLA PARA VOLVER AL MENU  | ");SC(7);
      getch();
}//////Fin de desarrollo/////
 
void mostrarMenu() {//////Visualizacion del Menu General ////////
    printf("\n\n");
        SC(6);printf("  \t\t||   MENU DE EJEMPLOS CON EL USO DE SWITCH   || \n\n");  SC(7);
    printf("  \t\t    Elige un numero de ejemplo  \n\n");
    printf("  \t\t 1. Uso de switch con numeros \n");
    printf("  \t\t 2. Uso de switch con trigonometria \n");
    printf("  \t\t 3. Uso de switch con potencias \n");
    printf("  \t\t 4. Uso de switch con numeros imaginarios \n");
    printf("  \t\t 5. Uso de switch con numeros racionales \n");
    printf("  \t\t 6. Salir \n\n");
}
void T1(void){
	system("cls");
	SC(5);printf("\n\t\tTeoria de comando switch\n\n");SC(7);
	printf("\tPara comenzar con el conocimiento de esta condicional iniciaremos con\n\tla definici%cn y el funcionamiento\n",162);
	printf("\tEl condicional switch es una estructura de control que permite manejar\n\tm%cltiples casos de una variable\n",163);
	printf("\tLas partes que conforman esta condicional son las siguientes\n");
	printf("\tVariable, valor 1 y valor 2, break, default\n"); 
	printf("\tVariable; es la expresi%cn que se eval%ca\n",162,163);
	printf("\tValor 1-Valor 2...(concocidos como case 1, case 2...); son los posibles\n\tvalores que puede tomar la variable(en los case se utiliza los dos puntos(:),\n\tevite utilizar punto y coma (;))\n");
	printf("\tBreak; es necesario para evitar que se ejecuten todos los casos\n");
	printf("\tdefault; se ejecuta si no se cumple ninguno de los casos anteriores\n");
	printf("\tLa estructura con la palabra clave switch seguida entre par%cntesis por\n\tuna variable de tipo entera(puede ser char, short int,\n\tint long int y long long int)\n",130);
	printf("\tCabe aclarar que para un uso correcto del comando switch tenemos que\n");
	printf("\tgenerar una funcion menu anteriormente o desplegar la informacion para\n");
	printf("\tque el usuario sepa que opciones hay\n");
	system("pause");
	system("cls");
}
void T2(void){
	SC(5);printf("\n\tSINTAXIS DE switch");SC(7);
	printf("\n\tLa sintaxis del comando switch es un poco diferente ya que tenemos\nque utilizar : en vez de ; cada que terminamos de escribir case n por ende dicho esto \npodemos continuar con lo siguiente:");
	printf("\n\t\tswitch(a){ ");SC(4); printf("\tLa a que esta dentro de los parentisis es la variable que nos\n\t\t\t\t\t\t\t\t indicara la opcion que escogimos\n");
	SC(7);
	printf("\t\t\t case 1:"); SC(4); printf("\tEsta es la opcion numero uno del caso a desarrollar\n");
	SC(7);
	printf("\t\t\t\t Contenido del programa");SC(4); printf("\tEn este espacio se puede desarrollar la opcion que escogimos\n");
	SC(7);
	printf("\t\t\t break;"); SC(4); printf("\tEsta funcion nos sirve para terminar la opcion que estamos trabajando\n");
	SC(7);
	printf("\t\t\t default:"); SC(4); printf("\tEste comando invalida todos los valores que no tenemos en los casos \n\t\t\t\t\t\t\tque vamos a ocupar que se puedan ingresar en la opcion a\n");
	SC(7);
	printf("\t\t}");SC(4); printf("\t\tCon esta llave terminamos el ciclo y podemos continuar con el programa\n");
	SC(7);
	system("pause");
	system("cls");
}
void T3(void){
	SC(5);printf("\tAnidacion de switch");SC(7);
	printf("\n\tLos switch se pueden anidar las veces que sean necesarias siempre y cuando \n\ttengamos orden y una buena sintaxis al momento de anidar los switch");
	printf("\n\tEJEMPLO");
	printf("\n\t\tswitch(a){ ");
	printf("\n\t\t\t case 1:");
	printf("\n\t\t\t\t Contenido del programa:");
	printf("\n\t\t\tswitch(b){ ");
	printf("\n\t\t\t\t case 1:"); SC(4); printf("\tAqui es donde integramos el ciclo anidado dentro del contenido de alguno");	SC(7);
	printf("\n\t\t\t\t\t Contenido del programa"); SC(4); printf("\t\tde los casos del ciclo principal, esto se puede"); SC(7);
	printf("\n\t\t\t\t brake;"); SC(4) ; printf("\thacer las veces que sean necesarias durante la duracion del programa propuesto"); SC(7);
	printf("\n\t\t\t\t default:");
	printf("\n\t\t\t}");	
	printf("\n\t\t\t break;");
	printf("\n\t\t\t default:");
	printf("\n\t\t}");
	system("pause");
	system("cls");
}
void SC(int ForgC){//esta funcion es para el cambio de color
 WORD wColor;

  HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
  CONSOLE_SCREEN_BUFFER_INFO csbi;
 if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
 {
      wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
      SetConsoleTextAttribute(hStdOut, wColor);
 }
 return;
}

