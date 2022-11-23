#include <stdio.h>
#include <math.h>
#define M 100

void ingresardatos(float tc[])
{
printf("\nIngrese el numero de horas laboradas diarias: ");
scanf("%f",&tc[0]);
printf("\n");
printf("Ingrese el costo por hora de trabajo: ");
scanf("%f",&tc[1]);
printf("\n");
}
void calculo(float tc[])
{
float iva=0.16,retencion=0.12;
tc[2]=tc[0]*tc[1];
tc[2]=tc[2]+tc[2]*iva;
tc[2]=tc[2]-tc[2]*retencion;
tc[2]=tc[2]*20;
printf("$%.2f MXN. ",tc[2]);
}
void bono(float tc[])
{
if(tc[2]<10000.00)
{
tc[2]=tc[2]*1.05;
printf("\nMas un bono de 05 por ciento: $%.2f MXN.",tc[2]);
}
}

void ingresardatos();void calculo();void bono();
 int salarios()
{
float tc[3];
char rep='a';
printf("\t\tCalculadora de salarios\n");
while(rep!='s')
{
ingresardatos(tc);
printf("\nEl salario mensual es: ");
calculo(tc);
bono(tc);
printf("\n\nDesea realizar otro calculo de salarios: continuar[Enter] salir[s]: ");
getchar();
scanf("%c",&rep);
}
return 0;
}

int factorial(int n);
int facts()
{
	int fact;
	int n;
	printf("Dame un numero: ");
	scanf("%i",&n);
	fact=factorial(n);
	printf("El factorial: %i\n",fact);
	return 0;
}
int factorial(int n)
{
	int f;
	if(n==0) f=1; //se dice que si n=0 la variable f toma el valor de 0
	else
	{
		f=n*factorial(n-1);//se multiplica el número dado por el usuario por el factorial y se le resta 1 a n hasta que valga 0

	}
	return f;//se manda a llamar a si misma la función

}




void valor(int a[][10],int filas,int columnas)
//se mandan a llamas a las variables declaradas en el main
{
int i;
        for(i=0;i<filas;i++)//acomodo de filas de la matriz a
        {
        int j;
                for(j=0;j<columnas;j++)//acomodo de filas de la matriz a
                {
                    printf("Ingrese el valor [%i][%i] de la matirz A: ",i,j);//el acomodo correspondiente
                    scanf("%i",&a[i][j]);
                }
        }
        printf("La matriz A se definio como:\n");
for(i=0;i<filas;i++)//acomodo de filas de la matriz b
        {
        int j;
                for(j=0;j<columnas;j++)//acomodo de columnas de la matriz b
                {
                    printf("%i\t",a[i][j]);
                }
        printf("\n");
        }
}
void transp(int a[][10],int b[][10],int filas,int columnas)
//se mandan a llamar a las matrices declaradas en el main
{
    printf("La matriz At es igual a:\n");//nos muestra ya la matriz transpuesta
    int i;    
for(i=0;i<columnas;i++)//acomodo de las columnas
        {
        int j;
                for(j=0;j<filas;j++)//acomodo de las filas
                {
                        b[i][j]=a[j][i];//se indica como se intercambian los valor de i de la primer matriz por j en la segunda y viceversa
                        printf("%i\t",b[i][j]);//se imprime la transpuesta
                }
                        printf("\n");
        }
}
int matriztrans()
{
        int filas,columnas;//se declaran 2 variables como entero
        int a[10][10],b[10][10];//se declaran 2 matrices
        printf("Ingrese el numero de filas para la matriz A: ");
        scanf("%i",&filas);//introducimos cuantas filas tendra nuestra matriz
        printf("\n");
        printf("Ingrese el numero de columnas para la matriz A: ");
        scanf("%i",&columnas);//declaramos cuantas columnas tendra nuestra matriz
        printf("\n");
        valor(a,filas,columnas);//mandamos a llamar a estas funciones
        transp(a,b,filas,columnas);
        return 0;
}                                            


void dimension(int t[]){

printf("Defina las dimensiones MxM de las 3 matrices: ");//se determina de que tamaño será la función
scanf ("%i", &t[0]);//se guarda en la matriz t

}

void valormatr(int a[][M], int b[][M], int t[]){
//se mandan a llamar las variables declaradas en el main

int i;
for(i=0; i<t[0]; i++)//recorrido de filas
{

int j;
for(j=0; j<t[0];j++)//recorido de columnas
{

printf("Ingrese el valor de [%i][%i] en A: ", i, j);//se va ingresando todo en la matriz a
scanf("%i", &a[i][j]);//se va guardando dato a dato

}
}

for(i=0;i<t[0];i++)//se va ingresando todo en la matriz b
{
int j;
for(j=0; j<t[0];j++)
{

printf("Ingrese el valor de [%i][%i] en B: ", i, j);
scanf("%i", &b[i][j]);//se va guardando dato a dato

}
}

}

