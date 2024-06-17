/* CODIGO VERSION ACOMODADA CON EL PROBADOR DE CARACTER CASI FINAL IF-ELSE */
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include <ctype.h>
int menu_ifelse( void ); //CONTIENE AL MENU PRINCIPAL IF ELSE
void problemario(void); // CONTIENE EL DESARROLLO DEL MENU IF ELSE EJECUTANDO LAS DEMASS FUNCIONES
int cuestionario(void); // CONTIENE LAS PREGUNTAS QUE HAREMOS
void mostrarTeoria(void); //Contiene a la teoria 
int verificadorCaracter(void);

//////////////////////////////////DESARROLLO DE FUNCIONES: MENU, INFO, CUESTIONARIO, VERIFICADOR////////////////////////////////////////
int menu_ifelse(void){
	int op;
	printf("\nMENU DE IF Y ELSE \n");
	printf("1.- Introduccion a como usar if y else...\n");
	printf("2.- Problemario: \n");
	printf("3.- Terminar programa \n");
	printf("\nIngresa la opcion deseada no olvides que antes \nde ir al cuestionario debes ver la informacion !\n");
	op = verificadorCaracter();
	return op;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void problemario(void){
	int op,op2,BANDERA=0; // op es la opcion del men, op2 es la opcion del cuestinario uso a BANDERA PARA SALIR DEL CICLO DE SER NECESARIO (1) LO REPITE (2) SACA
	do{
    op = menu_ifelse(); // llamado al menu if else
    system("cls");
    
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
			printf("Elegiste mal una opcion !... ");
			BANDERA=1;
			break;
         	} //FIN DE SWITCH 
    }while((BANDERA==1) ||(BANDERA==3) );
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int cuestionario(void){
	int i, respuesta, respuestaError, respuestaError2, conteo=0, op2;
	for(i=1; i<=11; i++){ //Uso un ciclo for para repetir que el case que serian los preguntas cambien con forme i++
	switch(i){
		 case 1:
		 	system("cls");
         printf("\tEjercicio 1:\n");
         printf("\tEste ejercicio te dice si el numero ingresado es positivo o negativo \n\n");
         printf("\tint main() { \n");
		 printf("\tint numero;\n");
		 printf("\tprintf(%cIngrese un numero:%c);\n",34,34);   
		 printf("\tscanf(%c%cd%c, &numero);\n",34,37,34); 
		 printf("\tif (numero >= 0) {\n\n");
		 printf("\tprintf(%cEl numero es positivo o cero.%c);\n",34,34);
		 printf("\t}\n\n");   
   		 printf("\tif (numero ___ 0) {\n");
		 printf("\tprintf(%cEl numero es negativo.%c);\n",34,34);
		 printf("\t}\n");
         printf("\treturn 0; }\n\n"); 
         printf("Elige el inciso correcto\n");
         printf("Que operador hace falta en el parentesis de if ?\n");
         printf("1) > \n");
         printf("2) < \n"); //RESPUESTA CORRECTA
         printf("3) = \n");
			respuesta=verificadorCaracter();
			if(respuesta==1){
				printf("Opcion incorrecta, Esta respuesta no puede ser ya que el operador elegido no cumpliria la condicion\n");
				printf("Deseas intentar de nuevo la pregunta(1) o Ver la informacion(2)");
			    respuestaError=verificadorCaracter();
				if(respuestaError==1){
					i--;
					break;
				}
				if(respuestaError==2){
					system("cls");
					mostrarTeoria();
					printf("¿Deseas contestar(1) o Pasar a la siguiente pregunta(2)\n");
					respuestaError2=verificadorCaracter();
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
				printf("Correcto el operador debe ser < para que se cumpla\n");
				conteo++;
				break;
			}//FIN DE IF SI RESPUESTA ES IGUAL 2
			if(respuesta==3){
				printf("Opcion incorrecta, Esta respuesta no puede ser ya que el operador elegido no cumpliria la condicion\n");
				printf("Deseas intentar de nuevo la pregunta(1) o Ver la informacion(2)");
				 respuestaError=verificadorCaracter();
				if(respuestaError==1){
					i--;
					break;
				}
				if(respuestaError==2){
					system("cls");
					mostrarTeoria();
					printf("\n\n¿Deseas contestar(1) o Pasar a la siguiente pregunta(2)\n");
					 respuestaError2=verificadorCaracter();
					if(respuestaError2==1){
						i--;
						break;
					}
					if(respuestaError2==2){
						break;
					}
				}
			}//FIN DE IF SI RESPUESTA ES IGUAL A 3
			system("cls");
			printf("Ingresaste mal la opcion prueba de nuevo \n");
			i--;
				break; // FIN CASE 1
			case 2:
		     system("cls");
    printf("\tEjercicio 2:\n");
    printf("\tEste ejercicio te dice si el primer numero ingresado es mayor que el otro\n\n");
    printf("\tint main() {\n");
    printf("\tint num1, num2;\n");
    printf("\tprintf(%cIngrese dos numeros: %c);\n",34,34);
    printf("\tscanf(%c%cd%c, &num1);\n",34,37,34);
	printf("\tscanf(%c%cd%c, &num2);\n",34,37,34);
    printf("\tif (____ > ____) {\n");
    printf("\tprintf(%c%cd es mayor que %cd.%c, num1, num2);\n",34,37,37,34);    
    printf("\treturn 0;\n");
    printf("\t}\n\n");
    printf("\tprintf(%c %cd no es mayor que %cd%c, num1, num2);\n\n",34,37,37,34);
    printf("\treturn 0;}\n\n"); 
    printf("Elige el inciso correcto\n");
    printf("Que variables hace falta poner en los espacios de if ?\n");
    printf("1) num1 y num1 \n");
    printf("2) num2 y num1 \n"); 
    printf("3) num1 y num2 \n");//RESPUESTA CORRECTA
			respuesta=verificadorCaracter();
			if(respuesta==1){
				printf("Opcion incorrecta, Esta respuesta no puede ser ya que las variables son iguales y no cumpliria la condicion\n");
				printf("Deseas intentar de nuevo la pregunta(1) o Ver la informacion(2)");
			    respuestaError=verificadorCaracter();
				if(respuestaError==1){
					i--;
					break;
				}
				if(respuestaError==2){
					system("cls");
					mostrarTeoria();
					printf("Deseas contestar(1) o Pasar a la siguiente pregunta(2)\n");
					respuestaError2=verificadorCaracter();
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
				printf("Opcion incorrecta, Esta respuesta no puede ser la condicion de if se ejecutaria mal\n");
				printf("Deseas intentar de nuevo la pregunta(1) o Ver la informacion(2)");
				 respuestaError=verificadorCaracter();
				if(respuestaError==1){
					i--;
					break;
				}
				if(respuestaError==2){
					system("cls");
					mostrarTeoria();
					printf("\n\nDeseas contestar(1) o Pasar a la siguiente pregunta(2)\n");
					 respuestaError2=verificadorCaracter();
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
				printf("Correcto esas son las variables faltantes\n");
				conteo++;
				break;
			}//FIN DE IF SI RESPUESTA ES IGUAL A 3
			system("cls");
			printf("Ingresaste mal la opcion prueba de nuevo \n");
			i--;
			break; //FIN CASE 2
			case 3: 
				system("cls");
    printf("\tEjercicio 3:\n");
    printf("\tEste ejercicio te dice si el numero ingresado es par o impar\n\n");
    printf("\tint main() {\n");
    printf("\tint numero;\n");
    printf("\tprintf(%cIngrese un numero: %c);\n",34,34);
    printf("\tscanf(%c%cd%c, &numero);\n",34,37,34);
    printf("\tif (numero % 2 == 0) \n");
    printf("\tprintf(%cEl numero es par%c);\n",34,34);
    printf("\treturn 0;\n");   
    printf("\t\n");
    printf("\tprintf(%cEl numero es impar%c);\n\n",34,34);
    printf("\treturn 0;}\n\n"); 
    printf("Elige el inciso correcto\n");
    printf("Que le hace falta al codigo para que funcionar correctamente ?\n");
    printf("1) { y } \n");//RESPUESTA CORRECTA
    printf("2) [ y ] \n"); 
    printf("3) ( y ) \n");
			respuesta=verificadorCaracter();
			if(respuesta==1){
				printf("Correcto los corchetes eran los faltantes\n");
				conteo++;
				break;
			}//FIN DE IF SI RESPUESTA ES IGUAL A 1
			if(respuesta==2){
				printf("Opcion incorrecta, la opcion elegida no cumple con la sintaxis de if\n");
				printf("Deseas intentar de nuevo la pregunta(1) o Ver la informacion(2)");
				 respuestaError=verificadorCaracter();
				if(respuestaError==1){
					i--;
					break;
				}
				if(respuestaError==2){
					system("cls");
					mostrarTeoria();
					printf("\n\nDeseas contestar(1) o Pasar a la siguiente pregunta(2)\n");
					 respuestaError2=verificadorCaracter();
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
				printf("Opcion incorrecta, la opcion elegida no cumple con la sintaxis de if\n");
				printf("Deseas intentar de nuevo la pregunta(1) o Ver la informacion(2)");
			    respuestaError=verificadorCaracter();
				if(respuestaError==1){
					i--;
					break;
				}
				if(respuestaError==2){
					system("cls");
					mostrarTeoria();
					printf("Deseas contestar(1) o Pasar a la siguiente pregunta(2)\n");
					respuestaError2=verificadorCaracter();
					if(respuestaError2==1){
						i--;
						break;
					}
					if(respuestaError2==2){
						break;
					}
				}
			}//FIN DE IF SI RESPUESTA ES IGUAL A 3
			system("cls");
			printf("Ingresaste mal la opcion prueba de nuevo \n");
			i--;
			break; // FIN CASE 3
			case 4: 
			system("cls");
             printf("\tEjercicio 4:\n");
    printf("\tEste ejercicio te dice si el caracter ingresado es la vocal a \n\n");
    printf("\tint main() {\n");
    printf("\tchar caracter;\n");
    printf("\tprintf(%cIngrese un caracter: %c);\n",34,34);
    printf("\tscanf(%c %cc%c, &caracter);\n",34,37,34);
    printf("\t____(caracter == 'a' ) {\n");
    printf("\tprintf(%cEl caracter es la vocal 'a'.%c);\n",34,34);
    printf("\t}\n");
    printf("\tif (caracter ___ 'a' ) {\n");
    printf("\tprintf(%cEl caracter no es la vocal 'a'.%c);\n",34,34);
    printf("\t}\n");
    printf("\treturn 0;}\n\n"); 
    printf("Elige el inciso correcto\n");
    printf("Que le hace falta al codigo para que funcionar correctamente ?\n");
    printf("1) { y if \n");
    printf("2) if y != \n"); //RESPUESTA CORRECTA
    printf("3) if y ; \n");
			respuesta=verificadorCaracter();
			if(respuesta==1){
				printf("Opcion incorrecta, Esta respuesta no puede ser ya que no puedes poner if en la condicion de if \n");
				printf("Deseas intentar de nuevo la pregunta(1) o Ver la informacion(2)");
			    respuestaError=verificadorCaracter();
				if(respuestaError==1){
					i--;
					break;
				}
				if(respuestaError==2){
					system("cls");
					mostrarTeoria();
					printf("Deseas contestar(1) o Pasar a la siguiente pregunta(2)\n");
					respuestaError2=verificadorCaracter();
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
				printf("Correcto ese era el orden para el  buen funcionamiento del codigo\n");
				conteo++;
				break;
			}//FIN DE IF SI RESPUESTA ES IGUAL 2
			if(respuesta==3){
				printf("Opcion incorrecta, Esta respuesta no puede ser ya que ; no prentende una condicion en if\n");
				printf("Deseas intentar de nuevo la pregunta(1) o Ver la informacion(2)");
				 respuestaError=verificadorCaracter();
				if(respuestaError==1){
					i--;
					break;
				}
				if(respuestaError==2){
					system("cls");
					mostrarTeoria();
					printf("\n\n¿Deseas contestar(1) o Pasar a la siguiente pregunta(2)\n");
					 respuestaError2=verificadorCaracter();
					if(respuestaError2==1){
						i--;
						break;
					}
					if(respuestaError2==2){
						break;
					}
				}
			}//FIN DE IF SI RESPUESTA ES IGUAL A 3
			system("cls");
			printf("Ingresaste mal la opcion prueba de nuevo \n");
			i--;
			break; // FIN CASE 4
			case 5: 
			system("cls");
    printf("\tEjercicio 5:\n");
    printf("\tPREGUNTA TEORICA \n\n");
    printf("\tint main() {\n");
    printf("\tint a = 10;\n");
    printf("\tif ( a < 20) {\n");
    printf("\tprintf(%c a es menor que 20 %c);\n",34,34);    
    printf("\t}\n\n");
    printf("\telse { \n");
    printf("\tprintf(%c a es mayor que 20 %c);\n",34,34); 
    printf("\treturn 0;}\n\n"); 
    printf("Elige el inciso correcto\n");
    printf("Cual es la salida del siguiente fragmento de codigo ?\n");
    printf("1) No imprime nada \n");
    printf("2) a es igual a 20 \n"); 
    printf("3) a es menor que 20 \n");//RESPUESTA CORRECTA
			respuesta=verificadorCaracter();
			if(respuesta==1){
				printf("Opcion incorrecta, Esta respuesta no puede ser ya que si imprime algo\n");
				printf("Deseas intentar de nuevo la pregunta(1) o Ver la informacion(2)");
			    respuestaError=verificadorCaracter();
				if(respuestaError==1){
					i--;
					break;
				}
				if(respuestaError==2){
					system("cls");
					mostrarTeoria();
					printf("Deseas contestar(1) o Pasar a la siguiente pregunta(2)\n");
					respuestaError2=verificadorCaracter();
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
				printf("Opcion incorrecta, Esta respuesta no puede ser no hay un printf de dicho mensaje\n");
				printf("Deseas intentar de nuevo la pregunta(1) o Ver la informacion(2)");
				 respuestaError=verificadorCaracter();
				if(respuestaError==1){
					i--;
					break;
				}
				if(respuestaError==2){
					system("cls");
					mostrarTeoria();
					printf("\n\n¿Deseas contestar(1) o Pasar a la siguiente pregunta(2)\n");
					 respuestaError2=verificadorCaracter();
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
				printf("Correcto la opcion elegida es lo que se imprimiria\n");
				conteo++;
				break;
			}//FIN DE IF SI RESPUESTA ES IGUAL A 3
			system("cls");
			printf("Ingresaste mal la opcion prueba de nuevo \n");
			i--;
			break; // FIN CASE 5
	case 6:
		system("cls");
printf("\tEjercicio 6:\n\n");
printf("\tEn lenguaje C de programacion, la declaracion ________ se utiliza para verificar multiples condiciones.\n");
printf("\tSu bloque de codigo se ejecuta si su condicion es verdadera y todas las condiciones antriores son falsas.\n");
printf("\n\tCompleta la informacion para que sea correcta:\n");
printf("\t1. if\n");
printf("\t2. else\n");
printf("\t3. else if\n\n");
printf("\tSeleccione una opcion (1-3): ");
respuesta=verificadorCaracter();
 if(respuesta==1){
 	printf("\n\t!Incorrecto!\n\tLa declaracion if se utiliza para ejecutar un bloque de codigo si una condicion especifica\n\t(no multiple), es verdadera.\n\n");
 	printf("\tDeseas intentar de nuevo la pregunta(1) o Ver la informacion(2)");
	respuestaError=verificadorCaracter();
	if(respuestaError==1){
		i--;
		break;
	}
	if(respuestaError==2){
	system("cls");
	mostrarTeoria();
	printf("\t¿Deseas contestar(1) o Pasar a la siguiente pregunta(2)\n");
	respuestaError2=verificadorCaracter();
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
 	printf("\n\t!Incorrecto!\n\tLa condicion else se utiliza junto con if para ejecutar un bloque de codigo\n\tsi la condicion de if es falsa\n\n");
    printf("\tDeseas intentar de nuevo la pregunta(1) o Ver la informacion(2)");
	respuestaError=verificadorCaracter();
	   if(respuestaError==1){
		i--;
		break;
		}
	  if(respuestaError==2){
	    system("cls");
		mostrarTeoria();
		printf("\n\t¿Deseas contestar(1) o Pasar a la siguiente pregunta(2)\n");
		respuestaError2=verificadorCaracter();
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
 	printf("\n\t!Correcto!\n\tLa condicion else if se coloca despues de un if o de otro else if\n");
 	conteo++;
 	break;
 }	
			system("cls");
			printf("Ingresaste mal la opcion prueba de nuevo \n");
			i--;
				break;
		
			case 7: 
system("cls");
printf("\tEjercicio 7:\n\n");
printf("\t%cQue sucede si se omite el bloque else en una estructura de control if-else en C? \n\n",168);
printf("\t1.Si se omite el bloque else, el programa finalizara inmediatamente \n\tdespues del bloque if sin ejecutar ninguna otra instruccion.\n\n");
printf("\t2.Si se omite el bloque else, el compilador generara un error de sintaxis\n\tya que else es obligatorio en una estructura if-else.\n\n");
printf("\t3.Si se omite el bloque else, el programa no realizara ninguna accion cuando la condición if sea falsa,\n\ty continuara con la siguiente instruccion despues del bloque if.\n\n");
printf("Seleccione una opcion (1-3): ");
respuesta=verificadorCaracter();
if(respuesta==1){
 	printf("\n\t!Inorrecto!\n");
 	printf("\tDeseas intentar de nuevo la pregunta(1) o Ver la informacion(2)");
	respuestaError=verificadorCaracter();
	if(respuestaError==1){
		i--;
		break;
	}
	if(respuestaError==2){
	system("cls");
	mostrarTeoria();
	printf("\t¿Deseas contestar(1) o Pasar a la siguiente pregunta(2)\n");
	respuestaError2=verificadorCaracter();
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
 	printf("\n\t!Incorrecto!\n");
 	printf("\tDeseas intentar de nuevo la pregunta(1) o Ver la informacion(2)");
	respuestaError=verificadorCaracter();
	if(respuestaError==1){
		i--;
		break;
	}
	if(respuestaError==2){
	system("cls");
	mostrarTeoria();
	printf("\t¿Deseas contestar(1) o Pasar a la siguiente pregunta(2)\n");
	respuestaError2=verificadorCaracter();
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
 	printf("\n\t!Correcto!\n");
 	conteo++;
 	break;
 }

			system("cls");
			printf("Ingresaste mal la opcion prueba de nuevo \n");
			i--;
				break;
			
			case 8: 
system("cls");
printf("\tEjercicio 8:\n\n");
printf("\tEl siguiente programa simula una clave de acceso.\n");
printf("\tCompleta la condicion dentro de if para que el Acceso sea permitido\n\n");
printf("-----------------------------------------------------------------------\n");
printf("\t#include<stdio.h>\n");
printf("\tint main()\n\t\t%c\n",123);
printf("\t\tint usuario, clave=16783;\n");
printf("\t\tprintf(%cIntroduce tu clave :%c);\n",34,34);
printf("\t\tscanf(%c%cd%c,c%cusuario);\n",34,37,34,38);
printf("\t\tif(----------)%c//completa esta condicion\n",123);
printf("\t\tprintf(%cAcceso Permitido%c);\n\t\t%c",34,34,125);
printf("\t\telse %c\n",123);
printf("\t\tprintf(%cAcceso Denegado%c);\n%\t\t%c\n",34,34,125);
printf("----------------------------------------------------------------------\n");
printf("%cCual es la respuesta correcta para que se cumpla la condicion?\n",168);
printf("\t1. (usuario==clave)\n");
printf("\t2. (usuario!=clave)\n");
printf("\t3. (usuario>=clave)\n\n");
printf("Seleccione una opcion (1-3): ");
respuesta=verificadorCaracter();

 if(respuesta==1){
 	printf("\n\t!Correcto!\n\tLa clave del usuario tiene que ser igual a la clave declarada\n");
 	conteo++;
 	break;
 }
 if(respuesta==2){
 	printf("\n\t!Incorrecto!\n\tLa clave del usuario no puede ser diferente a la clave declarada,\n\tde lo contrario no permite el acceso\n");
 	printf("\tDeseas intentar de nuevo la pregunta(1) o Ver la informacion(2)");
	respuestaError=verificadorCaracter();
	if(respuestaError==1){
		i--;
		break;
	}
	if(respuestaError==2){
	system("cls");
	mostrarTeoria();
	printf("\t¿Deseas contestar(1) o Pasar a la siguiente pregunta(2)\n");
	respuestaError2=verificadorCaracter();
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
 	printf("\n\t!Incorrecto!\n\tLa clave del usuario no puede ser mayor o menor a la clave declarada,\n\tde lo contrario no permite el acceso\n");
 	printf("\tDeseas intentar de nuevo la pregunta(1) o Ver la informacion(2)");
	respuestaError=verificadorCaracter();
	if(respuestaError==1){
		i--;
		break;
	}
	if(respuestaError==2){
	system("cls");
	mostrarTeoria();
	printf("\t¿Deseas contestar(1) o Pasar a la siguiente pregunta(2)\n");
	respuestaError2=verificadorCaracter();
	 if(respuestaError2==1){
		i--;
		break;
			}
	if(respuestaError2==2){
		break;
			}
		}
 }			
			system("cls");
			printf("Ingresaste mal la opcion prueba de nuevo \n");
			i--;
				break;			
			
			case 9: 
	system("cls");
printf("\tEjercicio 9:\n\n");
printf("\tEl siguiente programa te dice el tipo de clima segun la temperatura\n");
printf("-----------------------------------------------------------------------\n");
printf("\t#include<stdio.h>\n");
printf("\tint main()\n\t\t%c\n",123);
printf("\t\tfloat temperatura;\n");
printf("\t\tprintf(%cIntroduce la temperatura en grados Celcius :%c)%c\n",34,34,59);
printf("\t\tscanf(%c%cf%c,%ctemperatura);\n",34,37,34,38);
printf("\t\telse if(temperatura>=24)%c\n",123);
printf("\t\t\tprintf(%cClima tipo C, CALIDO%c);\n\t\t%c\n",34,34,125);
printf("\t\telse if(24>temperura>=17.5)%c\n",123);
printf("\t\t\tprintf(%cClima tipo T, TEMPLADO%c);\n\t\t%c\n",34,34,125);
printf("\t\telse if(17.5>temperatura>=12)%c\n",123);
printf("\t\t\tprintf(%cClima tipo F, FRIO%c);\n\t\t%c\n",34,34,125);
printf("\t\telse %c\n",123);
printf("\t\t\tprintf(%cClima EB, POLAR%c);\n\t\t%c\n\t\t\n%c",34,34,125,125);
printf("\n%cQue mensaje mostrara el programa si introduces la temperatura de 18 grados?\n",168);
printf("\t1.Clima tipo C, CALIDO \n");
printf("\t2.Clima tipo T, TEMPLADO\n");
printf("\t3.Clima tipo F, FRIO\n");
printf("\t4.Clima EB, POLAR\n\n");
printf("Seleccione una opcion (1-4): ");
respuesta=verificadorCaracter();

if(respuesta==1){
 	printf("\n\t!Incorrecto!\n\tLa temperatura no es mayor ni igual a 24 grados, es menor\n");
 	printf("\tDeseas intentar de nuevo la pregunta(1) o Ver la informacion(2)");
	respuestaError=verificadorCaracter();
	if(respuestaError==1){
		i--;
		break;
	}
	if(respuestaError==2){
	system("cls");
	mostrarTeoria();
	printf("\t¿Deseas contestar(1) o Pasar a la siguiente pregunta(2)\n");
	respuestaError2=verificadorCaracter();
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
 	printf("\n\t!Correcto!\n\tLa temperatura esta entre el parametro de 17. 5 a 24 grados\n");
 	conteo++;
 	break;
 }
 if(respuesta==3){
 	printf("\n\t!Incorrecto!\n\tLa temperaura es mayor, no entra en el parametro de 12 a 17.5 grados \n");
 	printf("\tDeseas intentar de nuevo la pregunta(1) o Ver la informacion(2)");
	respuestaError=verificadorCaracter();
	if(respuestaError==1){
		i--;
		break;
	}
	if(respuestaError==2){
	system("cls");
	mostrarTeoria();
	printf("\t¿Deseas contestar(1) o Pasar a la siguiente pregunta(2)\n");
	respuestaError2=verificadorCaracter();
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
 	printf("\n\t!Incorrecto!\n\tLa temeperatura es mayor, no entra en el parametro menor a 12 grados");
 	printf("\tDeseas intentar de nuevo la pregunta(1) o Ver la informacion(2)");
	respuestaError=verificadorCaracter();
	if(respuestaError==1){
		i--;
		break;
	}
	if(respuestaError==2){
	system("cls");
	mostrarTeoria();
	printf("\t¿Deseas contestar(1) o Pasar a la siguiente pregunta(2)\n");
	respuestaError2=verificadorCaracter();
	 if(respuestaError2==1){
		i--;
		break;
			}
	if(respuestaError2==2){
		break;
			}
		}
 }
 
			system("cls");
			printf("Ingresaste mal la opcion prueba de nuevo \n");
			i--;
				break;
						
			
		
			case 10: 
			system("cls");
printf("\tEjercicio 10:\n\n");
printf("\tSe muestran dos programas que determinan si la calificacion es aprobatoria o no\n\n");
printf("-----------------------------------------------------\n");
printf("\t\tPROGRAMA 1\n");
printf("\t#include<stdio.h>\n");
printf("\tint main()\n\t\t%c\n",123);
printf("\t\tint calificacion;\n");
printf("\t\tprintf(%cIntroduce la calificacion del examen (0-10):%c)%c\n",34,34,59);
printf("\t\tscanf(%c%cd%c,%ccalificacion);\n",34,37,34,38);
printf("\t\tif(calificacion>=6)%c\n",123);
printf("\t\t\tprintf(%cAPROBADO%c);\n\t\t%c\n",34,34,125);
printf("\t\telse \n");
printf("\t\t\tprintf(%cREPROBADO%c);\n",34,34);
printf("\t\t\tprintf(%cMEJORA TU RENDIMIENTO%c);\n",34,34);
printf("\t\treturn 0;\n\t\t%c\n",125);
printf("-----------------------------------------------------\n");
printf("\t\tPROGRAMA 2\n");
printf("\t#include<stdio.h>\n");
printf("\tint main()\n\t\t%c\n",123);
printf("\t\tint calificacion;\n");
printf("\t\tprintf(%cIntroduce la calificacion del examen (0-10):%c)%c\n",34,34,59);
printf("\t\tscanf(%c%cd%c,%ccalificacion);\n",34,37,34,38);
printf("\t\tif(calificacion>=6)%c\n",123);
printf("\t\t\tprintf(%cAPROBADO%c);\n\t\t%c\n",34,34,125);
printf("\t\telse %c\n",123);
printf("\t\t\tprintf(%cREPROBADO%c);\n",34,34);
printf("\t\t\tprintf(%cMEJORA TU RENDIMIENTO%c);\n\t\t%c\n",34,34,125);
printf("\t\treturn 0;\n\t\t%c\n",125);
printf("\n%cQue programa esta correcto?\n",168);
printf("\t1.PROGRAMA 1 \n");
printf("\t2.PROGRAMA 2\n");
printf("Seleccione una opcion (1-2): ");
respuesta=verificadorCaracter();

if(respuesta==1){
 	printf("\n\t!Incorrecto!\n\tEn este cdigo, la falta de llaves {} alrededor del bloque else causa que\n");
 	printf("\tla línea \"Mejora tu rendimiento\" siempre se ejecutara, sin importar si la calificación es aprobatoria o no\n");
 	printf("\tDeseas intentar de nuevo la pregunta(1) o Ver la informacion(2)");
	respuestaError=verificadorCaracter();
	if(respuestaError==1){
		i--;
		break;
	}
	if(respuestaError==2){
	system("cls");
	mostrarTeoria();
	printf("\t¿Deseas contestar(1) o Pasar a la siguiente pregunta(2)\n");
	respuestaError2=verificadorCaracter();
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
 	printf("\n\t!Correcto!\n\tLas llaves {} aseguran que tanto \"Reprobado\" como \"Mejora tu rendimiento\"\n\tse ejecuten solo si la calificacin es menor a 6\n");
 	conteo++;
 	break;
 }
 
			system("cls");
			printf("Ingresaste mal la opcion prueba de nuevo \n");
			i--;
				break; 
			default: printf(".....\n");
		}
	}
	printf("RESULTADO DE LOS EJERCICIOS\n");
    printf("Respuestas correctas: %d de 10 \n", conteo);
	printf("\nAcabaste el cuestionario ingresa una opcion\n");
	printf("Regresar al menu (Presiona cualquier numero)\n");
	printf("Salir del programa if else (2)\n");
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
				printf("\t\t\t\tTEORIA DE USO DE if-else EN C:\n");
                printf("\n");
				printf("El uso de if-else en C permite la ejecucion condicional de bloques de codigo.\n");
    			printf("La estructura basica es:\n");
    			printf("if (condicion) {\n");
    			printf("    // Codigo si la condicion es verdadera\n");
    			printf("} else {\n");
    			printf("    // Codigo si la condicion es falsa\n");
    			printf("}\n\n");
    			printf("Presiona (2) para ir a la siguiente pagina: ");
				opc = verificadorCaracter();
				if(opc==2){
					i++;
				}
				break;
			case 2:
				system("cls");
				printf("\n\n");
    			printf("\t\t\t%cPara que sirve el if en programacion?\n",168);
    			printf("\n");
    			printf("El (if) en programacion sirve para crear logica en un programa.\n");
				printf("Permite que el software tome decisiones dinamicas en tiempo de ejecucion.\n");
    			printf("El (if) es la primera parte de la estructura (if-else): Representa la condicion que el programa evalua:\n");
    			printf("%cSi la condicion se cumple (es verdadera), el programa ejecutara el bloque de codigo dentro del (if).\n",223);
    			printf("%cSi la condicion no se cumple (es falsa), el programa saltara ese bloque y continuara con el siguiente.\n\n",223);
    			printf("Presione (1) para ir a la pagina anterior presione (2) para seguir");
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
				printf("\t\t\tEjemplo 1 del uso de if :\n\n");
    			printf("-----------------------------------------------------------------\n");
    			printf("include<stdio.h>\n");
   				printf("int main(){\n");
   			    printf("\t\tint num1=4;\n");
    			printf("\t\tint num2=6;\n");
    			printf("\t\tif(num1<num2){\n");
    			printf("\t\tprintf");
    			printf("(\"numero1 es menor que numero2\");\n");
    			printf("\t\t\t}\n");
    			printf("\t\t\treturn 0;\n");
    			printf("\t}\n");
    			printf("-----------------------------------------------------------------\n");
				printf("Presione (1) para ir a la pagina anterior presione (2) para seguir: ");
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
				printf("\t\t\tEjemplo 2 del uso de if :\n\n");
    			printf("-----------------------------------------------------------------\n");
   				printf("include<stdio.h>\n");
    			printf("int main(){\n");
    			printf("\t\tint edad; \n");
    			printf("printf");
    			printf("(\"Ingresa tu edad para saber si eres mayor de edad\");\n");
    			printf("\t\tscanf(%c%d%c,&edad);\n",34,34);
    			printf("\t\tf(edad>=18){  \n");
    			printf("\t\tprintf");
    			printf("(\"Eres mayor de edad\"); \n");
    			printf("\t\t}\n");
    			printf("\t\tif(edad<18){ \n");
    			printf("\t\tprintf");
    			printf("(\"eres menor de edad\"); \n");
    			printf("\t\t}\n");
    			printf("\tReturn 0; \n");
    			printf("\t}\n");
    			printf("-----------------------------------------------------------------\n");
    			printf("\n\n");
				printf("Presione (1) para ir a la pagina anterior presione (2) para seguir: ");
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
			printf("\t\t\tPara que sirve el else en programacion?\n\n");
    		printf("La segunda parte de (if-else) es (else).\n");
    		printf("Esta parte es opcional y se utiliza para especificar que hacer si la condicion del (if) no se cumple.\n");
    		printf("En otras palabras, cuando la condicion del (if) es falsa, el programa ejecutara el bloque de codigo dentro del (else).\n");
    		printf("Si la condicion del (if) es verdadera, el programa simplemente ignorara el (else) y continuara con la ejecucion.\n");
    		printf("\n\n");
			printf("Presione (1) para ir a la pagina anterior presione (2) para seguir: ");
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
				printf("\t\tEjemplo 1 del uso de if-else ;\n");
    			printf("-----------------------------------------------------------------\n");
    			printf("include<stdio.h>\n");
    			printf("int main(){\n");
    			printf("\t\tint r<11;\n");
    			printf("\t\tprintf");
    			printf("(\"Introdusca un numero :\"); \n");
    			printf("\t\tscanf(%c%d%c,&r);\n",34,34);
    			printf("\t\tif(r<11){\n");
    			printf("\t\tprintf");
    			printf("(\"El numero ingresa cumple la condicion\");\n\t\t\"\n");
    			printf("\t\telse{\n");
    			printf("\t\tprintf");
    			printf("(\"El numero ingresado no cumple con la condicion\");\n\t\t\"\n");
    			printf("\t\treturn 0;\n\t\t\n");
    			printf("-----------------------------------------------------------------\n");
    			printf("\n\n");
				printf("Presione (1) para ir a la pagina anterior presione (2) para seguir: ");
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
			printf("\t\t\tQue es if-else anidado \n");
    		printf("Es una estructura secuencial de ejecutar en dos alternativas de codijo que siempre se encuentren \n");
    		printf("siempre haacia adelante, se anida en un if externo en pocas palabra el if anidado se ocupa  cuando,\n");
    		printf("la sentencia de rama falsa o rama verdadera es a veces una sentecia que quiere decir que se puede usar \n");
    		printf("para implementar varias decisiones con varias alternativas o multiples-alternativas \n");
    		printf("Su sintaxis se forma como se muestra a continuacion:\n");
    		printf("\tif(condicion1)\n");
    		printf("\t(sentencia1)\n");
    		printf("\telse if (condicional2)\n");
    		printf("\t(sentencia2)\n");
    		printf("\n\n");
			printf("Presione (1) para ir a la pagina anterior presione (2) para seguir: ");
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
			printf("\t\tEjemplo de como usar if anidado \n");
    		printf("-----------------------------------------------------------------\n");
    		printf("include<stdio.h>\n");
    		printf("int main(){\n");
    		printf("\t\tint temperatura=40;\n");
    		printf("\t\tif(temperatura<=35){\n");
    		printf("\t\tprintf");
			printf("(\"La temperatura es normal\");\n");
			printf("\t\t}\n");
			printf("\t\telse{\n");
			printf("\t\tif(temperatura>35 && temperatura<40){\n");
			printf("\t\tprintf");
			printf("(\"Ten cuidado con tu temperatura cuidate\");\n");
			printf("\t\t}else{\n");
			printf("\t\tprintf");
			printf("(\"Tienes fiebre\");\n");
			printf("\t\t}\n");
			printf("\t\t}\n");
			printf("-----------------------------------------------------------------\n");
    		printf("\n\n");
			printf("Presione (1) para ir a la pagina anterior presione (2) para seguir: ");
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
			printf("\t\tQue es el else-if \n");\
			printf("Es una estructura que extiende una sentencia en if para asi ejecutar una sentencia diferente en caso, \n");
			printf("de que la expresion if original su expresion sea falsa diferencia de else,\n");
			printf("esa expresión alternativa solo se ejecutará si la expresion condicional del elseif se evalua como verdadero.\n");
			printf("tambien puede aver elseif en  una misma sentencia de if La sentencia elseif es ejecutada solamente si la expresion \n ");
			printf(" if precedente y cualquiera de las expresiones elseif precedentes son evaluadas como falso,\n");
			printf(" en pocas plabras se ejecuta cuando if y else no se cumplen.\n");
			printf("Estructura :\n");
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
			printf("(\"a es mayor que b y es diferente); } \n");
			printf("\n\n");
			printf("Presione (1) para ir a la pagina anterior presione (2) para seguir: ");
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

