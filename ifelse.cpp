/* CODIGO VERSION ACOMODADA CON EL PROBADOR DE CARACTER CASI FINAL IF-ELSE */
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>
#include <ctype.h>
int menu_ifelse( void ); //CONTIENE AL MENU PRINCIPAL IF ELSE
void problemario(void); // CONTIENE EL DESARROLLO DEL MENU IF ELSE EJECUTANDO LAS DEMASS FUNCIONES
int cuestionario(void); // CONTIENE LAS PREGUNTAS QUE HAREMOS
void mostrarTeoria(void); //Contiene a la teoria 
int verificadorCaracter(void);
void SC(int ForgC);
int verificadorRango(void);
int main(){
problemario();
return 0;
}
//////////////////////////////////DESARROLLO DE FUNCIONES: MENU, INFO, CUESTIONARIO, VERIFICADOR////////////////////////////////////////
int menu_ifelse(void){
	int op;
	SC(4);printf("\t\t\t\t\t\tMENU DE IF Y ELSE \n");SC(9);
	printf("\n");
	printf("\t\t\t\t1.- Introduccion a como usar if y else...\n");
	printf("\t\t\t\t2.- Problemario: \n");
	printf("\t\t\t\t3.- Terminar programa \n\n");
	SC(7);printf("\t\t\t\tIngresa la opcion deseada no olvides que antes\n");
	printf("\t\t\t\tde ir al cuestionario debes ver la informacion ! :");
	op = verificadorCaracter();
	return op;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void problemario(void){
	int op,op2,BANDERA=0; // op es la opcion del men, op2 es la opcion del cuestinario uso a BANDERA PARA SALIR DEL CICLO DE SER NECESARIO (1) LO REPITE (2) SACA
	do{
    op = menu_ifelse(); // llamado al menu if else
    
	switch(op){
		case 1: 
		mostrarTeoria();// informacion();
		BANDERA = 1;
		    break;// FIN CASE 1
		case 2: 
		if(BANDERA==1){ // if BANDERA==1 para que, si no ha leido la informacion (case1) no lo deje resolver el cuestionario 
		op2 = cuestionario();
			 if(op2==1){
			      BANDERA=1;
			      system("cls");
				       }
		     if(op2==2){
				BANDERA=2;
				break;
			    }
		              }
		else{
		printf("\nNo has leido la informacion, presiona (1) para leer\n la informacion y luego regresas al cuestionario \n");
		BANDERA=3;}
		system("cls");
		    break; //FIN CASE 2
		case 3: 
		printf("Saliendo del menu if else ...........");
		BANDERA=2;
		break; // FIN CASE 3
		default:
		
			printf("La opcion ingresada no esta dentro del menu\nVulve a ingresar otra opcion\n\n");
			system("pause");
            system("cls");
			BANDERA=3;
		
			break;
         	} //FIN DE SWITCH 
    }while((BANDERA==1) ||(BANDERA==3) );
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int cuestionario(void){
	int i, respuesta, respuestaError, respuestaError2, conteo=0, op2, preguntas=10;
	for(i=1; i<=11; i++){ //Uso un ciclo for para repetir que el case que serian los preguntas cambien con forme i++
	switch(i){
		 case 1:
		 	system("cls");
         SC(1);printf("\t\t\t\t\t\t\t%c EJERCICIO 1:\n\n",254);SC(7);
         printf("\t\t\t\tEste ejercicio te dice si el numero ingresado es positivo o negativo \n\n");
         printf("\t\t\t\tint main() { \n");
		 printf("\t\t\t\tint numero;\n");
		 printf("\t\t\t\tprintf(%cIngrese un numero:%c);\n",34,34);   
		 printf("\t\t\t\tscanf(%c%cd%c, &numero);\n",34,37,34); 
		 printf("\t\t\t\tif (numero >= 0) {\n\n");
		 printf("\t\t\t\tprintf(%cEl numero es positivo o cero.%c);\n",34,34);
		 printf("\t\t\t\t}\n\n");   
   		 SC(6);printf("\t\t\t\tif (numero ___ 0) {\n");SC(7);
		 printf("\t\t\t\tprintf(%cEl numero es negativo.%c);\n",34,34);
		 printf("\t\t\t\t}\n");
         printf("\t\t\t\treturn 0;\n\t\t\t\t}\n\n"); 
         printf("\t\t\t\tElige el inciso correcto\n\n");
         printf("\t\t\t\t1) > \n");
         printf("\t\t\t\t2) < \n"); //RESPUESTA CORRECTA
         printf("\t\t\t\t3) = \n");
         SC(6);printf("\t\t\t\t%cQue operador hace falta en el parentesis de if ?: ",168);SC(7);
			respuesta=verificadorCaracter();
			if(respuesta==1){
				SC(4);printf("\t\t\t%cOpcion Incorrecta!\n",173);SC(7);
				printf("\t\t\tEsta respuesta no puede ser ya que el operador elegido no cumpliria la condicion\n\n");
				printf("\t\t\tDeseas intentar de nuevo la pregunta(1) o Ver la informacion(2): ");
			    respuestaError=verificadorRango();
				if(respuestaError==1){
					i--;
					break;
				}
				if(respuestaError==2){
					system("cls");
					mostrarTeoria();
					SC(9);printf("\t%cDeseas contestar(1) o Pasar a la siguiente pregunta(2)?: ",168);SC(7);
					respuestaError2=verificadorRango();
					if(respuestaError2==1){
						i--;
						break;
					}
					if(respuestaError2==2){
						break;
					}
				}
			}//FIN DE IF SI RESPUESTA ES IGUAL A 1
			if(respuesta==2){
				SC(2);printf("\t\t\t%cCorrecto! \n",173);SC(7);
				printf("\t\t\tEl operador debe ser < para que se cumpla\n\n");
				printf("\t\t\tPresiona enter para continuar..... ");
		        getchar();
				conteo++;
				break;
			}//FIN DE IF SI RESPUESTA ES IGUAL 2
			if(respuesta==3){
				SC(4);printf("\t\t\t%cOpcion incorrecta!\n",173);SC(7);
				printf("\t\t\tEsta respuesta no puede ser ya que el operador elegido no cumpliria la condicion\n\n");
				printf("\t\t\tDeseas intentar de nuevo la pregunta(1) o Ver la informacion(2): ");
				 respuestaError=verificadorRango();
				if(respuestaError==1){
					i--;
					break;
				}
				if(respuestaError==2){
					system("cls");
					mostrarTeoria();
				SC(9);printf("\t%cDeseas contestar(1) o Pasar a la siguiente pregunta(2)?: ",168);SC(7);
					 respuestaError2=verificadorRango();
					if(respuestaError2==1){
						i--;
						break;
					}
					if(respuestaError2==2){
						break;
					}
				}
			}//FIN DE IF SI RESPUESTA ES IGUAL A 3
			printf("\t\t\tIngresaste mal la opcion intentaras la pregunta de nuevo \n\n");
			i--;
			system("pause");
				break; // FIN CASE 1
			case 2:
		     system("cls");
    SC(1);printf("\t\t\t\t\t\t\t%c EJERCICIO 2:\n\n",254);SC(7);
    printf("\t\t\t\tEste ejercicio te imprime si el primer numero ingresado es mayor que el otro\n\n");
    printf("\t\t\t\tint main() {\n");
    printf("\t\t\t\tint num1, num2;\n");
    printf("\t\t\t\tprintf(%cIngrese dos numeros: %c);\n",34,34);
    printf("\t\t\t\tscanf(%c%cd%c, &num1);\n",34,37,34);
	printf("\t\t\t\tscanf(%c%cd%c, &num2);\n",34,37,34);
    SC(6);printf("\t\t\t\tif (____ > ____) {\n");SC(7);
    printf("\t\t\t\tprintf(%c%cd es mayor que %cd.%c, num1, num2);\n",34,37,37,34);    
    printf("\t\t\t\t}\n\n");
    printf("\t\t\t\treturn 0; \n");
	printf("\t\t\t\t}\n\n"); 
    printf("\t\t\t\tElige el inciso correcto\n");
     printf("\t\t\t\t1) num1 y num1 \n");
    printf("\t\t\t\t2) num2 y num1 \n"); 
    printf("\t\t\t\t3) num1 y num2 \n");//RESPUESTA CORRECTA
    SC(6);printf("\t\t\t\tQue variables hace falta poner en los espacios de if?: ");SC(7);
			respuesta=verificadorCaracter();
			if(respuesta==1){
				SC(4);printf("\t\t\t%cOpcion incorrecta!\n",173);SC(7);
				printf("\t\t\tEsta respuesta no puede ser ya que las variables son iguales y no cumpliria la condicion\n");
				printf("\t\t\tDeseas intentar de nuevo la pregunta(1) o Ver la informacion(2): ");
			    respuestaError=verificadorRango();
				if(respuestaError==1){
					i--;
					break;
				}
				if(respuestaError==2){
					system("cls");
					mostrarTeoria();
				SC(9);printf("\t%cDeseas contestar(1) o Pasar a la siguiente pregunta(2)?: ",168);SC(7);
					respuestaError2=verificadorRango();
					if(respuestaError2==1){
						i--;
						break;
					}
					if(respuestaError2==2){
						break;
					}
				}
			}//FIN DE IF SI RESPUESTA ES IGUAL A 1
			if(respuesta==2){
				SC(4);printf("\t\t\t%cOpcion incorrecta!\n",173);SC(7);
				printf("\t\t\tEsta respuesta no puede ser la condicion de if se ejecutaria mal\n");
				printf("\t\t\tDeseas intentar de nuevo la pregunta(1) o Ver la informacion(2): ");
				 respuestaError=verificadorRango();
				if(respuestaError==1){
					i--;
					break;
				}
				if(respuestaError==2){
					system("cls");
					mostrarTeoria();
					printf("\t\n\n%cDeseas contestar(1) o Pasar a la siguiente pregunta(2)?: ",168);
					 respuestaError2=verificadorRango();
					if(respuestaError2==1){
						i--;
						break;
					}
					if(respuestaError2==2){
						break;
					}
				}
			}//FIN DE IF SI RESPUESTA ES IGUAL 2
			if(respuesta==3){
				SC(2);printf("\t\t\t%cCorrecto!\n",173);SC(7);
				printf("\t\t\tEsas son las variables faltantes\n");
				printf("\t\t\tPresiona enter para continuar..... ");
		        getchar();
				conteo++;
				break;
			}//FIN DE IF SI RESPUESTA ES IGUAL A 3
			printf("\t\t\tIngresaste mal la opcion intentaras la pregunta de nuevo \n\n");
			i--;
			system("pause");
			break; //FIN CASE 2
			case 3: 
				system("cls");
    SC(1);printf("\t\t\t\t\t\t\t%c EJERCICIO 3:\n\n",254);SC(7);
    printf("\t\t\t\tEste ejercicio te imprime si el numero ingresado es par o impar\n\n");
    printf("\t\t\t\tint main() {\n");
    printf("\t\t\t\tint numero;\n");
    printf("\t\t\t\tprintf(%cIngrese un numero: %c);\n",34,34);
    printf("\t\t\t\tscanf(%c%cd%c, &numero);\n",34,37,34);
    printf("\t\t\t\tif (numero %c2 == 0) \n",37);
    printf("\t\t\t\tprintf(%cEl numero es par%c);\n",34,34);   
    printf("\t\t\t\t\n");
    printf("\t\t\t\treturn 0;\n"); 
    printf("\t\t\t\t}\n\n"); 
    printf("\t\t\t\tElige el inciso correcto\n");
    printf("\t\t\t\t1) { y } \n");//RESPUESTA CORRECTA
    printf("\t\t\t\t2) [ y ] \n"); 
    printf("\t\t\t\t3) ( y ) \n");
	SC(6);printf("\t\t\t\t%cQue le hace falta al codigo para que funcionar correctamente?: ",168);SC(7);
			respuesta=verificadorCaracter();
			if(respuesta==1){
				SC(2);printf("\t\t\t%cCorrecto!\n",173);SC(7);
				printf("\t\t\tLos corchetes eran los faltantes\n");
		    	printf("\t\t\tPresiona enter para continuar..... ");
		        getchar();
				conteo++;
				break;
			}//FIN DE IF SI RESPUESTA ES IGUAL A 1
			if(respuesta==2){
				SC(4);printf("\t\t\t%cOpcion incorrecta!\n",173);SC(7);
				printf("\t\t\tLa opcion elegida no cumple con la sintaxis de if\n");
				printf("\t\t\tDeseas intentar de nuevo la pregunta(1) o Ver la informacion(2): ");
				 respuestaError=verificadorRango();
				if(respuestaError==1){
					i--;
					break;
				}
				if(respuestaError==2){
					system("cls");
					mostrarTeoria();
					SC(9);printf("\t%cDeseas contestar(1) o Pasar a la siguiente pregunta(2)?: ",168);SC(7);
					 respuestaError2=verificadorRango();
					if(respuestaError2==1){
						i--;
						break;
					}
					if(respuestaError2==2){
						break;
					}
				}
			}//FIN DE IF SI RESPUESTA ES IGUAL 2
			if(respuesta==3){
				SC(4);printf("\t\t\t%cOpcion incorrecta!\n",173);SC(7);
				printf("\t\t\tLa opcion elegida no cumple con la sintaxis de if\n");
				printf("\t\t\tDeseas intentar de nuevo la pregunta(1) o Ver la informacion(2): ");
			    respuestaError=verificadorRango();
				if(respuestaError==1){
					i--;
					break;
				}
				if(respuestaError==2){
					system("cls");
					mostrarTeoria();
					printf("\n\n\t%cDeseas contestar(1) o Pasar a la siguiente pregunta(2)?: ",168);
					respuestaError2=verificadorRango();
					if(respuestaError2==1){
						i--;
						break;
					}
					if(respuestaError2==2){
						break;
					}
				}
			}//FIN DE IF SI RESPUESTA ES IGUAL A 3
			printf("\t\t\tIngresaste mal la opcion intentaras la pregunta de nuevo \n\n");
			i--;
			system("pause");
			break; // FIN CASE 3
			
			case 4: 
			system("cls");
             SC(1);printf("\t\t\t\t\t\t\t%c EJERCICIO 4:\n\n",254);SC(7);
    printf("\t\t\t\tEste ejercicio te dice si el caracter ingresado es la vocal %ca%c \n\n",34,34);
    printf("\t\t\t\tint main() {\n");
    printf("\t\t\t\tchar caracter;\n");
    printf("\t\t\t\tprintf(%cIngrese un caracter: %c);\n",34,34);
    printf("\t\t\t\tscanf(%c %cc%c, &caracter);\n",34,37,34);
    SC(6);printf("\t\t\t\t_____(caracter == 'a' ) {\n");SC(7);
    printf("\t\t\t\tprintf(%cEl caracter es la vocal 'a'.%c);\n",34,34);
    printf("\t\t\t\t}\n");
    SC(6);printf("\t\t\t\tif (caracter ____ 'a' ) {\n");SC(7);
    printf("\t\t\t\tprintf(%cEl caracter no es la vocal 'a'.%c);\n",34,34);
    printf("\t\t\t\t}\n");
    printf("\t\t\t\treturn 0;\n");
printf("\t\t\t\t}\n\n");
    printf("\t\t\t\tElige el inciso correcto\n");
    printf("\t\t\t\t1) {  y  if \n");
    printf("\t\t\t\t2) if  y  != \n"); //RESPUESTA CORRECTA
    printf("\t\t\t\t3) if  y  ; \n");
    SC(6);printf("\t\t\t\t%cQue le hace falta al codigo para que funcionar correctamente?: ",168);SC(7);
			respuesta=verificadorCaracter();
			if(respuesta==1){
				SC(4);printf("\t\t\t%cOpcion incorrecta!\n",173);SC(7);
				printf("\t\t\tEsta respuesta no puede ser ya que no puedes poner if en la condicion de if\n");
				printf("\t\t\tDeseas intentar de nuevo la pregunta(1) o Ver la informacion(2): ");
			    respuestaError=verificadorRango();
				if(respuestaError==1){
					i--;
					break;
				}
				if(respuestaError==2){
					system("cls");
					mostrarTeoria();
					SC(9);printf("\t%cDeseas contestar(1) o Pasar a la siguiente pregunta(2)?: ",168);SC(7);
					respuestaError2=verificadorRango();
					if(respuestaError2==1){
						i--;
						break;
					}
					if(respuestaError2==2){
						break;
					}
				}
			}//FIN DE IF SI RESPUESTA ES IGUAL A 1
			if(respuesta==2){
				SC(2);printf("\t\t\t%cCorrecto!\n",173);SC(7);
				printf("\t\t\tEse es el orden para el  buen funcionamiento del codigo\n");
                printf("\t\t\tPresiona enter para continuar..... ");
		        getchar();
				conteo++;
				break;
			}//FIN DE IF SI RESPUESTA ES IGUAL 2
			if(respuesta==3){
				SC(4);printf("\t\t\t%cOpcion incorrecta!\n",173);SC(7);
				printf("\t\t\tEsta respuesta no puede ser ya que ; no prentende una condicion en if\n");
				printf("\t\t\tDeseas intentar de nuevo la pregunta(1) o Ver la informacion(2)? ");
				 respuestaError=verificadorRango();
				if(respuestaError==1){
					i--;
					break;
				}
				if(respuestaError==2){
					system("cls");
					mostrarTeoria();
					printf("\n\n\t%cDeseas contestar(1) o Pasar a la siguiente pregunta(2)?: ",128);
					 respuestaError2=verificadorRango();
					if(respuestaError2==1){
						i--;
						break;
					}
					if(respuestaError2==2){
						break;
					}
				}
			}//FIN DE IF SI RESPUESTA ES IGUAL A 3
			printf("\t\t\tIngresaste mal la opcion intentaras la pregunta de nuevo \n\n");
			i--;
			system("pause"); 
			break; //FIN CASE 4
			case 5: 
			system("cls");
    SC(1);printf("\t\t\t\t\t\t\t%c EJERCICIO 5:\n\n",254);SC(7);
    printf("\t\t\t\t\tSe muestra el siguiente programa:\n\n");
    printf("\t\t\t\t\tint main() {\n");
    printf("\t\t\t\t\tint a = 10;\n");
    printf("\t\t\t\t\tif ( a < 20) {\n");
    printf("\t\t\t\t\tprintf(%c a es menor que 20 %c);\n",34,34);    
    printf("\t\t\t\t\t}\n\n");
    printf("\t\t\t\t\telse { \n");
    printf("\t\t\t\t\tprintf(%c a es mayor que 20 %c);\n",34,34); 
    printf("\t\t\t\t\treturn 0;\n"); 
    printf("\t\t\t\t\t }\n\n");
    printf("\t\t\t\t\tElige el inciso correcto\n\n");
    printf("\t\t\t\t\t1) No imprime nada \n");
    printf("\t\t\t\t\t2) a es igual a 20 \n"); 
    printf("\t\t\t\t\t3) a es menor que 20 \n\n");//RESPUESTA CORRECTA
    SC(6);printf("\t\t\t\t\t%cCual es la salida del siguiente fragmento de codigo?: ",168);SC(7);
			respuesta=verificadorCaracter();
			if(respuesta==1){
				SC(4);printf("\t\t\t%cOpcion incorrecta!\n",173);SC(7);
				printf("\t\t\tEsta respuesta no puede ser ya que si imprime algo\n");
				printf("\t\t\tDeseas intentar de nuevo la pregunta(1) o Ver la informacion(2)?: ");
			    respuestaError=verificadorRango();
				if(respuestaError==1){
					i--;
					break;
				}
				if(respuestaError==2){
					system("cls");
					mostrarTeoria();
					SC(9);printf("\t%cDeseas contestar(1) o Pasar a la siguiente pregunta(2)?: ",168);SC(7);
					respuestaError2=verificadorRango();
					if(respuestaError2==1){
						i--;
						break;
					}
					if(respuestaError2==2){
						break;
					}
				}
			}//FIN DE IF SI RESPUESTA ES IGUAL A 1
			if(respuesta==2){
				SC(4);printf("\t\t\t%cOpcion incorrecta!\n",173);SC(7);
				printf("\t\t\tEsta respuesta no puede ser no hay un printf de dicho mensaje\n");
				printf("\t\t\tDeseas intentar de nuevo la pregunta(1) o Ver la informacion(2): ");
				 respuestaError=verificadorRango();
				if(respuestaError==1){
					i--;
					break;
				}
				if(respuestaError==2){
					system("cls");
					mostrarTeoria();
					printf("\n\n\t%cDeseas contestar(1) o Pasar a la siguiente pregunta(2)?: ",168);
					 respuestaError2=verificadorRango();
					if(respuestaError2==1){
						i--;
						break;
					}
					if(respuestaError2==2){
						break;
					}
				}
			}//FIN DE IF SI RESPUESTA ES IGUAL 2
			if(respuesta==3){
				SC(2);printf("\t\t\t%cCorrecto!\n",173);SC(7);
				printf("\t\t\tLa opcion elegida es lo que se imprimiria\n");
			    printf("\t\t\tPresiona enter para continuar..... ");
		        getchar();
				conteo++;
				break;
			}//FIN DE IF SI RESPUESTA ES IGUAL A 3
			printf("\t\t\tIngresaste mal la opcion intentaras la pregunta de nuevo \n\n");
			i--;
			system("pause");
			break;// FIN CASE 5
	case 6:
		system("cls");
SC(1);printf("\t\t\t\t\t\t%c EJERCICIO 6:\n\n",254);SC(7);
printf("\t\t\t\tEn lenguaje C de programacion, la declaracion ________\n\t\t\t\tse utiliza para verificar multiples condiciones.\n");
printf("\t\t\t\tSu bloque de codigo se ejecuta si su condicion es verdadera\n\t\t\t\ty todas las condiciones antriores son falsas.\n\n");
SC(6);printf("\n\t\t\tCompleta la informacion para que sea correcta:\n");SC(7);
printf("\t\t\t\t1. if\n");
printf("\t\t\t\t2. else\n");
printf("\t\t\t\t3. else if\n\n");
printf("\t\t\tSeleccione una opcion (1-3): ");
respuesta=verificadorCaracter();
 if(respuesta==1){
 	SC(4);printf("\n\t\t\t%cOpcion incorrecta!\n",173);SC(7);
 	printf("\t\t\tLa declaracion if se utiliza para ejecutar un bloque de codigo si\n\t\tuna condicion especifica(no multiple), es verdadera.\n\n");
 	printf("\t\t\tDeseas intentar de nuevo la pregunta(1) o Ver la informacion(2): ");
	respuestaError=verificadorRango();
	if(respuestaError==1){
		i--;
		break;
	}
	if(respuestaError==2){
	system("cls");
	mostrarTeoria();
	SC(9);printf("\t%cDeseas contestar(1) o Pasar a la siguiente pregunta(2)?: ",168);SC(7);
	respuestaError2=verificadorRango();
	 if(respuestaError2==1){
		i--;
		break;
			}
	if(respuestaError2==2){
		break;
			}
		}
 }
 
 if(respuesta==2){
 	SC(4);printf("\n\t\t\t%cOpcion incorrecta!\n",173);SC(7);
 	printf("\t\t\tLa condicion else se utiliza junto con if para ejecutar un bloque de codigo\n\t\tsi la condicion de if es falsa\n\n");
    printf("\t\t\tDeseas intentar de nuevo la pregunta(1) o Ver la informacion(2): ");
	respuestaError=verificadorRango();
	   if(respuestaError==1){
		i--;
		break;
		}
	  if(respuestaError==2){
	    system("cls");
		mostrarTeoria();
		printf("\n\n\tÂ¿Deseas contestar(1) o Pasar a la siguiente pregunta(2): ");
		respuestaError2=verificadorRango();
	 if(respuestaError2==1){
		i--;
		break;
		}
	 if(respuestaError2==2){
			break;
		}
	}
 }
 
 if(respuesta==3){
 	SC(2);printf("\n\t\t\t%cCorrecto!\n",173);SC(7);
 	printf("\t\t\tLa condicion else if se coloca despues de un if o de otro else if\n");
	printf("\t\t\tPresiona enter para continuar..... ");
	getchar();
 	conteo++;
 	break;
 }	
			printf("\t\t\tIngresaste mal la opcion intentaras la pregunta de nuevo \n\n");
			i--;
			system("pause");
			break;
		
			case 7: 
system("cls");
SC(1);printf("\t\t\t\t\t\t\t%c EJERCICIO 7:\n\n",254);SC(7);
SC(6);printf("\t\t\t%cQue sucede si se omite el bloque else en una estructura de control if-else en C? \n\n",168);SC(7);
printf("\t\t\t1.Si se omite el bloque else, el programa finalizara inmediatamente\n\t\t\tdespues del bloque if sin ejecutar ninguna otra instruccion.\n\n");
printf("\t\t\t2.Si se omite el bloque else, el compilador generara un error de sintaxis\n\t\t\tya que else es obligatorio en una estructura if-else.\n\n");
printf("\t\t\t3.Si se omite el bloque else, el programa no realizara ninguna accion cuando\n\t\t\tla condicion if sea falsa,y continuara con la siguiente instruccion despues del bloque if.\n\n");
printf("\t\t\tSeleccione una opcion (1-3): ");
respuesta=verificadorCaracter();
if(respuesta==1){
 	SC(4);printf("\n\t\t\t%cOpcion incorrecta!\n",173);SC(7);
 	printf("\t\t\tDeseas intentar de nuevo la pregunta(1) o Ver la informacion(2)?: ");
	respuestaError=verificadorRango();
	if(respuestaError==1){
		i--;
		break;
	}
	if(respuestaError==2){
	system("cls");
	mostrarTeoria();
	SC(9);printf("\t%cDeseas contestar(1) o Pasar a la siguiente pregunta(2)?: ",168);SC(7);
	respuestaError2=verificadorRango();
	 if(respuestaError2==1){
		i--;
		break;
			}
	if(respuestaError2==2){
		break;
			}
		}
 }
 if(respuesta==2){
 	SC(4);printf("\n\t\t\t%cOpcion incorrecta!\n",173);SC(7);
 	printf("\t\t\tDeseas intentar de nuevo la pregunta(1) o Ver la informacion(2)?: ");
	respuestaError=verificadorRango();
	if(respuestaError==1){
		i--;
		break;
	}
	if(respuestaError==2){
	system("cls");
	mostrarTeoria();
	printf("\n\n\tÂ¿Deseas contestar(1) o Pasar a la siguiente pregunta(2)?: ");
	respuestaError2=verificadorRango();
	 if(respuestaError2==1){
		i--;
		break;
			}
	if(respuestaError2==2){
		break;
			}
		}
 }
 if(respuesta==3){
 	SC(2);printf("\n\t\t\t%cCorrecto!\n",173);SC(7);
 	printf("\t\t\tPresiona enter para continuar..... ");
	getchar();
 	conteo++;
 	break;
 }

			printf("\t\t\tIngresaste mal la opcion intentaras la pregunta de nuevo \n\n");
			i--;
			system("pause");
			break;
			case 8: 
system("cls");
SC(1);printf("\t\t\t\t\t\t\t%c EJERCICIO 8:\n\n",254);SC(7);
printf("\t\t\t\tEl siguiente programa simula una clave de acceso.\n");
printf("\t\t\t\tCompleta la condicion dentro de if para que el Acceso sea permitido\n\n");
printf("\t\t\t\t-----------------------------------------------------------------------\n");
printf("\t\t\t\t#include<stdio.h>\n");
printf("\t\t\t\tint main()%c\n",123);
printf("\t\t\t\tint usuario, clave=16783;\n");
printf("\t\t\t\tprintf(%cIntroduce tu clave :%c);\n",34,34);
printf("\t\t\t\t\tscanf(%c%cd%c,%cusuario);\n",34,37,34,38);
printf("\t\t\t\t\tif(_________)%c//completa esta condicion\n",123);
printf("\t\t\t\t\tprintf(%cAcceso Permitido%c);\n\t\t\t\t\t%c",34,34,125);
printf("\t\t\t\telse %c\n",123);
printf("\t\t\t\t\tprintf(%cAcceso Denegado%c);\n\t\t\t\t\t%c\n",34,34,125);
printf("\t\t\t\t----------------------------------------------------------------------\n\n");
SC(6);printf("\t\t\t\t%cCual es la respuesta correcta para que se cumpla la condicion?\n",168);SC(7);
printf("\t\t\t\t1. (usuario==clave)\n");
printf("\t\t\t\t2. (usuario!=clave)\n");
printf("\t\t\t\t3. (usuario>=clave)\n");
printf("\t\t\t\tSeleccione una opcion (1-3): ");
respuesta=verificadorCaracter();

 if(respuesta==1){
 	SC(2);printf("\n\t\t\t%cCorrecto!\n",173);SC(7);
 	printf("\t\t\tLa clave del usuario tiene que ser igual a la clave declarada\n");
    printf("\t\t\tPresiona enter para continuar..... ");
	getchar();
 	conteo++;
 	break;
 }
 if(respuesta==2){
 	SC(4);printf("\n\t\t\t%cOpcion incorrecta!\n",173);SC(7);
 	printf("\t\t\tLa clave del usuario no puede ser diferente a la clave declarada,\n\tde lo contrario no permite el acceso\n");
 	printf("\t\t\tDeseas intentar de nuevo la pregunta(1) o Ver la informacion(2)?: ");
	respuestaError=verificadorRango();
	if(respuestaError==1){
		i--;
		break;
	}
	if(respuestaError==2){
	system("cls");
	mostrarTeoria();
	SC(9);printf("\t%cDeseas contestar(1) o Pasar a la siguiente pregunta(2)?: ",168);SC(7);
	respuestaError2=verificadorRango();
	 if(respuestaError2==1){
		i--;
		break;
			}
	if(respuestaError2==2){
		break;
			}
		}
 }
 if(respuesta==3){
 	SC(4);printf("\n\t\t\t%cOpcion incorrecta!\n",173);SC(7);
 	printf("\t\t\tLa clave del usuario no puede ser mayor o menor a la clave declarada,\n\tde lo contrario no permite el acceso\n");
 	printf("\t\t\tDeseas intentar de nuevo la pregunta(1) o Ver la informacion(2)?: ");
	respuestaError=verificadorRango();
	if(respuestaError==1){
		i--;
		break;
	}
	if(respuestaError==2){
	system("cls");
	mostrarTeoria();
	printf("\n\n\t%Deseas contestar(1) o Pasar a la siguiente pregunta(2)?: ",168);
	respuestaError2=verificadorRango();
	 if(respuestaError2==1){
		i--;
		break;
			}
	if(respuestaError2==2){
		break;
			}
		}
 }			
			printf("\t\t\tIngresaste mal la opcion intentaras la pregunta de nuevo \n\n");
			i--;
			system("pause");
			break;			
			
			case 9: 
	system("cls");
SC(1);printf("\t\t\t\t\t\t\t%c EJERCICIO 9:\n\n",254);SC(7);
printf("\t\t\t\tEl siguiente programa te dice el tipo de clima segun la temperatura\n");
printf("\t\t\t\t-----------------------------------------------------------------------\n");
printf("\t\t\t\t#include<stdio.h>\n");
printf("\t\t\t\tint main()%c\n",123);
printf("\t\t\t\t\tfloat temperatura;\n");
printf("\t\t\t\t\tprintf(%cIntroduce la temperatura en grados Celcius :%c)%c\n",34,34,59);
printf("\t\t\t\t\tscanf(%c%cf%c,%ctemperatura);\n",34,37,34,38);
printf("\t\t\t\t\telse if(temperatura>=24)%c\n",123);
printf("\t\t\t\t\tprintf(%cClima tipo C, CALIDO%c);\n\t\t\t\t\t\t%c\n",34,34,125);
printf("\t\t\t\t\telse if(24>temperura>=17.5)%c\n",123);
printf("\t\t\t\t\tprintf(%cClima tipo T, TEMPLADO%c);\n\t\t\t\t\t\t%c\n",34,34,125);
printf("\t\t\t\t\telse if(17.5>temperatura>=12)%c\n",123);
printf("\t\t\t\t\tprintf(%cClima tipo F, FRIO%c);\n\t\t\t\t\t\t%c\n",34,34,125);
printf("\t\t\t\t\telse %c\n",123);
printf("\t\t\t\t\tprintf(%cClima EB, POLAR%c);\n\t\t\t\t\t\t%c\n\t\t\t\t\t%c\n",34,34,125,125);
SC(6);printf("\n\t\t\t\t%cQue mensaje mostrara el programa si introduces la temperatura de 18 grados?\n",168);SC(7);
printf("\t\t\t\t1.Clima tipo C, CALIDO \n");
printf("\t\t\t\t2.Clima tipo T, TEMPLADO\n");
printf("\t\t\t\t3.Clima tipo F, FRIO\n");
printf("\t\t\t\t4.Clima EB, POLAR\n\n");
printf("\t\t\t\nSeleccione una opcion (1-4): ");
respuesta=verificadorCaracter();

if(respuesta==1){
 	SC(4);printf("\n\t\t\t%cOpcion incorrecta!\n",173);SC(7);
 	printf("\t\t\tLa temperatura no es mayor ni igual a 24 grados, es menor\n"),
 	printf("\t\t\tDeseas intentar de nuevo la pregunta(1) o Ver la informacion(2): ");
	respuestaError=verificadorRango();
	if(respuestaError==1){
		i--;
		break;
	}
	if(respuestaError==2){
	system("cls");
	mostrarTeoria();
SC(9);printf("\t%cDeseas contestar(1) o Pasar a la siguiente pregunta(2)?: ",168);SC(7);
	respuestaError2=verificadorRango();
	 if(respuestaError2==1){
		i--;
		break;
			}
	if(respuestaError2==2){
		break;
			}
		}
 }
 if(respuesta==2){
 	SC(2);printf("\n\t\t\t%cCorrecto!\n",173);SC(7);
 	printf("\t\t\tLa temperatura esta entre el parametro de 17. 5 a 24 grados\n");
    printf("\t\t\tPresiona enter para continuar..... ");
    getchar();	
 	conteo++;
 	break;
 }
 if(respuesta==3){
 	SC(4);printf("\n\t\t\t%cOpcion incorrecta!\n",173);SC(7);
 	printf("\t\t\tLa temperaura es mayor, no entra en el parametro de 12 a 17.5 grados \n");
 	printf("\t\t\tDeseas intentar de nuevo la pregunta(1) o Ver la informacion(2)?: ");
	respuestaError=verificadorRango();
	if(respuestaError==1){
		i--;
		break;
	}
	if(respuestaError==2){
	system("cls");
	mostrarTeoria();
	printf("\t\n\n%cDeseas contestar(1) o Pasar a la siguiente pregunta(2)?: ",168);
	respuestaError2=verificadorRango();
	 if(respuestaError2==1){
		i--;
		break;
			}
	if(respuestaError2==2){
		break;
			}
		}
 }
 if(respuesta==4){
 	SC(4);printf("\n\t\t\t%cOpcion incorrecta!\n",173);SC(7);
 	printf("\t\t\tLa temeperatura es mayor, no entra en el parametro menor a 12 grados");
 	printf("\t\t\tDeseas intentar de nuevo la pregunta(1) o Ver la informacion(2)?: ");
	respuestaError=verificadorRango();
	if(respuestaError==1){
		i--;
		break;
	}
	if(respuestaError==2){
	system("cls");
	mostrarTeoria();
	printf("\t\n\n%cDeseas contestar(1) o Pasar a la siguiente pregunta(2)?: ",173);
	respuestaError2=verificadorRango();
	 if(respuestaError2==1){
		i--;
		break;
			}
	if(respuestaError2==2){
		break;
			}
		}
 }
 
		printf("\t\t\tIngresaste mal la opcion intentaras la pregunta de nuevo \n\n");
			i--;
			system("pause");
			break;
			case 10: 
			system("cls");
SC(1);printf("\t\t\t\t\t\t\t%c EJERCICIO 10:\n",254);SC(7);
printf("\t\t\t\tSe muestran dos programas que determinan si la calificacion es aprobatoria o no\n\n");
printf("\t\t\t\t-----------------------------------------------------\n");
SC(5);printf("\t\t\t\t\tPROGRAMA 1\n");SC(7);
printf("\t\t\t\t#include<stdio.h>\n");
printf("\t\t\t\tint main()%c\n",123);
printf("\t\t\t\t\tint calificacion;\n");
printf("\t\t\t\t\tprintf(%cIntroduce la calificacion del examen (0-10):%c)%c\n",34,34,59);
printf("\t\t\t\t\tscanf(%c%cd%c,%ccalificacion);\n",34,37,34,38);
printf("\t\t\t\t\tif(calificacion>=6)%c\n",123);
printf("\t\t\t\t\t\tprintf(%cAPROBADO%c);\n\t\t\t\t\t\t%c\n",34,34,125);
printf("\t\t\t\t\telse \n");
printf("\t\t\t\t\t\tprintf(%cREPROBADO%c);\n",34,34);
printf("\t\t\t\t\t\tprintf(%cMEJORA TU RENDIMIENTO%c);\n",34,34);
printf("\t\t\t\t\treturn 0;\n\t\t\t\t\t%c\n",125);
printf("\t\t\t\t-----------------------------------------------------\n");
SC(5);printf("\t\t\t\t\tPROGRAMA 2\n");SC(7);
printf("\t\t\t\t#include<stdio.h>\n");
printf("\t\t\t\tint main()%c\n",123);
printf("\t\t\t\t\tint calificacion;\n");
printf("\t\t\t\t\tprintf(%cIntroduce la calificacion del examen (0-10):%c)%c\n",34,34,59);
printf("\t\t\t\t\t\tscanf(%c%cd%c,%ccalificacion);\n",34,37,34,38);
printf("\t\t\t\t\tif(calificacion>=6)%c\n",123);
printf("\t\t\t\t\t\tprintf(%cAPROBADO%c);\n\t\t\t\t\t\t%c\n",34,34,125);
printf("\t\t\t\t\telse %c\n",123);
printf("\t\t\t\t\tprintf(%cREPROBADO%c);\n",34,34);
printf("\t\t\t\t\tprintf(%cMEJORA TU RENDIMIENTO%c);\n\t\t\t\t\t\t%c\n",34,34,125);
printf("\t\t\t\t\treturn 0;\n\t\t\t\t\t%c\n",125);
SC(6);printf("\n\t\t\t\t%cQue programa esta correcto?\n",168);SC(7);
printf("\t\t\t\t1.PROGRAMA 1 \n");
printf("\t\t\t\t2.PROGRAMA 2\n");
printf("\t\t\t\tSeleccione una opcion (1-2): ");
respuesta=verificadorCaracter();

if(respuesta==1){
 	SC(4);printf("\n\n\t\t\t%cOpcion incorrecta!\n",173);SC(7);
 	printf("\t\t\tEn este codigo, la falta de llaves {} alrededor del bloque else causa que\n");
 	printf("\t\t\tla linea \"Mejora tu rendimiento\" siempre se ejecutara, sin importar si la calificacion es aprobatoria o no\n");
 	printf("\t\t\tDeseas intentar de nuevo la pregunta(1) o Ver la informacion(2)?: ");
	respuestaError=verificadorRango();
	if(respuestaError==1){
		i--;
		break;
	}
	if(respuestaError==2){
	system("cls");
	mostrarTeoria();
	SC(9);printf("\t%cDeseas contestar(1) o Pasar a la siguiente pregunta(2)?: ",168);SC(7);
	respuestaError2=verificadorRango();
	 if(respuestaError2==1){
		i--;
		break;
			}
	if(respuestaError2==2){
		break;
			}
		}
 }
 if(respuesta==2){
 	SC(2);printf("\n\t\t\t%cCorrecto!\n",173);SC(7);
 	printf("\t\t\tLas llaves {} aseguran que tanto \"Reprobado\" como \"Mejora tu rendimiento\"\n\t\t\tse ejecuten solo si la calificacion es menor a 6\n");
	printf("\t\t\tPresiona enter para continuar..... ");
	getchar();
 	conteo++;
 	break;
 }
 
			system("cls");
			printf("\t\tLa opcion ingresada no esta dentro del menu\n,\tIntenta de nuevo\n");
			i--;
				break; 
			default: printf(".....\n");
			
		}
	}
	system("cls");
	SC(10);printf("\n\t\t\t\t\t%cFELICIDADES!,terminaste el cuestionario.\n",173);SC(7);
	SC(3);printf("\t\t\t\t\t\tPUNTUACION FINAL\n\n");SC(7);
    SC(4);printf("\t\t\t\t\tRespuestas correctas: %d de 10 \n",conteo);SC(7);
	printf("\n\t\t\t\t\tPor favor, ingresa una opcion\n\n");
	printf("\t\t\t\t\tRegresar al menu (Presiona cualquier numero)\n");
	printf("\t\t\t\t\tSalir del programa if else (2)\n");
	op2=verificadorCaracter();
	return op2;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void mostrarTeoria(void){
int i=1, opc;
	do{
		switch(i){
		case 1:
				system("cls");
				SC(4);printf("\t\t\t\t\t\tTEORIA DE USO DE if-else EN C:\n");SC(7);
                printf("\n");
				printf("\t\tEl uso de if-else en C permite la ejecuci%cn condicional de bloques de c%cdigo, en otras palabras\n",162,162);
				printf("\t\t-----------------------------------------------------------------------------------------------------\n");
				printf("\t\tune linea de c%cdigo escrita en una sentencia y se termina con un punto y coma (;).\n",162);
				printf("\t\t-----------------------------------------------------------------------------------------------------\n");
    			SC(9);printf("\t\tSINTAXIS GENERAL if else :\n");SC(11);
    			printf("\n");
    			printf("\t\tif (condici%cn l%cgica) \n",162,162);
    			printf("\t\t{C%cdigo si la sentencia es verdadera}\n",162);
    			printf("\n");
				printf("\t\telse \n");
    			printf("\t\t{C%cdigo si la sentencia es falsa}\n",162);
    			printf("\n");
    			printf("\t\tPresiona (2) para ir a la siguiente pagina: ");
				opc = verificadorCaracter();
				if(opc==2){
					i++;
				}
				break;
			case 2:
				system("cls");
    		SC(4);printf("\t\t\t\t\t%cPara qu%c sirve el if en programaci%cn?\n",168,162,130);SC(7);
    			printf("\n");
    			printf("\t\tEl (if) en programaci%cn sirve para crear logica en un programa.\n",162);
    			printf("\t\t-----------------------------------------------------------------------------------------------------\n");
				printf("\t\tPermite que el software tome decisiones dinamicas en tiempo de ejecuci%cn.\n",162);
				printf("\t\t-----------------------------------------------------------------------------------------------------\n");
    			printf("\t\t%cEl (if) es la primera parte de la estructura (if-else): Representa la condici%cn que el programa eval%ca:\n",254,162,163);
    			printf("\t\t-----------------------------------------------------------------------------------------------------\n");
    			printf("\t\tSi la condici%cn se cumple (es verdadera), el programa ejecutara el bloque de c%cdigo dentro del (if).\n",162,162);
    			printf("\t\t-----------------------------------------------------------------------------------------------------\n");
    			printf("\t\t%cSi la condici%cn no se cumple (es falsa), el programa saltara ese bloque y continuara con el siguiente.\n",223,162);
    			printf("\t\t-----------------------------------------------------------------------------------------------------\n");
    			printf("\n");
    	        SC(9);printf("\t\t\t\t\t\tSU SINTAXIS SERIA :\n");SC(11);
    	        printf("\n");
    	        printf("\t\tif ( condici%cn l%cgica m%cltiple )\n ",162,162,163);
    	        printf("\t\t{ Sentencia 1 si es verdader\n");
		        printf("\t\tSentencia 2 si es verdadera\n ");
			    printf("\t\t......}\n");
    			SC(7);printf("\t\tPresione (1) para ir a la pagina anterior presione (2) para seguir");
				opc = verificadorCaracter();
				if(opc==2){
					i++;
				}
				if(opc==1){
					i--;
				}
				break;
			case 3:
				system("cls");
				SC(9);printf("\t\t\t\t\tEjemplo 1 del uso de if. :\n\n");SC(11);
    			printf("\t\t-----------------------------------------------------------------\n");
    			printf("\t\tinclude<stdio.h>\n");
   				printf("\t\tint main(){\n");
   			    printf("\t\tint num1=4;\n");
    			printf("\t\tint num2=6;\n");
    			printf("\t\tif(num1<num2){\n");
    			printf("\t\tprintf");
    			printf("(\"numero1 es menor que numero2\");\n");
    			printf("\t\t}\n");
    			printf("\t\t\treturn 0;\n");
    			printf("\t\t}\n");
    			printf("\t\t-----------------------------------------------------------------\n");
				SC(7);printf("\t\tPresione (1) para ir a la pagina anterior, presione (2) para seguir: ");
				opc = verificadorCaracter();
				if(opc==2){
					i++;
				}
				if(opc==1){
					i--;
				}
				break;
			case 4:
				system("cls");
				SC(1);printf("\t\t\t\t\tEjemplo 2 del uso de if :\n\n");SC(11);
    			printf("\t\t-----------------------------------------------------------------\n");
   				printf("\t\tinclude<stdio.h>\n");
    			printf("\t\tint main(){\n");
    			printf("\t\tint edad; \n");
    			printf("\t\tprintf");
    			printf("(\"Ingresa tu edad para saber si eres mayor de edad\");\n");
    			printf("\t\tscanf(%c%cd%c,%ca)%c\n",34,37,34,38,59);
    			printf("\t\tf(edad>=18){  \n");
    			printf("\t\tprintf");
    			printf("(\"Eres mayor de edad\"); \n");
    			printf("\t\t}\n");
    			printf("\t\tif(edad<18){ \n");
    			printf("\t\tprintf");
    			printf("(\"eres menor de edad\"); \n");
    			printf("\t\t}\n");
    			printf("\t\tReturn 0; \n");
    			printf("\t\t}\n");
    			printf("\t\t-----------------------------------------------------------------\n");
    			printf("\n\n");
				SC(7);printf("\t\tPresione (1) para ir a la pagina anterior presione (2) para seguir: ");
				opc = verificadorCaracter();
				if(opc==2){
					i++;
				}
				if(opc==1){
					i--;
				}
				break;
			case 5: 
			system("cls");
			SC(4);printf("\t\t\t\t\tPara qu%c sirve el else en programaci%cn?\n\n",130,162);SC(7);
			printf("\n");
    		printf("\t\tLa segunda parte de (if-else) es (else).\n");
    		printf("\t\t-----------------------------------------------------------------------------------------------------\n");
    		printf("\t\tEsta parte es opcional y se utiliza para especificar que hacer si la condici%cn del (if) no se \n",162);
    		printf("\t\t-----------------------------------------------------------------------------------------------------\n");
    		printf("\t\tEn otras palabras, cuando la condici%cn del (if) es falsa, el programa ejecutara \n");
    		printf("\t\t------------------------------------------------------------------------------------------------------\n");
			printf("\t\tel bloque de codigo dentro del (else)Si la condici%cn del (if) es verdadera,\n",162);
    		printf("\t\t------------------------------------------------------------------------------------------------------\n");
    		printf("\t\tel programa simplemente ignorara el (else) y continuara con la ejecuci%cn.\n",162,162);
    		printf("\t\t-------------------------------------------------------------------------------------------------------\n");
    		printf("\n\n");
			printf("\t\tPresione (1) para ir a la pagina anterior presione (2) para seguir: ");
		    opc = verificadorCaracter();
			if(opc==2){
					i++;
				}
				if(opc==1){
					i--;
				}
			    break;
			case 6:
				system("cls");
				SC(1);printf("\t\t\t\t\tEjemplo del uso de if-else ;\n");SC(11);
    			printf("\t\t-----------------------------------------------------------------\n");
    			printf("\t\tinclude<stdio.h>\n");
    			printf("\t\tint main(){\n");
    			printf("\t\tint r<11;\n");
    			printf("\t\tprintf");
    			printf("(\"Introdusca un numero :\"); \n");
    			printf("\t\tscanf(%c%cd%c,%ca)%c\n",34,37,34,38,59);
    			printf("\t\tif(r<11){\n");
    			printf("\t\tprintf");
    			printf("(\"El numero ingresa cumple la condici%cn\");\n",162);
    			printf("\t\telse{\n");
    			printf("\t\tprintf");
    			printf("(\"El numero ingresado no cumple con la condici%cn\");\n",162);
    			printf("\t\treturn 0;\n\t\t\n");
    			printf("\t\t-----------------------------------------------------------------\n");
    			printf("\n\n");
				SC(7);printf("\t\tPresione (1) para ir a la pagina anterior presione (2) para seguir: ");
				opc = verificadorCaracter();
				if(opc==2){
					i++;
				}
				if(opc==1){
					i--;
				}
				break;
			case 7:
				system("cls");
				SC(4);printf("\t\t\t\t\tCambiando de operador ternario a sentencia condicional. \n");SC(7);
				printf("\n");
				printf("\t\t// X1 = (D>0)%cCalc_X1(a,b,c) : -999;\n",63);
				printf("\t\t-----------------------------------------------------------------------------------------------------\n");
				printf("\t\t// se asigna a X1 si la variable D es mayor que cero el retorno de la,\n");
				printf("\t\t-----------------------------------------------------------------------------------------------------\n");
                printf("\t\tfunci%cn Calc_X1 que tiene par%cmetros, de lo contrario se asigna -999\n",162,160);
                printf("\t\t-----------------------------------------------------------------------------------------------------\n");
                printf("\t\tif( D>0 ) { X1 = Calc_X1(a,b,c); }\n");
                printf("\t\t-----------------------------------------------------------------------------------------------------\n");
                printf("\t\telse { X1 = -999; }\n");
                printf("\t\t-----------------------------------------------------------------------------------------------------\n");
                printf("\t\tsi D es mayor a 0 se asigna el retorno de la funci%cn Calc_X1 que tiene parametros,\n",162);
                printf("\t\t-----------------------------------------------------------------------------------------------------\n");
				printf("\t\tde lo contrario se asigna a X1 la cantidad de -999\n");
				printf("\t\t-----------------------------------------------------------------------------------------------------\n");
				printf("\t\tSI EL DESCRIMINANTE ES MAYOR A CERO, PUEDE EJECUTAR UNA O VARIAS FUNCIONES O IMPRIMIR,\n");
				printf("\t\t-----------------------------------------------------------------------------------------------------\n");
				printf("\t\tEN FORMA DIRECTA LOS RESULTADOS\n");
				printf("\t\t-----------------------------------------------------------------------------------------------------\n");
				SC(1);printf("\t\t\t\t\t\t\tEJEMPLO SENCILLO\n");SC(11);
				printf("\t\t-----------------------------------------------------------------------------------------------------\n");
				printf("\t\tif(D>0){\n");
 				printf("\t\tX2 = Calc_X2(a,b,c);\n");
                printf("\t\tprintf(\"X2 = %c%cd%c,X2);",34,37,34);
                printf("}\n");
                printf("\t\telse { printf(\"NO ES RAIZ REAL\");}\n");
                printf("\n");
                printf("\t\tOtra manera seria con varias funciones pero un solo resultado\n ");
                printf("\n");
                printf("\t\tif(D>0){\n");
				printf("\t\tprintf(\"X1 = %c%cf%c,Calc_X1(a,b,c));\n",34,37,34);
                printf("\t\tprintf(\"X2 = %c%cf%c,Calc_X2(a,b,c));\n",34,37,34);
                printf("\t\t}\n");
                printf("\t\telse { printf(\"NO ES RAIZ REAL\"); }\n");
                printf("\t\t-----------------------------------------------------------------------------------------------------\n");
                printf("\n");
				SC(7);printf("\t\tPresione (1) para ir a la pagina anterior presione (2) para seguir: ");
				opc = verificadorCaracter();
				if(opc==2){
					i++;
				}
				if(opc==1){
					i--;
				}
				break;
			case 8:
			system("cls");
			SC(4);printf("\t\t\t\t\t\t\tQu%c es if-else anidado \n",130);SC(7);
			printf("\n");
    		printf("\t\tExiste el caso de estructuras if, if-else anidados, que no es m%cs que una estructura\n");
			printf("\t\tif o if-else dentro de otra.\n",160);
    		printf("\t\t-----------------------------------------------------------------------------------------------------\n");
    		SC(9);printf("\t\t\t\t\tPor ejemplo se necesita saber cu%cl es el mayor de estos tres A,B,C\n",160);SC(11);
    		printf("\t\t-----------------------------------------------------------------------------------------------------\n");
    		printf("\t\t1.-#include<stdio.h>\n");
    		printf("\t\t2.-int main(){\n");
    		printf("\t\t3.-int A, B, C;\n");
    		printf("\t\t4.-printf\"Ingrese 3 n%cmeros\");\n",163);
    		printf("\t\tscanf(%c%cd%c,&A,&B,&C); //Lectura de datos\n",34,37,34,38);
    		printf("\t\t6.-if( A>B )\n");
    		printf("\t\t7.-{if(A>C )\n");
    		printf("\t\t8.-printf(\"A es el n%cmero mayor\");\n",163);
    		printf("\t\t9.-else\n");
    		printf("\t\t10.-printf(\"C es el n%cmero mayor\");\n",163);
    		printf("\t\t11.-}\n");
    		printf("\t\t12.-else\n");
    		printf("\t\t13.-{if( B>C )\n");
    		printf("\t\t14.-printf(\"B es el n%cmero mayor\");\n",163);
    		printf("\t\t15.-else\n");
    		printf("\t\t16.-printf(\"C es el n%cmero mayor\");\n",163);
    		printf("\t\t17.-}\n");
    		printf("\t\t18.-}\n");
    		printf("\t\t-----------------------------------------------------------------------------------------------------\n");
    		printf("\n");
    		SC(7);printf("\t\tPresione (1) para ir a la pagina anterior presione (2) para seguir: ");
			opc = verificadorCaracter();
			if(opc==2){
					i++;
				}
				if(opc==1){
					i--;
				}
			    break;
			case 9:
			system("cls");
			SC(9);printf("\t\t\t\t\tExplicacion del c%cdigo anterior. \n");SC(7);
			printf("\n");
    		printf("\t\tSupotiendo que los valores ingresados fueran: A=2, B=1, C=5 el programa haria lo siguiente\n");
    		printf("\t\t-----------------------------------------------------------------------------------------------------\n");
    		printf("\t\tEl programa se ejecuta secuencialmente hasta la l%cnea 6 donde encuentra una expresi%cn.\n",161,162);
    		printf("\t\t-----------------------------------------------------------------------------------------------------\n");
    		printf("\t\tCuando se eval%ce la expresi%cn (A>B) l%cnea 6, el resultado es m verdadero (2>1),\n",163,162,161);
    		printf("\t\t-----------------------------------------------------------------------------------------------------\n");
    		printf("\t\tpor lo tanto el programa ejecuta la l%cnea 7, en dicha linea encuentra otra expresi%cn (A>C)\n",161,162);
    		printf("\t\t-----------------------------------------------------------------------------------------------------\n");
    		printf("\t\ty el resultado de evaluar dicha expresi%cn es falso (2>5) por lo que el programa\n",162);
    		printf("\t\t-----------------------------------------------------------------------------------------------------\n");
    		printf("\t\tsalta hasta la l%cnea 10 y muestra \"C es el n%cmero mayor\".\n",161,163);
    		printf("\t\t-----------------------------------------------------------------------------------------------------\n");
    		printf("\t\tLuego va a la l%cnea 11 y verifica el cierre de llaves y finalmente salta\n",161);
    		printf("\t\t-----------------------------------------------------------------------------------------------------\n");
    		printf("\t\thasta la l%cnea 18 siendo la %cltima l%cnea de ejecuci%cn.\n",161,163,161,162);
    		printf("\t\t-----------------------------------------------------------------------------------------------------\n");
    		printf("\n");
			printf("\t\tPresione (1) para ir a la pagina anterior presione (2) para seguir: ");
			opc = verificadorCaracter();
			if(opc==2){
					i++;
				}
				if(opc==1){
					i--;
				}
			    break;
			case 10: 
			system("cls");
			SC(4);printf("\t\t\t\t\t\t\tQu%c es el else-if \n",130);SC(7);
			printf("\t\tEs una estructura que extiende una sentencia en if para asi ejecutar una sentencia diferente en caso, \n");
			printf("\t\t-----------------------------------------------------------------------------------------------------\n");
			printf("\t\tde que la expresi%cn if original su expresion sea falsa diferencia de else,\n",162);
			printf("\t\t-----------------------------------------------------------------------------------------------------\n");
			printf("\t\tesa expresi%cn alternativa solo se ejecutar%c si la expresi%cn condicional del \n",162,160 ,162,163);
			printf("\t\t-----------------------------------------------------------------------------------------------------\n");
			printf("\t\telseif se eval%ca como verdadero. Tambien puede aver elseif en\n");
			printf("\t\t-----------------------------------------------------------------------------------------------------\n");
			printf("\t\tuna misma sentencia de if La sentencia elseif es ejecutada solamente si la expresion \n ");
			printf("\t\t-----------------------------------------------------------------------------------------------------\n");
			printf("\t\tif precedente y cualquiera de las expresiones elseif precedentes son evaluadas como falso,\n");
			printf("\t\t-----------------------------------------------------------------------------------------------------\n");
			printf("\t\ten pocas plabras se ejecuta cuando if y else no se cumplen.\n");
			printf("\t\t-----------------------------------------------------------------------------------------------------\n");
			SC(9);printf("\t\t\t\t\t\t\tEstructura :\n");SC(11);
			printf("\t\t-----------------------------------------------------------------------------------------------------\n");
			printf("\t\tif(a<b){ \n");
			printf("\t\tprintf");
			printf("(\"a es menor que b\");\n");
			printf("\t\t}\n");
			printf("\t\telseif(a==b){\n");
			printf("\t\tprintf");
			printf("(\"a es igual a b\");\n");
			printf("\t\t}\n");
			printf("\t\telse{\n");
			printf("\t\tprintf");
			printf("(\t\ta es mayor que b y es diferente); } \n");
			printf("\t\t-----------------------------------------------------------------------------------------------------\n");
			printf("\n\n");
			SC(7);printf("\t\tPresione (1) para ir a la pagina anterior presione (2) para continuar : ");
			opc = verificadorCaracter();
			if(opc==2){
					i++;
				}
				if(opc==1){
					i--;
				}
			    break;
			default: printf("Opcion Incorrecta prueba de nuevo");
			i--;
		}
	}while(i!=10);
	printf("\n\n");
	system("cls");
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int verificadorCaracter(void){ // verificador que si ingresa un caracter diferente a un numero le pide volverlo a leer 
int i, c1;
char c;
	do{
    scanf("%d",&c1);
    c = getchar(); //Le asigno el valor leido a c con la funcion getchar
    if(isalpha(c)) {
        printf("Caracter incorrecto ingresa otro..\n");
        i=0;
    } else {
        i=1;
    }
	}while(i==0); //Cuando el usuario agregue un numero si me retornara
return c1;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void SC(int ForgC){
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
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int verificadorRango(void){ //verificadorRango();
	int numero;
	char c;
	do
	{
		if(scanf("%d", &numero) == 1)
		{
			c = getchar();
			if((numero<1) || (numero>2))
			{
				printf("\t\t\tEl numero no corresponde con los incisos ingresa otro: ");
			}
		}
			else
			{
				while((c=getchar ()) != '\n');
				printf("\t\t\tHas ingresado un caacter no valido, por favor intenta de nuevo: ");
			}
	} while ((numero<1) || (numero>2));
return numero;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////