void multimatri(int a[][M], int b[][M], int c[][M], int t[])
//se mandan a llamar a las variables declaradas en el main aparte de unar unas constante M designada en las bibliotecas
{

printf("A*B=C\n");//la operación a realizas
int i;//el uso de los for para el acomodo correcto de las matrices visto antes también
for(i=0; i<t[0]; i++)
{

for(int j=0; j<t[0]; j++)//Toda matriz requiere 2 for, uno para filas y otro para columnas
{
int x=0;//se declara una nueva variable
for(int k=0; k<t[0]; k++)//se declara k para la matriz resultante y su correcto acomodo
{

x=x+a[i][k]*b[k][j];//se utiliza para realizar la multiplicación de las matrices
c[i][j]=x;//como a la operación de arriba se guardo en x la igualamos a la forma matricial correcta

}
printf("%i\t", c[i][j]);//la correcta forma de imprimir con el \t

}
printf("\n");

}

}


int multimatriz(){//función principal de la multiplicación de matrices

int a[M][M], b[M][M], c[M][M], t[1];//se declaran la matrices a, b, c, t

dimension(t);//se mandan a llamar a estas funciones void dentro del pertenecientes al programa
valormatr(a,b,t);
multimatri(a,b,c,t);

return 0;
}


void matrizcoe(int t,int a[][10], int b[][10]){
//se mandan a llamar a las funciones declaras en el int main
for (int i=0; i<t; i++){//empezamos con el acomodo de filas

for (int j=0; j<t; j++){//acomodo de columnas

printf("Introduce el valor del la coordenada [%i],[%i] en la matriz a: ",i, j);//se introducen los valores en la matriz a según vaya avanzando
scanf ("%i", &a[i][j]);//se introduce en la matriz a
printf("Introduce el valor del la coordenada [%i],[%i] en la matriz b: ",i, j);//se introducen los valores en la matriz b según vaya avanzando
scanf ("%i", &b[i][j]);//se introduce en la matriz b

}


}

}

void sumacoe(int t,int a[][10], int b[][10], int c[][10]){
//se utilizan las variables declaras en el int main para que sean las mismas, se mandan a llamar

for (int i=0; i<t; i++){//aquí se utilizan los for para hacer un recorrido de filas cuando se termine de declarar las columnas

for (int j=0; j<t; j++){//se declaran las columnas y cuando se cumple el ciclo avanza a la siguiente columna

c[i][j] = a[i][j] + b[i][j];



}

}

}






int sumamatriz(){//función principal del programa suma mattriz

int t, a[10][10], b[10][10], c[10][10];//asirgamos la variable t y las matrices a, b, c
printf ("De que magnitud querras tu matriz cuadrada resultante: ");//aquí se escoge de que magnitud querra la matriz
scanf ("%i", &t);//se le asigna a la variable t
matrizcoe(t,a,b);//se manda a llamar a la función matrizcoe
sumacoe(t, a, b, c);//se manda a llamar a la función sumacoe
for(int i=0; i<t; i++){//se pone el for para que el programa sepa como se imprimira la matriz, las va ordenando como filas y columnas

for(int j=0; j<t; j++){//igual este for es para complementar el acomodo

printf ("%i\t", c[i][j]);//manda a imprimir la matriz c pero antes se agrega \t para que tenga forma de matriz
}//se agregaron los for para que los acomodara de forma correcta
printf("\n");
}
return 0;
}



void farenheit(){
float c, f;
printf("Los grados celcius a convertir:  ");
    scanf("%f", &c);
    f = (c*(1.8)+32);
    printf("Los grados son: %f", f);
}

void kelvin (){
float c, k;
printf("Los grados celcius a convertir:  ");//cantidad de grados celcius a convertir
    scanf("%f", &c);//lo asignamos a esta variable
    k = (c+273.15);//operación necesaria
    printf("Los grados son: %f", k);
}

void rankine(){
float c, r;
printf("Los grados celcius a convertir:  ");//aquí asignamos la cantidad de grados celcius a convertir
    scanf("%f", &c);//lo asignamos a la variable x
    r = (((9/5)*c)+491.67);//operación necesaria
    printf("Los grados son: %f", r);
}

int conversion(){

char opc2;
printf("\na) De grados celcius a farenheit: ");
    printf("\nb) De grados celcius a kelvin: ");//aquí escogemos que parte de la función mandaremos a llamar
    printf("\nc) De grados celcius a rankine: ");
printf("\nElige una opcion: ");
    scanf("%c", &opc2);
   
    switch (opc2)
{
case 'a': farenheit();
                        break;
            case 'b': kelvin();//se repite esta función es para mandar a llamar la parte exacta del programa que necesita
                        break;
case 'c': rankine();
                        break;
}
return 0;
}


