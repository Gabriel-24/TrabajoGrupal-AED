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
