typedef char cadena [100];


struct fecha
{
    int dia;
    int mes;
    int anio;
};

struct veterinario
{
    char apynom[60];
    int matricula;
    char contrasenia[10]; 
    int dni;
    char telefono[25];
    int cantida;
};

struct usuario
{
    char usu[60];
    char contrasenia[60];
    char apynom[60];
};

struct turnos
{
    int mat;
    fecha fec;
    int dni;
    char apynom[60];
    char detalle[380];
};

struct mascota
{
    char apynom[60];
    char domicilio[60];
    int dni;
    char localidad[60];
    fecha fn;
    float peso;
    char tel[25];
};




void bienvenida();


int menuprin();
int modconsul();
int modasis(bool sesionInic);
int modadmin();


void funcvet(veterinario v,FILE *vet);
void funcus(usuario u,FILE *user);
void funcat(turnos t,veterinario v, char auxvet[80],FILE *tur ,FILE *vet);

void funcrank(FILE *tur , FILE *vet , turnos t , veterinario v);


void login (FILE *user , usuario u);
void regi_masc(FILE *mas , mascota m);
void turno_masc(FILE *mas ,FILE *tur , FILE *vet , turnos t , veterinario v, mascota m);
void List_aten_vet(FILE *vet , FILE *tur , FILE *mas , veterinario v , turnos t , mascota m );


int Datos (FILE *vet, veterinario v, char pass[10]);
void Turnos (FILE *tur, FILE *vet, FILE *mas, veterinario v, turnos t, mascota m , int matri);
void Evo (FILE *tur, turnos t);

