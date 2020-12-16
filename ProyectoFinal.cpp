#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
//#include<milibreria.h>

struct usuario
{
	char Nameusuario[20]; 
	char ApyName[50];
	char codigo[50];
};
struct fecha
{
	int dia;
	int mes;
	int anio;
};
struct mascota
{
	char ApeyName[50];
	char domi[50];
	char localidad[50];
	fecha nacimiento;
	float peso;
	int DNI;
	char celular[20];
};
struct veterinario
{
	char ApyName[50];
	char celular[20];
	int DNI;
	int matricula;
};
struct turno
{
	int matricula;
	int DNI;
	fecha diaturno;
	char descripcion[400];
};


typedef char cadena[32];

bool validarPass(cadena pass);
bool validarConsecutivasPass(cadena pass);


main()
{
	int opcion;
	do
	{
		system("cls");
		printf("*****************************************");
		printf("\n\tMENU PRINCIPAL");
		printf("\n");
		printf("\n1) Modulo Consultorio Veterinario");
		printf("\n2) Modulo del Asistente");
		printf("\n3) Modulo Administracionn");
		printf("\n4) Ingrese 4 si desea cerrar el menu");
		printf("\n****************************************");	
		printf("\nSeleccione un valor: ");
		scanf("%d", &opcion);
				
		
    }while(opcion != 4);
    
    cadena pass;

	do{
		printf("ingrese una password valido: ");                   
		_flushall();
		gets(pass);			
	}while(!validarPass(pass));

	printf("pass Valido!");

}

bool validarPass(cadena pass){
	int may = 0, min = 0, num = 0, otros = 0, numcons = 0;

	for(int i=0; i<strlen(pass); i++){
		if (pass[i] >='A' && pass[i] <='Z'){
			may++;
			numcons = 0;		
		} 
		else if (pass[i] >='a' && pass[i] <='z'){
				 min++;
				 numcons = 0;
			 }
			 else if (pass[i] >= '0' && pass[i] <='9'){
			 	num++;
				numcons++;	
			    }
			 	else otros++;
		if (numcons == 4) break;
	}

	return may>=1 && min>=1 && num>=1 && otros==0 && strlen(pass)>=6 && strlen(pass)<=32 && numcons<=3 && validarConsecutivasPass(pass);
}

bool validarConsecutivasPass(cadena pass){
	int letrasCons = 1;

	strlwr(pass);
	//aBuel123
	for(int i=0; i<strlen(pass); i++){
		if (pass[i] >='a' && pass[i] <='z'){
			if(i>0 && pass[i-1]>'9' && pass[i]==pass[i-1]+1) letrasCons++;
			//else letrasCons = 0;			
		}

		if (letrasCons == 2) break;
	}	
	return letrasCons < 2;
}
	
	
	
	
	
	
	
	
	
	
	
	




























	






