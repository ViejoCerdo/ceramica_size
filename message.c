#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>


float opBox(float largo, float ancho, int undBox, float area);
float obDatos(float *largo, float *ancho, int *undBox, float *area, float resultado);
int nroVal(const char *str);

void menuintro();
void mainMenu();

int main(){

    int undBox, opcion;
    float area, resultado, largo , ancho;

    printf("\033[8;100;40"); 
    menuintro();

     do{

        printf("\n \n \n-------Menu-------");
        printf("\n \nIniciar calculadora[1]");
        printf("\nSalir [0]");
        printf("\n \nIngresa una opcion: ");
        scanf("%d", &opcion);

    switch(opcion){
        case 1:
            system("clear");  // system("cls") en Windows
            obDatos(&largo, &ancho, &undBox, &area, resultado);

            resultado = opBox(largo, ancho, undBox, area);
            printf("La cantidad de cajas requeridas son : %.0f", resultado);

            break;

        case 0:
            printf("Saliendo del programa. \n");
            return 0;
            break;

        default:
            printf("Opcion no valida, ingrese una de las opciones validas");
            break;

        }

    } while(opcion != 0);


        return 0;

}


float obDatos(float *largo, float *ancho, int *undBox, float *area, float resultado){

    char input[100];

    do{
        printf("\n \n \nIngresa la medida de la zona a cubrir(medida en m2 ej: 20.0): ");
        scanf("%s", input);

        if(!nroVal(input)){
            printf("Entrada no valida. Por favor ingresar un numero. \n");
        }
    }while (!nroVal(input));

    *area = atof(input);

    do{
        printf("Ingresa el largo de la ceramica(medida en cm ej: 30.0): ");
        scanf("%s", input);

        if(!nroVal(input)){
            printf("Entrada no valida. Por favor ingresar un numero. \n");
        }
    }while (!nroVal(input));

    *largo = atof(input);
    
    do{
        printf("Ingresa el ancho de la ceramica(medida en cm ej: 30.0): ");
        scanf("%s", input);

        if(!nroVal(input)){
            printf("Entrada no valida. Por favor ingresar un numero. \n");
        }
    }while (!nroVal(input));

    *ancho = atof(input);
    
    do{
        printf("Cantidad de ceramicas que vienen en la caja: ");
        scanf("%s", input);

        if(!nroVal(input)){
            printf("Entrada no valida. Porfavor ingresar un numero. \n");
        }
    }while(!nroVal(input));

    *undBox = atof(input);

    return opBox(*largo, *ancho, *undBox, *area);;
}


int nroVal(const char *str) {
    int punto = 0;


    if (*str == '-') {
        str++;
    }

    while (*str) {
        if (*str == '.') {
            if (punto) return 0; 
            punto = 1;
        } else if (!isdigit(*str)) {
            return 0; 
        }
        str++;
    }

    return 1; 
}


float opBox(float largo, float ancho, int undBox, float area){
    
    float cmxarea, totalArea;
    int cantBox;

    cmxarea = (largo / 100.0) * (ancho / 100.0);
    totalArea = (cmxarea * undBox);
    cantBox = round(area/totalArea);

    return cantBox;
}

void menuintro(){
    printf("\n+-------+-------+-------+-------+\n|       |       |       |       |\n|       |       |       |       |\n|       |       |       |       |\n+-------+-------+-------+       +\n|       |       |       |       |\n|       |       |       |       |\n|       |       |       |       |\n+-------+-------+-------+-------+\n|       |       |               |\n|       |       |               |\n|       |       |               |\n+-------+-------+-------+-------+");
    printf("\n \n \n L       OOOOO   SSSSS  EEEEE      SSSSS  III ZZZZZ  EEEEE\n L      O     O  S      E         S        I     Z   E    \n L      O     O  SSSSS  EEEEE      SSSSS   I    Z    EEEEE\n L      O     O      S  E              S   I   Z     E    \n LLLLL   OOOOO   SSSSS  EEEEE      SSSSS  III ZZZZZ  EEEEE\n");

}

void mainMenu(){
}


