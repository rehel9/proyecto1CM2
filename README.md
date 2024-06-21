# proyecto1CM2
Codigo del proyecto del 3er parcial para la materia de Fundamentos de Programacion 1

## if Else
Manual de Usuario programa if-else.

-Funciones del código con breve descripción 
int menu_ifelse( void ); Función sin parámetros, que retorna una opción y contiene los mensajes del menú principal.
void problemario(void); Función sin parámetros, que no retorna, dentro de esta se tiene un ciclo con un switch donde se ejecutan todas las funciones aquí mencionadas.
int cuestionario(void); función sin parámetros que retorna una opción y contiene un ciclo que a su ves contiene un switch el cual cada case representa una pregunta, case 1 = pregunta 1.
void mostrarTeoria(void); Función sin parámetros, que no retorna, dentro de esta se tiene un ciclo y un switch donde cada case es una página de información, construido así para dar la posibilidad de ir a la siguiente pagina o regresar a la anterior.
int verificadorCaracter(void); Función que si retorna y no tiene parámetros dentro de esta se tiene un ciclo y a la función getchar, construida para que si el usuario ingresa un carácter diferente a un numero le pida volver a leer un dato que si sea numérico.
void SC (int ForgC); función encargada de dar color a las líneas de código 

Construcción del código:

int verificadorCaracter(void); 
Se declaran las siguientes variables:
int i, c1; / char c;
Se inicia poniendo un ciclo do-while con la condición i==0; dentro del ciclo tenemos un scanf que pide leer un dato y lo asigna a la variable c1 seguido la variable c estará igualada a la función getchar ( c = getchar(); ) contenida en la librería stdio.h, la manera en que trabaja esta línea de código es que la función getchar asigna a la variable c el valor ASCII del carácter antes leído con scanf, la siguiente línea es un if con la condición isalpha(c), lo que hace este if es que si ve que es un carácter entra dentro del if, se imprime el mensaje de “carácter incorrecto” y se iguala a i con 0 para que el ciclo nuevamente se repita y volvamos a la parte inicial de scanf.
Si la condición de if no se cumple se tiene un else donde los valores que caen aquí son aquellos caracteres únicamente de tipo numérico y se procede a igualar a i con 1 para que el ciclo termine y continue la ultima línea de código que es un return c1; es decir regresamos el valor leído una ves que comprobamos que si es un numero.
Esta función es muy importante ya que la utilizaremos en cada momento que le pidamos al usuario un dato.
 

int menu_ifelse( void );
Se declara la siguiente variable:
Int op; 
En esta función únicamente imprimimos los mensajes del menú “principal” y pedimos leer un dato con la siguiente línea de código:
op = verificadorCaracter();
Igualamos a op con el verificador de carácter y la retornamos (return op;).
 

void mostrarTeoria(void);
Se declaran las variables:
int i=1, opc;
En esta función lo principal que se busca es que el usuario pueda avanzar y regresar de las páginas de información esto se logra con un ciclo do-while que tendrá la condición (i != 10 ), dentro de el un switch(i) donde cada case representa la página de información es por esto que i necesita estar inicializada en 1 para poder entrar primeramente al case 1, en case 1 se despliega el mensaje "Presione (2) para seguir: " y para leer la opción se tiene la línea de código ( opc = verificadorCaracter(); ) en la cual el usuario según su elección le asigna un valor a opc, seguido se tienen un if con la condición if(opc==2) donde según el mensaje que imprimimos 2 representa ir a la siguiente página entonces dentro de este if i se incrementa 1 ( i++ ) y por ende i vale dos, se repite el ciclo y ahora nos mete al case 2 que representa la pagina 2.
A partir de la página 2 o case 2 ya imprimimos el siguiente mensaje "Presione (1) para ir a la página anterior presione (2) para seguir"  a partir de aquí hasta el ultimo case se usan dos if uno con la misma condición que en el case 1 ( if(opc==2) ) que funciona de la misma manera, el otro if tiene la condición ( if(opc==1) ) el cual según el mensaje que desplegamos representa regresar de pagina y para regresar de pagina tenemos dentro de este if un i con decremento (i--) esto por si i ya vale dos y quiere regresar a la pagina anterior se decremente en 1 repita el ciclo y se meta al case anterior.
Cada case finaliza después de los if con un break, en caso de que el usuario digite un valor numérico que no sea 1 o 2 este valor cae en el default de switch donde le decimos que la opción es incorrecta y el ciclo se repite volviendo a la misma pregunta ya que el valor de i nunca cambio.
Una ves que i ya se incremento a 10 se sale del ciclo se imprime un salto de línea y la función termina.
 

void SC (int ForgC); 
Esta función está diseñada para cambiar el color del texto no retorna, pero si tiene parámetros, en la consola la función se llama SC.
Y cómo funciona es que toma un parámetro de entrada llamado ForgC, que representa el color de primer plano (foreground color) seguido de esto obtiene el identificador de la consola estándar (hStdOut) y la información del búfer de pantalla (csbi).
Calcula el nuevo color combinando el color de fondo actual (csbi.wAttributes & 0xF0) con el color de primer plano especificado (ForgC & 0x0F) y finalmente, establece el nuevo atributo de texto en la consola mediante SetConsoleTextAttribute.
Por ejemplo, si ForgC es 14, cambiará el color del texto a amarillo sobre fondo negro.
 

