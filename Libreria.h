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
void funcus(usuario u, FILE *user)
{
		int aceptar;
		system("cls");
		int cm=0, cn=0;
		bool b1, b2 , b3, b4, b5;
		char aux[20];
		user=fopen("Usuarios.dat","a+b");
		printf("\nREGISTRAR USUARIO ASISTENTE\n\n");
		printf("Nombre de usuario \n-Tiene que comenzar con una letra minuscula\n-Debe tener al menos 2 mayusculas\n-No debe tener mas de 3 digitos: ");
		_flushall();
		gets(aux);
		b1=false; 
		b2=false;
		b3=false; 
		b4=false; 
		b5=false; 
		
    	while(b1==false && b2==false && b3==false && b4==false && b5==false)
		{
			
			if(aux[0]=='q' ||	aux[0]=='w' || aux[0]=='e' || aux[0]=='r' || aux[0]=='t' || aux[0]=='y' || aux[0]=='u' || aux[0]=='i' || aux[0]=='o' || aux[0]=='p' || aux[0]=='a' || aux[0]=='s' || aux[0]=='d' || aux[0]=='f' || aux[0]=='g' || aux[0]=='h' || aux[0]=='j' || aux[0]=='k' || aux[0]=='l' || aux[0]=='ñ' || aux[0]=='z' || aux[0]=='x' || aux[0]=='c' || aux[0]=='v' || aux[0]=='b' || aux[0]=='n' || aux[0]=='m'){
				b2=true;
			}
			else{
				b2=false;
				printf("\nEl nombre no comienza con minuscula, por favor digite otro: \n");
				gets(aux);
				
			}
																									
			for(int i=0;i<20;i++){
				if(aux[i]=='A'||aux[i]=='B'||aux[i]=='C'||aux[i]=='D'||aux[i]=='E'||aux[i]=='F'||aux[i]=='G'||aux[i]=='H'||aux[i]=='I'||aux[i]=='J'||aux[i]=='K'||aux[i]=='L'||aux[i]=='M'||aux[i]=='N'||aux[i]=='O'||aux[i]=='P'||aux[i]=='Q'||aux[i]=='R'||aux[i]=='S'||aux[i]=='T'||aux[i]=='U'||aux[i]=='V'||aux[i]=='W'||aux[i]=='X'||aux[i]=='Y'||aux[i]=='Z'){
					cm++;
				}
			}
			if(cm<2){
				printf("\nNo posee 2 mayusculas o mas, por favor digite otro:  \n");
				gets(aux);
				b3=false;
			}
			else{
				b3=true;
			}
			
			for(int i=0;i<20;i++){
				if(aux[i]=='1'){
					cn++;
				}
				else{
					if(aux[i]=='2'){
						cn++;
					}
					else{
						if(aux[i]=='3'){
							cn++;
						}
						else{
							if(aux[i]=='4'){
								cn++;	
				   			}
				   			else{
				   				if(aux[i]=='5'){
				   					cn++;
							    }
							    else{
							    	if(aux[i]=='6'){
							    		cn++;
									}
									else{
										if(aux[i]=='7'){
											cn++;
										}
										else{
											if(aux[i]=='8'){
												cn++;
											}
											else{
												if(aux[i]=='9'){
													cn++;
												}
												else{
													if(aux[i]=='0'){
														cn++;
													}
												}
											}
										}
									}
								}
						    }
						}
					}
				}
			}
			
			if(cn>3){
				printf("\nEl maximo de numeros permitidos es 3, por favor digite otro: \n",cn);
				gets(aux);
				b4=false;
			}
			else{
				b4=true;
			}
			if(strlen(aux)>10 || strlen(aux)<6){
				printf("\nEl tama%co del nombre no es valido, por favor digite otro: \n",164);
				gets(aux);
				b5=false;
			}
			else{
				b5=true;
			}
			
			rewind(user);
			fread(&u,sizeof(usuario),1,user);
			
			while(!feof(user))
			{
				if(strcmp(aux,u.usu)==0)
				{
					printf("\nEste nombre de usuario ya existe, por favor digite otro: \n");
					gets(aux);
					b1=false;
					fread(&u,sizeof(usuario),1,user); 
					
				}
				else{
					b1=true;
					fread(&u,sizeof(usuario),1,user); 
				}
			}
		} 
		
		printf("\nIngrese la contrase%ca para el usuario, debe cumplir con las siguientes caracteristicas: \na) Poseer al menos, una letra mayuscula, una minuscula y un numero\nb) No debe poseer caracteres de puntuacion, solo letras y numeros\nc) De entre al menos 6 y 32 caracteres\nd) No debe tener mas de 3 numeros consecutivos\ne) No debe contener 2 caracteres que se refieran a letras alfabeticamente consecutivas (ascendentes)\nIngrese la contrase%ca: ",164,164);
		_flushall();
		gets(u.contrasenia);
		aceptar=false;
		
		while(aceptar==false){
		if(strstr(u.contrasenia,"Q")==NULL && strstr(u.contrasenia,"W")==NULL && strstr(u.contrasenia,"E")==NULL && strstr(u.contrasenia,"R")==NULL && strstr(u.contrasenia,"T")==NULL && strstr(u.contrasenia,"Y")==NULL && strstr(u.contrasenia,"U")==NULL && strstr(u.contrasenia,"I")==NULL && strstr(u.contrasenia,"O")==NULL && strstr(u.contrasenia,"P")==NULL && strstr(u.contrasenia,"A")==NULL && strstr(u.contrasenia,"S")==NULL && strstr(u.contrasenia,"D")==NULL && strstr(u.contrasenia,"F")==NULL && strstr(u.contrasenia,"G")==NULL && strstr(u.contrasenia,"H")==NULL && strstr(u.contrasenia,"J")==NULL && strstr(u.contrasenia,"K")==NULL && strstr(u.contrasenia,"L")==NULL && strstr(u.contrasenia,"Ñ")==NULL && strstr(u.contrasenia,"Z")==NULL && strstr(u.contrasenia,"X")==NULL && strstr(u.contrasenia,"C")==NULL && strstr(u.contrasenia,"V")==NULL && strstr(u.contrasenia,"B")==NULL && strstr(u.contrasenia,"N")==NULL && strstr(u.contrasenia,"M")==NULL)
		{
			printf("\nLa contrase%ca no posee mayuscula, ingrese de nuevo \n",164);
			_flushall;
			gets(u.contrasenia);
		}
		else
		{
			if(strstr(u.contrasenia,"q")==NULL && strstr(u.contrasenia,"w")==NULL && strstr(u.contrasenia,"e")==NULL && strstr(u.contrasenia,"r")==NULL && strstr(u.contrasenia,"t")==NULL && strstr(u.contrasenia,"y")==NULL && strstr(u.contrasenia,"u")==NULL && strstr(u.contrasenia,"i")==NULL && strstr(u.contrasenia,"o")==NULL && strstr(u.contrasenia,"p")==NULL && strstr(u.contrasenia,"a")==NULL && strstr(u.contrasenia,"s")==NULL && strstr(u.contrasenia,"d")==NULL && strstr(u.contrasenia,"f")==NULL && strstr(u.contrasenia,"g")==NULL && strstr(u.contrasenia,"h")==NULL && strstr(u.contrasenia,"j")==NULL && strstr(u.contrasenia,"k")==NULL && strstr(u.contrasenia,"l")==NULL && strstr(u.contrasenia,"ñ")==NULL && strstr(u.contrasenia,"z")==NULL && strstr(u.contrasenia,"x")==NULL && strstr(u.contrasenia,"c")==NULL && strstr(u.contrasenia,"v")==NULL && strstr(u.contrasenia,"b")==NULL && strstr(u.contrasenia,"n")==NULL && strstr(u.contrasenia,"m")==NULL)
			{
				printf("\nLa contrase%ca no posee minuscula, ingrese de nuevo\n",164);
				_flushall;
				gets(u.contrasenia);
			}
			else
			{
				if(strstr(u.contrasenia,"0")==NULL && strstr(u.contrasenia,"1")==NULL && strstr(u.contrasenia,"2")==NULL && strstr(u.contrasenia,"3")==NULL && strstr(u.contrasenia,"4")==NULL && strstr(u.contrasenia,"5")==NULL && strstr(u.contrasenia,"6")==NULL && strstr(u.contrasenia,"7")==NULL && strstr(u.contrasenia,"8")==NULL && strstr(u.contrasenia,"9")==NULL)
				{
					printf("\nLa contrase%ca no posee numeros, ingrese de nuevo \n",164);
					_flushall;
					gets(u.contrasenia);
				}
				else
				{
					if(strstr(u.contrasenia,",")!=NULL && strstr(u.contrasenia,".")!=NULL && strstr(u.contrasenia,"-")!=NULL && strstr(u.contrasenia,"á")!=NULL && strstr(u.contrasenia,"é")!=NULL && strstr(u.contrasenia,"í")!=NULL && strstr(u.contrasenia,"ó")!=NULL && strstr(u.contrasenia,"ú")!=NULL && strstr(u.contrasenia,",")!=NULL && strstr(u.contrasenia,"Á")!=NULL && strstr(u.contrasenia,"É")!=NULL && strstr(u.contrasenia,"Í")!=NULL && strstr(u.contrasenia,"Ó")!=NULL && strstr(u.contrasenia,"Ú")!=NULL)
					{
						printf("\nLa contrase%ca posee signos de puntuacion, ingrese de nuevo \n",164);
						_flushall;
						gets(u.contrasenia);
					}
					else
					{
						if(strlen(u.contrasenia)<6)
						{
							printf("\nLa contrase%ca es muy corta, ingrese de nuevo \n",164);
							_flushall;
							gets(u.contrasenia);
						}
						else
						{
							if(strlen(u.contrasenia)>32)
							{
								printf("\nLa contrase%ca es muy larga, ingrese de nuevo \n",164);
								_flushall;
								gets(u.contrasenia);
							}
							else
							{
								for(int i=0;i<strlen(u.contrasenia);i++)
								{
									if((u.contrasenia[i+2]==u.contrasenia[i+1]+1) && (u.contrasenia[i+1]==u.contrasenia[i]+1))
									{
										printf("\nNo ingrese numeros ni letras consecutivos, ingrese de nuevo la contrase%ca: \n",164);
										_flushall();
										gets(u.contrasenia);
									}
									else
									{
										aceptar=true;
									}
								}								
								if(aceptar==true)
								{
									printf("Contrase%ca aceptada",164);
									
								}
							}
						}
					}
				}
			}
		}
	}
		
	strcpy(u.usu,aux);
	fwrite(&u,sizeof(usuario),1,user);
	printf("\nEl usuario asistente fue guardado correctamente\n");
	fclose(user);
}
void funcat(turnos t, veterinario v, char auxvet[80],FILE *tur,FILE *vet)
{
	int i=1;
	bool band = false;
	bool b=false;
	vet=fopen("Veterinarios.dat","r+b"); 
	
	tur=fopen("turnos.dat","r+b");

	if(vet==NULL || tur==NULL)
	{
		printf("\nERROR!!!. El archivo es inexistente...");
		b=true;
	}
	
	if(b==false)
	{
		printf("\nATENCIONES POR VETERINARIOS\n");
		_flushall();
		
		printf("\nVeterinario: ");
		
		gets(auxvet);
		
		rewind(tur);
		rewind(vet);
		
		fread(&v,sizeof(veterinario),1,vet);
		
		fread(&t,sizeof(turnos),1,tur);
		
		while(!feof(vet) && band == false)
		{
			if(strcmp(auxvet , v.apynom) == 0)
			{
				while(!feof(tur))
				{
			
					if(v.matricula == t.mat)
					{
					
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
					else
					{
					
						fread(&t,sizeof(turnos),1,tur);	
					
					}
				
						band = true;		
	
				}
			}
			else
			{
				
				fread(&v,sizeof(veterinario),1,vet);
				
			}
										
		}
		
		if(band == false){
			
			printf ("El veterinario no existe");
		
		}
	
			
		
	}
	
	printf("\n\n");
	system("pause");
	system("cls");
	
}
void funcrank(FILE *tur , FILE *vet , turnos t , veterinario v)
{
	int i=0 , may = -1  , vueltas = 0;
	char umay[70];
	bool b=true;
	vet=fopen("Veterinarios.dat","r+b");
	
	tur=fopen("turnos.dat","r+b");
	
	if(vet==NULL || tur==NULL)
	{
		printf("\nERROR!!!. El archivo es inexistente");
		b=false;
		
	}
	
	rewind(tur);
	rewind(vet);
	
	fread(&v,sizeof(veterinario),1,vet);
	fread(&t,sizeof(turnos),1,tur);
	if(b==true)
	{
		while(!feof(vet))
		{
			
			while(!feof(tur)){
				
				if(v.matricula == t.mat){
				
					i++;
					
					fread(&t,sizeof(turnos),1,tur);
				}
				else{
					
					fread(&t,sizeof(turnos),1,tur);	
				}
				
				v.cantida = i;
				
			}	
	
			if(v.cantida>may)
			{
				
				may=v.cantida;
				
				strcpy(umay,v.apynom);
				
			}
			fread(&v,sizeof(veterinario),1,vet);
			rewind(tur);
		
			i = 0;
			vueltas++;
					
		}				
		
		rewind(vet);
		fread(&v,sizeof(veterinario),1,vet);				
		printf("\nEl veterinario que registro mas mascotas es: %s con %d mascotas\n", umay, may);	
		
	}
}
