#include <stdio.h>
#include <math.h>
#include <stdlib.h>
float opBox(float largo, float ancho, int undBox, float area);
void menuintro();
void mainMenu();
int main(){

    int undBox, opcion;
    float area, resultado, largo , ancho;

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
            printf("\n \n \nIngresa la medida de la zona a cubrir(medida en m2 ej: 20.0): ");
            scanf("%f", &area);
            printf("Ingresa el largo de la ceramica(medida en cm ej: 30.0): ");
            scanf("%f", &largo);
            printf("Ingresa el ancho de la ceramica(medida en cm ej: 30.0): ");
            scanf("%f", &ancho);
            printf("Cantidad de ceramicas que vienen en la caja: ");
            scanf("%d", &undBox);

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


float opBox( float largo, float ancho, int undBox, float area){
    
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