void area2//Se nombra area 2 porque ya hay una función que se parece y así la mandamos a llamar de forma correcta
(){

int a, L;
printf("Escribe la longitud del lado del cuadrado: ");
    scanf("%d", &L);
    a = (L*L);//operación necesaria para sacar el área de un cuadrado
    printf("El area del cuadrado: %d", a);
   
}

void trapecio//Se nombra area 2 porque ya hay una función que se parece y así la mandamos a llamar de forma correcta
(){

int a, L, l, h;
printf("Escribe la base mayor del trapecio: ");
    scanf("%d", &L);
    printf("Escribe la base menor del trapecio: ");
    scanf("%d", &l);
    printf("Escribe la altura del trapecio: ");
    scanf("%d", &h);
    a = ((L*l)/2)*h;//operación necesaria para sacar el área de un cuadrado
    printf("El area del trapecio es: %d", a);
   
}

void rectangulo//Se nombra area 2 porque ya hay una función que se parece y así la mandamos a llamar de forma correcta
(){

int a, L,l;
printf("Escribe la base del reactangulo: ");
    scanf("%d", &L);
    printf("Escribe la altura del reactangulo: ");
    scanf("%d", &l);
    a = (L*l);//operación necesaria para sacar el área de un cuadrado
    printf("El area del rectangulo es: %d", a);
   
}

int cuadrado ()//Función principal del programa cuadrado
{
        char opc;
        printf("\na) area de un cuadrado: ");
        printf("\nb) area de un rectangulo: ");
        printf("\nc) area de un trapecio: ");
        printf("\nElige una opcion: ");//se repite esta función es para mandar a llamar la parte exacta del programa que necesita
        scanf("%c", &opc);

       
switch(opc)
        {
                case 'a': area2();
                        break;

                case 'b': rectangulo();
                        break;
                case 'c': trapecio();
                        break;

        }
        return 0;
}

void hipotenusa()
{

        int co, ca;
        float h;
        printf("Escribe la longitud del cateto adyacente: ");
        scanf("%d",&ca);//guarda el valor del cateto adyacente
        printf("Escribe la longitud del cateto opuesto: ");
        scanf("%d",&co);//guarda el valor del cateto opuesto
        h = sqrt((co*co)+(ca*ca));//operación necesaria para sacar la hipotenusa
        printf("La hipotenusa mide: %f ",h);
}

void area1() //función de área del triangulo
{

        int base, alt; //las variables que se necesitan para el programa
        float a;
        printf("Escribe la base: ");
        scanf("%d", &base);//guardamos el valor de la base
        printf("Escribe la altura: ");
        scanf("%d", &alt);//guardamos el valor de la altura
        a = (base*alt)/2;//la operación necesaria para el area
        printf("El area del triangulo es: %f", a);
}

void angulo()
{

        float a1, a2, a3;
        printf("Escribe el valor de los 2 angulos: ");
        scanf("%f%f", &a1,&a2);// se guardan los 2 valores de los angulos
        a3 = 180-(a1+a2);//aquí se hace la operación necesaria para sacar el tercer angulo
        printf("El tercer angulo mide: %f", a3);
}
int triangulo() //esta es la función principal del programa triangulo
{
        char opc1; //De igual manera aquí hacemos una variable char
        printf("\na) Hipotenusa de un triangulo rectangulo: "); //aquí están las opciones para el programa triangulo
        printf("\nb) area de un triangulo: ");
        printf("\nc) tercer angulo de un triangulo: ");
        printf("\nElige una opcion: ");
        scanf("%c", &opc1);
       

        switch(opc1) //esta función es para mandar a llamar la parte exacta del programa que necesita
        {
                case 'a': hipotenusa();
                        break;

                case 'b': area1();
                        break;
                case 'c': angulo();
                        break;
        }
        return 0;
}

//Aquí se encuentra el menú principal para la elección del programa a ejecutar


int main ()
{
        char opc; // se declara una variable tipo char para la opción que elijamos se guarde en opc
        printf("\nElija un programa : "); //todos
        printf("\na) Programa triangulo : ");
        printf("\nb) Programa cuadrado : ");
        printf("\nc) Programa conversion grados : ");
        printf("\nd) Programa suma matriz : ");
        printf("\ne) Programa multiplicacion de matriz : ");
        printf("\nf) Programa matriz transpuesta : ");
        printf("\ng) Programa factorial : ");
        printf("\nh) Programa salarios : ");
        scanf("%c", &opc);
        getchar();

        switch(opc)
        {
                case 'a': triangulo();
                        break;
                case 'b': cuadrado();
                        break;
                case 'c': conversion();
                        break;
                case 'd': sumamatriz();
                        break;
                case 'e': multimatriz();
                        break;
                case 'f': matriztrans();
                        break;
                case 'g': facts();
                        break;
                case 'h': salarios();
                        break;
        }
        return 0;
}
