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
bool inciarsesion(usuario usuar[50], int *Plongusu);
void NuevoUsuario(FILE*usu);
void MemoryUser(FILE *usu, usuario usuar[50], int *Plongusu);
void MemoryVet(FILE *vet,veterinario veter[50],int *Plongvet);
void MemoryMasc(FILE *masc, mascota masco[50],int *Plongmasc);
void MemoryTur(FILE *tur,turno turn[50],int *Plongtur);

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
	
bool inciarsesion(usuario usuar[50], int *Plongusu)
{
	bool resul = false;
	int opc; 
	
	printf("\n***********************************");
	printf("\n***********************************");
	printf("\n***Modulo de inicio de sesion******");
	printf("\n***********************************");
	printf("\n***********************************");
	printf("\n 1) INICIAR SESION");
	printf("\n");
	printf("\n 2) SALIR..");
	printf("\n");
	printf("\n Elija una opcion: ");
	scanf("%d", &opc);
	
	if(opc==1)
	{
		system("cls");
		usuario inicio;
		
		printf("\n-Nombre de usuario: ");
		scanf("%s",&inicio.Nameusuario);
		
		printf("\n-Contrasenia: ");
		scanf("%s",&inicio.codigo);
		
			for(int i=0;i<*Plongusu;i++)
		{
		
			if(strcmp(inicio.Nameusuario,usuar[i].Nameusuario)==0 && strcmp(inicio.codigo,usuar[i].codigo)==0)
			{
				resul=true;
			}
		}
	}
	if(opc==2)
	{
		printf("Cerrando sesion...");
	}
	return resul;
}
void NuevoUsuario(FILE*usu)
{
	usuario nuevoU;
	usu=fopen("usuar.dat", "a+b");
	
	if(usu==NULL)
	{
		printf("NO SE PUEDE ABRIR EL ARCHIVO.");
	}
	else
	{
		printf("\n-Nombre del usuario: ");
		scanf("%s",&nuevoU.Nameusuario);
		printf("\n-Contraseña: ");
		scanf("%s",&nuevoU.codigo);
		printf("\n-Apellido y Nombre: ");
		scanf("%s",&nuevoU.ApyName);
		
		fwrite(&nuevoU,sizeof(usuario),1,usu);
	}
	fclose(usu);
}

void MemoryUser(FILE *usu, usuario usuar[50], int *Plongusu)
{
	usu=fopen("usuar.dat","a+b");
	
	while(!feof(usu))
	{
		fread(&usuar[*Plongusu],sizeof(usuario),1,usu);
		*Plongusu=*Plongusu+1;
	}
	*Plongusu=*Plongusu-1;
	fclose(usu);
}

void MemoryVet(FILE *vet,veterinario veter[50],int *Plongvet)
{
	vet=fopen("veter.dat","a+b");
	
	while(!feof(vet))
	{
		fread(&veter[*Plongvet],sizeof(veterinario),1,vet);
		*Plongvet=*Plongvet+1;
	}
	*Plongvet=*Plongvet-1;
	fclose(vet);
}

void MemoryMasc(FILE *masc, mascota masco[50],int *Plongmasc)
{
	masc=fopen("masco.dat","a+b");
	
	while(!feof(masc))
	{
		fread(&masco[*Plongmasc],sizeof(mascota),1,masc);
		*Plongmasc=*Plongmasc+1;
	}
	*Plongmasc=*Plongmasc-1;
	fclose(masc);
}

void MemoryTur(FILE *tur,turno turn[50],int *Plongtur)
{
	tur=fopen("turnos.dat","a+b");
	
	while(!feof(tur))
	{
		fread(&turn[*Plongtur],sizeof(turno),1,tur);
		*Plongtur=*Plongtur+1;
	}
	*Plongtur=*Plongtur-1;
	fclose(tur);
}

void GuardarUser(FILE *usu, usuario usuar[50], int *Plongusu)
{
	usu=fopen("usuar.dat","wb");
	
	for(int i=0;i<*Plongusu;i++)
	{
		fwrite(&usuar[i],sizeof(usuario),1,usu);
	}
		
	fclose(usu);
}
	
	
	
	
	
	
	
	
	
	




























	