void bienvenida()
{
    int cont=0;
	bool b=true;
	do
	{
		if(cont=5)
		{
			system("cls");
			system("color 0b");
			printf("\t######    ###  #######   #       #  #                #   #######   #       #  ###  ######       ######\n");
			printf("\t#     #    #   #         ##      #   #              #    #         ##      #   #   #     #     #      #\n");
			printf("\t#      #   #   #         # #     #    #            #     #         # #     #   #   #      #    #      #\n");
			printf("\t#     #    #   #         #  #    #     #          #      #         #  #    #   #   #       #   #      #\n");
			printf("\t######     #   #######   #   #   #      #        #       #######   #   #   #   #   #       #   #      #\n");
			printf("\t#     #    #   #         #    #  #       #      #        #         #    #  #   #   #       #   #      #\n");
			printf("\t#      #   #   #         #     # #        #    #         #         #     # #   #   #      #    #      #\n");
			printf("\t#     #    #   #         #      ##         #  #          #         #      ##   #   #     #     #      #\n");
			printf("\t######    ###  #######   #       #          ##           #######   #       #  ###  ######       ######\n");
			
			printf("\t         __       ______   ______       ______   ______  __  __   ______  ______    \n");
		    printf("\t        /\\ \\     /\\  __ \\ /\\  ___\\     /\\  ___\\ /\\__  _\\/\\ \\_\\ \\ /\\  == \\/\\  ___\\   \n");
		    printf("\t        \\ \\ \\____\\ \\ \\/\\ \\\\ \\___  \\    \\ \\ \\____\\/_/\\ \\/\\ \\____ \\\\ \\  _-/\\ \\  __\\   \n");
		    printf("\t         \\ \\_____\\\\ \\_____\\\\/\\_____\\    \\ \\_____\\  \\ \\_\\ \\/\\_____\\\\ \\_\\   \\ \\_____\\ \n");
		    printf("\t          \\/_____/ \\/_____/ \\/_____/     \\/_____/   \\/_/  \\/_____/ \\/_/    \\/_____/ \n");
			
			Sleep(500);
			
			if(cont=10)
			{
				system("cls");
				system("color 0a");
				printf("\t######    ###  #######   #       #  #                #   #######   #       #  ###  ######       ######\n");
				printf("\t#     #    #   #         ##      #   #              #    #         ##      #   #   #     #     #      #\n");
				printf("\t#      #   #   #         # #     #    #            #     #         # #     #   #   #      #    #      #\n");
				printf("\t#     #    #   #         #  #    #     #          #      #         #  #    #   #   #       #   #      #\n");
				printf("\t######     #   #######   #   #   #      #        #       #######   #   #   #   #   #       #   #      #\n");
				printf("\t#     #    #   #         #    #  #       #      #        #         #    #  #   #   #       #   #      #\n");
				printf("\t#      #   #   #         #     # #        #    #         #         #     # #   #   #      #    #      #\n");
				printf("\t#     #    #   #         #      ##         #  #          #         #      ##   #   #     #     #      #\n");
				printf("\t######    ###  #######   #       #          ##           #######   #       #  ###  ######       ######\n");
				
				printf("\t         __       ______   ______       ______   ______  __  __   ______  ______    \n");
			    printf("\t        /\\ \\     /\\  __ \\ /\\  ___\\     /\\  ___\\ /\\__  _\\/\\ \\_\\ \\ /\\  == \\/\\  ___\\   \n");
			    printf("\t        \\ \\ \\____\\ \\ \\/\\ \\\\ \\___  \\    \\ \\ \\____\\/_/\\ \\/\\ \\____ \\\\ \\  _-/\\ \\  __\\   \n");
			    printf("\t         \\ \\_____\\\\ \\_____\\\\/\\_____\\    \\ \\_____\\  \\ \\_\\ \\/\\_____\\\\ \\_\\   \\ \\_____\\ \n");
			    printf("\t          \\/_____/ \\/_____/ \\/_____/     \\/_____/   \\/_/  \\/_____/ \\/_/    \\/_____/ \n");
				
				Sleep(500);
				if(cont=15)
				{
					system("cls");
					system("color 0c");
					printf("\t######    ###  #######   #       #  #                #   #######   #       #  ###  ######       ######\n");
					printf("\t#     #    #   #         ##      #   #              #    #         ##      #   #   #     #     #      #\n");
					printf("\t#      #   #   #         # #     #    #            #     #         # #     #   #   #      #    #      #\n");
					printf("\t#     #    #   #         #  #    #     #          #      #         #  #    #   #   #       #   #      #\n");
					printf("\t######     #   #######   #   #   #      #        #       #######   #   #   #   #   #       #   #      #\n");
					printf("\t#     #    #   #         #    #  #       #      #        #         #    #  #   #   #       #   #      #\n");
					printf("\t#      #   #   #         #     # #        #    #         #         #     # #   #   #      #    #      #\n");
					printf("\t#     #    #   #         #      ##         #  #          #         #      ##   #   #     #     #      #\n");
					printf("\t######    ###  #######   #       #          ##           #######   #       #  ###  ######       ######\n");
					
					printf("\t         __       ______   ______       ______   ______  __  __   ______  ______    \n");
				    printf("\t        /\\ \\     /\\  __ \\ /\\  ___\\     /\\  ___\\ /\\__  _\\/\\ \\_\\ \\ /\\  == \\/\\  ___\\   \n");
				    printf("\t        \\ \\ \\____\\ \\ \\/\\ \\\\ \\___  \\    \\ \\ \\____\\/_/\\ \\/\\ \\____ \\\\ \\  _-/\\ \\  __\\   \n");
				    printf("\t         \\ \\_____\\\\ \\_____\\\\/\\_____\\    \\ \\_____\\  \\ \\_\\ \\/\\_____\\\\ \\_\\   \\ \\_____\\ \n");
				    printf("\t          \\/_____/ \\/_____/ \\/_____/     \\/_____/   \\/_/  \\/_____/ \\/_/    \\/_____/ \n");
						
					Sleep(500);
					if(cont=20)
					{
						system("cls");
						system("color 0f");
						printf("\t######    ###  #######   #       #  #                #   #######   #       #  ###  ######       ######\n");
						printf("\t#     #    #   #         ##      #   #              #    #         ##      #   #   #     #     #      #\n");
						printf("\t#      #   #   #         # #     #    #            #     #         # #     #   #   #      #    #      #\n");
						printf("\t#     #    #   #         #  #    #     #          #      #         #  #    #   #   #       #   #      #\n");
						printf("\t######     #   #######   #   #   #      #        #       #######   #   #   #   #   #       #   #      #\n");
						printf("\t#     #    #   #         #    #  #       #      #        #         #    #  #   #   #       #   #      #\n");
						printf("\t#      #   #   #         #     # #        #    #         #         #     # #   #   #      #    #      #\n");
						printf("\t#     #    #   #         #      ##         #  #          #         #      ##   #   #     #     #      #\n");
						printf("\t######    ###  #######   #       #          ##           #######   #       #  ###  ######       ######\n");
						
						printf("\t         __       ______   ______       ______   ______  __  __   ______  ______    \n");
					    printf("\t        /\\ \\     /\\  __ \\ /\\  ___\\     /\\  ___\\ /\\__  _\\/\\ \\_\\ \\ /\\  == \\/\\  ___\\   \n");
					    printf("\t        \\ \\ \\____\\ \\ \\/\\ \\\\ \\___  \\    \\ \\ \\____\\/_/\\ \\/\\ \\____ \\\\ \\  _-/\\ \\  __\\   \n");
					    printf("\t         \\ \\_____\\\\ \\_____\\\\/\\_____\\    \\ \\_____\\  \\ \\_\\ \\/\\_____\\\\ \\_\\   \\ \\_____\\ \n");
					    printf("\t          \\/_____/ \\/_____/ \\/_____/     \\/_____/   \\/_/  \\/_____/ \\/_/    \\/_____/ \n");
						
						Sleep(500);
						if(cont=25)
						{
							system("cls");
							system("color 0b");
							printf("\t######    ###  #######   #       #  #                #   #######   #       #  ###  ######       ######\n");
							printf("\t#     #    #   #         ##      #   #              #    #         ##      #   #   #     #     #      #\n");
							printf("\t#      #   #   #         # #     #    #            #     #         # #     #   #   #      #    #      #\n");
							printf("\t#     #    #   #         #  #    #     #          #      #         #  #    #   #   #       #   #      #\n");
							printf("\t######     #   #######   #   #   #      #        #       #######   #   #   #   #   #       #   #      #\n");
							printf("\t#     #    #   #         #    #  #       #      #        #         #    #  #   #   #       #   #      #\n");
							printf("\t#      #   #   #         #     # #        #    #         #         #     # #   #   #      #    #      #\n");
							printf("\t#     #    #   #         #      ##         #  #          #         #      ##   #   #     #     #      #\n");
							printf("\t######    ###  #######   #       #          ##           #######   #       #  ###  ######       ######\n");
							
							printf("\t         __       ______   ______       ______   ______  __  __   ______  ______    \n");
						    printf("\t        /\\ \\     /\\  __ \\ /\\  ___\\     /\\  ___\\ /\\__  _\\/\\ \\_\\ \\ /\\  == \\/\\  ___\\   \n");
						    printf("\t        \\ \\ \\____\\ \\ \\/\\ \\\\ \\___  \\    \\ \\ \\____\\/_/\\ \\/\\ \\____ \\\\ \\  _-/\\ \\  __\\   \n");
						    printf("\t         \\ \\_____\\\\ \\_____\\\\/\\_____\\    \\ \\_____\\  \\ \\_\\ \\/\\_____\\\\ \\_\\   \\ \\_____\\ \n");
						    printf("\t          \\/_____/ \\/_____/ \\/_____/     \\/_____/   \\/_/  \\/_____/ \\/_/    \\/_____/ \n");
									
							Sleep(500);
							if(cont=30)
							{
								system("cls");
								system("color 0e");
								printf("\t######    ###  #######   #       #  #                #   #######   #       #  ###  ######       ######\n");
								printf("\t#     #    #   #         ##      #   #              #    #         ##      #   #   #     #     #      #\n");
								printf("\t#      #   #   #         # #     #    #            #     #         # #     #   #   #      #    #      #\n");
								printf("\t#     #    #   #         #  #    #     #          #      #         #  #    #   #   #       #   #      #\n");
								printf("\t######     #   #######   #   #   #      #        #       #######   #   #   #   #   #       #   #      #\n");
								printf("\t#     #    #   #         #    #  #       #      #        #         #    #  #   #   #       #   #      #\n");
								printf("\t#      #   #   #         #     # #        #    #         #         #     # #   #   #      #    #      #\n");
								printf("\t#     #    #   #         #      ##         #  #          #         #      ##   #   #     #     #      #\n");
								printf("\t######    ###  #######   #       #          ##           #######   #       #  ###  ######       ######\n");
								
								printf("\t         __       ______   ______       ______   ______  __  __   ______  ______    \n");
							    printf("\t        /\\ \\     /\\  __ \\ /\\  ___\\     /\\  ___\\ /\\__  _\\/\\ \\_\\ \\ /\\  == \\/\\  ___\\   \n");
							    printf("\t        \\ \\ \\____\\ \\ \\/\\ \\\\ \\___  \\    \\ \\ \\____\\/_/\\ \\/\\ \\____ \\\\ \\  _-/\\ \\  __\\   \n");
							    printf("\t         \\ \\_____\\\\ \\_____\\\\/\\_____\\    \\ \\_____\\  \\ \\_\\ \\/\\_____\\\\ \\_\\   \\ \\_____\\ \n");
							    printf("\t          \\/_____/ \\/_____/ \\/_____/     \\/_____/   \\/_/  \\/_____/ \\/_/    \\/_____/ \n");
								
								Sleep(500);
								if(cont=35)
								{
									system("cls");
									system("color 0a");
									printf("\t######    ###  #######   #       #  #                #   #######   #       #  ###  ######       ######\n");
									printf("\t#     #    #   #         ##      #   #              #    #         ##      #   #   #     #     #      #\n");
									printf("\t#      #   #   #         # #     #    #            #     #         # #     #   #   #      #    #      #\n");
									printf("\t#     #    #   #         #  #    #     #          #      #         #  #    #   #   #       #   #      #\n");
									printf("\t######     #   #######   #   #   #      #        #       #######   #   #   #   #   #       #   #      #\n");
									printf("\t#     #    #   #         #    #  #       #      #        #         #    #  #   #   #       #   #      #\n");
									printf("\t#      #   #   #         #     # #        #    #         #         #     # #   #   #      #    #      #\n");
									printf("\t#     #    #   #         #      ##         #  #          #         #      ##   #   #     #     #      #\n");
									printf("\t######    ###  #######   #       #          ##           #######   #       #  ###  ######       ######\n");
									
									printf("\t         __       ______   ______       ______   ______  __  __   ______  ______    \n");
								    printf("\t        /\\ \\     /\\  __ \\ /\\  ___\\     /\\  ___\\ /\\__  _\\/\\ \\_\\ \\ /\\  == \\/\\  ___\\   \n");
								    printf("\t        \\ \\ \\____\\ \\ \\/\\ \\\\ \\___  \\    \\ \\ \\____\\/_/\\ \\/\\ \\____ \\\\ \\  _-/\\ \\  __\\   \n");
								    printf("\t         \\ \\_____\\\\ \\_____\\\\/\\_____\\    \\ \\_____\\  \\ \\_\\ \\/\\_____\\\\ \\_\\   \\ \\_____\\ \n");
								    printf("\t          \\/_____/ \\/_____/ \\/_____/     \\/_____/   \\/_/  \\/_____/ \\/_/    \\/_____/ \n");
									
									Sleep(500);
									if(cont=40)
								{
									system("cls");
									system("color 0c");
									printf("\t######    ###  #######   #       #  #                #   #######   #       #  ###  ######       ######\n");
									printf("\t#     #    #   #         ##      #   #              #    #         ##      #   #   #     #     #      #\n");
									printf("\t#      #   #   #         # #     #    #            #     #         # #     #   #   #      #    #      #\n");
									printf("\t#     #    #   #         #  #    #     #          #      #         #  #    #   #   #       #   #      #\n");
									printf("\t######     #   #######   #   #   #      #        #       #######   #   #   #   #   #       #   #      #\n");
									printf("\t#     #    #   #         #    #  #       #      #        #         #    #  #   #   #       #   #      #\n");
									printf("\t#      #   #   #         #     # #        #    #         #         #     # #   #   #      #    #      #\n");
									printf("\t#     #    #   #         #      ##         #  #          #         #      ##   #   #     #     #      #\n");
									printf("\t######    ###  #######   #       #          ##           #######   #       #  ###  ######       ######\n");
									
									printf("\t         __       ______   ______       ______   ______  __  __   ______  ______    \n");
								    printf("\t        /\\ \\     /\\  __ \\ /\\  ___\\     /\\  ___\\ /\\__  _\\/\\ \\_\\ \\ /\\  == \\/\\  ___\\   \n");
								    printf("\t        \\ \\ \\____\\ \\ \\/\\ \\\\ \\___  \\    \\ \\ \\____\\/_/\\ \\/\\ \\____ \\\\ \\  _-/\\ \\  __\\   \n");
								    printf("\t         \\ \\_____\\\\ \\_____\\\\/\\_____\\    \\ \\_____\\  \\ \\_\\ \\/\\_____\\\\ \\_\\   \\ \\_____\\ \n");
								    printf("\t          \\/_____/ \\/_____/ \\/_____/     \\/_____/   \\/_/  \\/_____/ \\/_/    \\/_____/ \n");
									
									Sleep(500);
									if(cont=45)
									{
										b=false;
									}
								}
							}
						}
					}
				}
			}
			
		}
	
		cont++;
		
	}
	}while(b==true);
    
}
int menuprin ()
{
	system("color 0c");
	
  	int opcion = -1;	
  
 	printf("\tMenu principal");
	printf("\n\t========================\n");
	
	
	printf("\n\t1.- Modulo Consultorio Veterinario");
	printf("\n\t2.- Modulo del Asistente");
	printf("\n\t3.- Modulo Administracion");
	printf("\n\n");
	printf("\n\t4- Cerrar la aplicacion.");

	printf("\n\n\tIngrese la opcion: ");
	scanf("%d", &opcion);
  	
  return opcion;
}
int modadmin ()
{
	system("color 09");
  	int opcion = -1;	
  
 	printf("\tModulo Administracion");
	printf("\n\t========================\n");
	
	
	printf("\n\t1.- Registrar Veterinario");
	printf("\n\t2.- Registrar Usuario Asistente");
	printf("\n\t3.- Atenciones por Veterinarios");
	printf("\n\t4.- Ranking de Veterinarios por Atenciones");
	printf("\n\n");
	printf("\n\t5.- Cerrar la aplicacion.");
	printf("\n\n\tIngrese la opcion: ");
	scanf("%d", &opcion);
  	
  return opcion;
}
int modconsul ()
{
	system("color 03");
  	int opcion = -1;	
  
 	printf("\tModulo Consultorio Veterinario");
	printf("\n\t========================\n");
	
	
	printf("\n\t1.- Iniciar Sesion");
	printf("\n\t2.- Visualizar Lista de Espera de Turnos (informe)");
	printf("\n\t3.- Registrar Evolucion de la Mascota");
	printf("\n\n");
	printf("\n\t4- Cerrar la aplicacion.");

	printf("\n\n\tIngrese la opcion: ");
	scanf("%d", &opcion);
  	
  return opcion;
}
int modasis (bool sesionInic)
{
	system("color 0b");
  	int opcion = -1;	
  
 	printf("\tModulo del Asistente");
	printf("\n\t========================\n");
	
	if(sesionInic == false){
		printf("\n\t1.- Iniciar Sesion");
	}
	
	printf("\n\t2.- Registrar Mascota");
	printf("\n\t3.- Registrar Turno");
	printf("\n\t4.- Listado de Atenciones por Veterinario y Fecha");
	printf("\n\n");
	printf("\n\t5.- Cerrar la aplicacion.");
	printf("\n\n\tIngrese la opcion: ");
	scanf("%d", &opcion);
  	
  return opcion;
}
void login (FILE *user , usuario u)
{
	
	char iniu[10], inic[10];
	bool b1, b2;
	
	user=fopen("Usuarios.dat","r+b");
	
	
	printf("\nINICIO DE SESION");
	printf("\nUsuario: ");
	_flushall();
	gets(iniu);
	
	b1=false; b2=false;
	while(b1==false)
	{
		rewind(user);
		fread(&u,sizeof(usuario),1,user);
		while(!feof(user))
		{
			if(strcmp(iniu,u.usu)==0)
			{
				b1=true;
			}
			else
			{
				b1=false;
			}
			fread(&u,sizeof(usuario),1,user);
		}
		
		if(b1==false)
		{
			printf("\nEl nombre de usuario ingresado no esta registrado, por favor digite otro: ");
			gets(iniu);
		}
		
	}
	
	printf("Contrase%ca:",164);
	_flushall();
	gets(inic);
	
	
	
	while(b2==false)
	{
		if(strcmp(inic,u.contrasenia)==0)
		{
			b2=true;
			printf("\nContrase%ca aceptada", 164);
		}
		else
		{
			b2=false;
		}
		
		if(b2==false)
		{
			printf("\nLa contrase%ca ingresada es incorrecta, por favor intente de nuevo: ");
			gets(inic);
			b2=false;
		}
	}
	
	if(b1==true && b2==true)
	{
		printf("\n\nIniciaste sesi%cn correctamente, Bienvendido %s\n",162, iniu);
	}
	
	
	
}
void regi_masc(FILE *mas , mascota m)
{

	
	mas=fopen("Mascotas.dat","a+b");
	
	
	printf("\nREGISTRACION DE MASCOTAS\n");
	printf("Apellido y nombre: ");
	_flushall();
    gets(m.apynom);
   
    printf("Domicilio: ");
    gets(m.domicilio);
    
	printf("DNI del due%co: ",164);
    scanf("%d",&m.dni);

    printf("Localidad: ");
    _flushall();
    gets(m.localidad);
    
    printf("Fecha de nacimiento:");
    	do
		{
			printf("\nDia: ");
			scanf("%d", &m.fn.dia);
			
			if(m.fn.dia<1 || m.fn.dia>31)
			{
				printf("\nDatos incorrectos, ingrese nuevamente");
				
			}
			
			
		}while(m.fn.dia<1||m.fn.dia>31);
		
		do
		{
			printf("\nMes: ");
			scanf("%d", &m.fn.mes);
			
			if(m.fn.mes<1 || m.fn.mes>12)
			{
				printf("Datos incorrectos, ingrese nuevamente");
				
			}
			
		}while(m.fn.mes<1 || m.fn.mes>12);
			
		
		do
		{
			printf("\nA%co: ", 164);
			scanf("%d", &m.fn.anio);

			if(m.fn.anio<1985 || m.fn.anio>2013)
			{
				printf("\nDatos incorrectos, ingrese nuevamente");
			}	
		}while(m.fn.anio<2005 || m.fn.anio>2020);
		
   
    printf("\nPeso (kg): ");
    scanf("%f",&m.peso);
    
    printf("\nIngrese el numero de telefono: ");
    _flushall();
	gets(m.tel);
	
    fwrite(&m,sizeof(mascota),1,mas);
    
	printf("\n-------->La mascota fue guardado correctamente<--------");
	
	fclose(mas);	
	
}
void turno_masc(FILE *mas ,FILE *tur , FILE *vet , turnos t , veterinario v, mascota m)
{
	
	bool band= false;
	
	mas=fopen("Mascotas.dat","r+b");
	tur=fopen("turnos.dat","a+b");
	vet=fopen("Veterinarios.dat","r+b");
					
	printf("\nREGISTRO DE TURNO\n");
	
	do{
		
		printf("Matricula del veterinario: ");
		scanf("%d",&t.mat);
		
		rewind(vet);
		
		fread(&v,sizeof(veterinario),1,vet);
		
		do{
			
			if( t.mat == v.matricula){
				
				band = true;
				fread(&v,sizeof(veterinario),1,vet);
			}
			
			else{
				fread(&v,sizeof(veterinario),1,vet);
			}

		}while(!feof(vet));
		
		if(band == false){
			
			printf("\nLa matricula ingresada no existe, por favor ingrese una matricula existente...\n\n");
			
		}

		
	}while(band == false);
	

	printf("\nFecha:\n");
	do
		{
			printf("\n--->Dia: ");
			scanf("%d", &t.fec.dia);
			
			if(t.fec.dia<1 || t.fec.dia>31)
			{
				printf("\nDatos incorrectos, ingrese nuevamente");
				
			}
			
			
		}while(t.fec.dia<1||t.fec.dia>31);
		
		do
		{
			printf("\n--->Mes: ");
			scanf("%d", &t.fec.mes);
			
			if(t.fec.mes<1 || t.fec.mes>12)
			{
				printf("Datos incorrectos, ingrese nuevamente");
				
			}
			
		}while(t.fec.mes<1 || t.fec.mes>12);
			
		
		do
		{
			printf("\n--->A%co: ",164);
			scanf("%d", &t.fec.anio);

			if(t.fec.anio<1985 || t.fec.anio>2013)
			{
				printf("\nDatos incorrectos, ingrese nuevamente");
			}	
		}while(t.fec.anio<2020 || t.fec.anio>2020);
		
	printf("\nIngrese DNI: ");
	scanf("%d",&t.dni);
	
	printf("\nIngrese Apellido y Nombre: ");
	_flushall();
	gets(t.apynom);

	fwrite(&t,sizeof(turnos),1,tur);	
	
	printf("\nEl turno fue guardado correctamente\n");
	
	fclose(tur);
	
}
void List_aten_vet(FILE *vet , FILE *tur , FILE *mas , veterinario v , turnos t , mascota m)
{
	char auxvet[40];
	
	int i=1;
	bool band = false;
	
	vet=fopen("Veterinarios.dat","r+b"); 
	
	tur=fopen("turnos.dat","r+b");

	printf("\nListado de Atenciones por Veterinario y Fecha\n");
	
	rewind(tur);
	rewind(vet);
	
	fread(&v,sizeof(veterinario),1,vet);
	
	fread(&t,sizeof(turnos),1,tur);
	
	while(!feof(vet))
	{
		
			printf("\n Veterinario ---> %s" , v.apynom);
	
			while(!feof(tur)){
				
				if(v.matricula == t.mat){
					
					
					printf("\n Turno numero %d \n" , i);
					printf("\n --------- \n");
					printf("\nFecha:");
					printf("\n\tDia: %d", t.fec.dia);
					printf("\n\tMes: %d", t.fec.mes);
					printf("\n\tA%co: %d",164, t.fec.anio);
					printf("\nDNI del dueño: %d", t.dni);
					printf("\n --------- \n");
					i++;
					
					fread(&t,sizeof(turnos),1,tur);
				}
				else{
					
					fread(&t,sizeof(turnos),1,tur);	
					
				}
					
			}
			
			i=1;
			
			printf("\n ========================= \n");
			printf("\n ========================= \n");
			
			rewind(tur);
			fread(&v,sizeof(veterinario),1,vet);
							
	}

	printf("\n\n");
	system("pause");
	system("cls");

}
void funcvet(veterinario v,FILE *vet)
{
	
	bool aceptar, band;
	vet=fopen("Veterinarios.dat","a+b");
	printf("REGISTRAR VETERINARIO\n");
	
	printf("Ingrese su apellido y nombre: ");
	_flushall();
	gets(v.apynom);

	printf("\nIngrese su numero de matricula: ");
	scanf("%d",&v.matricula);
	printf("\nIngrese la contrase%ca para el veterinario, debe cumplir con las siguientes caracteristicas: \na) Poseer al menos, una letra mayuscula, una minuscula y un numero\nb) No debe poseer caracteres de puntuacion, solo letras y numeros\nc) De entre al menos 6 y 32 caracteres\nd) No debe tener mas de 3 numeros consecutivos\ne) No debe contener 2 caracteres que se refieran a letras alfabeticamente consecutivas (ascendentes)\nIngrese la contrase%ca: ",164,164);
	_flushall();
	gets(v.contrasenia);
	aceptar=false;
	while(aceptar==false){

		if(strstr(v.contrasenia,"Q")==NULL &&strstr(v.contrasenia,"W")==NULL && strstr(v.contrasenia,"E")==NULL && strstr(v.contrasenia,"R")==NULL && strstr(v.contrasenia,"T")==NULL && strstr(v.contrasenia,"Y")==NULL && strstr(v.contrasenia,"U")==NULL && strstr(v.contrasenia,"I")==NULL && strstr(v.contrasenia,"O")==NULL && strstr(v.contrasenia,"P")==NULL && strstr(v.contrasenia,"A")==NULL && strstr(v.contrasenia,"S")==NULL && strstr(v.contrasenia,"D")==NULL && strstr(v.contrasenia,"F")==NULL && strstr(v.contrasenia,"G")==NULL && strstr(v.contrasenia,"H")==NULL && strstr(v.contrasenia,"J")==NULL && strstr(v.contrasenia,"K")==NULL && strstr(v.contrasenia,"L")==NULL && strstr(v.contrasenia,"Ñ")==NULL && strstr(v.contrasenia,"Z")==NULL && strstr(v.contrasenia,"X")==NULL && strstr(v.contrasenia,"C")==NULL && strstr(v.contrasenia,"V")==NULL && strstr(v.contrasenia,"B")==NULL && strstr(v.contrasenia,"N")==NULL && strstr(v.contrasenia,"M")==NULL)
		{
			printf("La contrase%ca no posee mayuscula, ingrese de nuevo la contrase%ca: ",164,164);
			_flushall;
			gets(v.contrasenia);
		}
		else
		{
			if(strstr(v.contrasenia,"q")==NULL &&strstr(v.contrasenia,"w")==NULL && strstr(v.contrasenia,"e")==NULL && strstr(v.contrasenia,"r")==NULL && strstr(v.contrasenia,"t")==NULL && strstr(v.contrasenia,"y")==NULL && strstr(v.contrasenia,"u")==NULL && strstr(v.contrasenia,"i")==NULL && strstr(v.contrasenia,"o")==NULL && strstr(v.contrasenia,"p")==NULL && strstr(v.contrasenia,"a")==NULL && strstr(v.contrasenia,"s")==NULL && strstr(v.contrasenia,"d")==NULL && strstr(v.contrasenia,"f")==NULL && strstr(v.contrasenia,"g")==NULL && strstr(v.contrasenia,"h")==NULL && strstr(v.contrasenia,"j")==NULL && strstr(v.contrasenia,"k")==NULL && strstr(v.contrasenia,"l")==NULL && strstr(v.contrasenia,"ñ")==NULL && strstr(v.contrasenia,"z")==NULL && strstr(v.contrasenia,"x")==NULL && strstr(v.contrasenia,"c")==NULL && strstr(v.contrasenia,"v")==NULL && strstr(v.contrasenia,"b")==NULL && strstr(v.contrasenia,"n")==NULL && strstr(v.contrasenia,"m")==NULL)
			{
				printf("La contrase%ca no posee minuscula, ingrese de nuevo la contrase%ca: ",164,164);
				_flushall;
				gets(v.contrasenia);
			}
			else
			{
				if(strstr(v.contrasenia,"0")==NULL && strstr(v.contrasenia,"1")==NULL && strstr(v.contrasenia,"2")==NULL && strstr(v.contrasenia,"3")==NULL && strstr(v.contrasenia,"4")==NULL && strstr(v.contrasenia,"5")==NULL && strstr(v.contrasenia,"6")==NULL && strstr(v.contrasenia,"7")==NULL && strstr(v.contrasenia,"8")==NULL && strstr(v.contrasenia,"9")==NULL)
				{
					printf("La contrase%ca no posee numeros, ingrese de nuevo la contrase%ca: ",164,164);
					_flushall;
					gets(v.contrasenia);
				}
				else
				{
					if(strstr(v.contrasenia,",")!=NULL && strstr(v.contrasenia,".")!=NULL && strstr(v.contrasenia,"-")!=NULL && strstr(v.contrasenia,"á")!=NULL && strstr(v.contrasenia,"é")!=NULL && strstr(v.contrasenia,"í")!=NULL && strstr(v.contrasenia,"ó")!=NULL && strstr(v.contrasenia,"ú")!=NULL && strstr(v.contrasenia,",")!=NULL && strstr(v.contrasenia,"Á")!=NULL && strstr(v.contrasenia,"É")!=NULL && strstr(v.contrasenia,"Í")!=NULL && strstr(v.contrasenia,"Ó")!=NULL && strstr(v.contrasenia,"Ú")!=NULL)
					{
						printf("La contrase%ca posee signos de puntuacion, ingrese de nuevo la contrase%ca: ",164,164);
						_flushall;
						gets(v.contrasenia);
					}
					else
					{
						if(strlen(v.contrasenia)<6)
						{
							printf("La contrase%ca es muy corta, ingrese de nuevo la contrase%ca: ",164,164);
							_flushall;
							gets(v.contrasenia);
						}
						else
						{
							if(strlen(v.contrasenia)>32)
							{
								printf("La contrase%ca es muy larga, ingrese de nuevo la contrase%ca: ",164,164);
								_flushall;
								gets(v.contrasenia);
							}
							else
							{
								for(int i=0;i<strlen(v.contrasenia);i++)
								{
									if((v.contrasenia[i+2]==v.contrasenia[i+1]+1) && (v.contrasenia[i+1]==v.contrasenia[i]+1))
									{
										printf("No ingrese numeros ni letras consecutivos, ingrese de nuevo la contrase%ca: ",164);
										_flushall();
										gets(v.contrasenia);
									}
									else
									{
										aceptar=true;
									}
								}								
								if(aceptar==true)
								{
									printf("\nContrase%ca aceptada\n",164);
									
								}
							}
						}
					}
				}
			}
		}
	}
	
	fwrite(&v,sizeof(veterinario),1,vet);
}