int cuestionario(void);
Esta función contiene a las preguntas que se le harán al usuario, no tiene parámetros, pero si retorna una opción.
Se declaran las variables: 
int i, respuesta, respuestaError, respuestaError2, conteo=0, op2;
El objetivo de esta función es ir almacenando las respuestas del usuario e ir mostrándole las preguntas una tras otra esto en caso de que responda bien, si se equivoca le mostrara 3 mensajes el primero es “opción incorrecta” el segundo es una breve descripción del porque esa respuesta no puede ser y el tercero es la pregunta: “Deseas intentar de nuevo la pregunta(1) o Ver la información(2)" si elije la 1 repetirá la pregunta si elije la 2 se llamara la función información una vez terminada le hará una nueva pregunta "Deseas contestar(1) o Pasar a la siguiente pregunta(2)?" si elije 1 le hará nuevamente la pregunta pero si aprieta 2 el código continuara y pasara a la pregunta siguiente.
Si responde bien le dirá que está bien y el por qué la opción elegida es la correcta y pasara a la siguiente pregunta.
La forma en que funciona es por medio de la siguiente estructura:
	for(i=1; i<=11; i++) { 
	switch(i){ //para esta estructura supondremos que la respuesta correcta es el inciso (2).
 
Aquí únicamente planteamos la pregunta los incisos que pueden ir de 1 a 3 o 1 a 4 y leemos la respuesta del usuario con el verificador.
 
Si el inciso elegido por el usuario es (1) entrará a este if el cual le dirá que la respuesta es incorrecta le dará una breve descripción del porque es incorrecta y le hará la pregunta:
¿Deseas intentar de nuevo presiona (1) o ver la información (2)?
La opción del usuario será leída por el verificador y guardada en la variable respuestaError
-Si elige 1, eligió repetir la pregunta entonces el i se decrementará y se finalizará el case con un break para que el ciclo se repita y entre a la misma pregunta ya que i se decremento 
-Si elije 2, eligió ver la teoría, entonces se llama la función teoría y una ves termine de ejecutarse le hará la pregunta:
¿Deseas contestar (1) o Pasar a la siguiente pregunta (2)?
Y lo que conteste el usuario será leído en respuestaError2.
-Si elije 1. i se decrementará, finalizará el case con break y se repetirá el ciclo entrando a la misma pregunta
-Si elije 2. El case se finalizará con break e i como no decremento pasara al siguiente case con el ciclo

 
En cambio, si el usuario eligió la respuesta correcta se le desplegara el mensaje de respuesta correcta le dirá brevemente porque era la correcta y la variable conteo incrementara en uno esto porque ya tendría un punto de 10.
printf (“Ingresaste mal la opción prueba de nuevo"); Si en cualquier if el usuario eligió una opción numérica invalida caerá en esta parte donde se le dirá que la opción es incorrecta decrementando a i para después repetir el ciclo finalizando el case con break.
	i--;
	break; // FIN CASE 1
	}
Una ves fuera del ciclo y de switch:
 
Se imprimirán los siguientes mensajes y le mostrara cuantas preguntas contesto de manera correcta esto mostrando la acumulación de la variable conteo.
Por último, se le hará la pregunta si desea salir del programa o regresar al menú dicha elección se leerá con el verificador almacenándola en op2 y será retornada.
TODAS LAS PREGUNTAS DE LOS CASE SIGUEN ESTA ESTRUCTURA DE RESPUESTA CORRECTA RESPUESTA INCORRECTA.
void problemario(void);
En esta función se ejecuta la elección del menú y dentro de esta todas las funciones anteriores, dicha función no tiene parámetros ni retorna.
Se declaran las variables:
int op,op2,BANDERA=0;
Hacemos uso de un ciclo do-while con condición de while((BANDERA==1) ||(BANDERA==3) ); dentro de este ciclo vamos a recibir en op la opción retornada de la función menú_ifelse(); y continuaremos con un switch con la expresión op dicho switch tendrá 3 case que contienen a BANDERA explicados a continuación:
BANDERA: Usamos a bandera para que cuando se ejecute el código no deje entrar al usuario a la parte de cuestionario sin antes leer la Teoría.
Case 1: En case 1 mandaremos a llamar a la función teoría e igualaremos a BANDERA con 1, finalizando el case con un break;
Case 2: En case 2 tendremos un if con la condición de BANDERA==1 esto por si BANDERA aun no toma el valor de 1 es por que no se ha leído la teoría, como no la ha leído caerá en un else donde le diremos que no ha leído la información igualando a BANDERA con 3 para que el ciclo se repita y le dé la oportunidad de leer la teoría.
Una vez leída la teoría si ingresa al case 2 entrara al if donde se ejecutará y se recibirá el valor retornado de la función cuestionario (); seguido de esto estarán 2 if uno con la condición si op2 es igual a 1 y el otro si es igual a 2 en el primero se igualará a BANDERA con 1 donde se nos repetirá el ciclo mostrando el menú principal, en el segundo if se igualará a BANDERA con 2 y finalizara el código.
Case 3: Este es el case de salida únicamente contiene un mensaje de salida y a BANDERA igualada con 2 para que la función termine de ejecutarse
Default: Aquí caerán todas las respuestas numéricas que no coincidan con las propuestas repitiéndose el ciclo con BANDERA=1.

