#include<stdio.h>

int MENUSwitch( void );

int problemas(void);

int switchDo();

int switchDo(){
	int BANDERA=0, op, op2;
	do{
    op=MENUSwitch();
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

int MENUswitch(){
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

int problemas(void){
		int r,r1,r2,r3,r4,r5,r6,r7,r8,r9,r10;
	do{
	printf("a) %cCuantas veces se pueden anidar comandos switch dentro de otros comandos switch?\n",168);
	printf("1) Una vez\n");
	printf("2) Dos veces\n");
	printf("3) Las veces que necesarias\n");
		scanf("%d",&r1);
		if(r1==2)r1=1;
		else r2=0;
	printf("b) %cQue le hace falta al programa:\n switch( ){\n\tcase 1:\n\tbrake:}\n",168);
	printf("1) Una variable\n");
	printf("2) Una variable con un valor asignado\n");
	printf("3) Un caracter\n");
		scanf("%d",&r2);
		if(r2==2)r2=1;
		else r2=0;
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
