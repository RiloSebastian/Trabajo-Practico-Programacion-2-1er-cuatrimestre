#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#include "validaciones.h"
#define TAM 20
#define OCUPADO 1
#define LIBRE 0

int main(){

ePersona persona[TAM];
int opcion;
int index;
char respuesta[2];

inicializar(&persona, TAM);
/* inicializa todos los estados en 0 */

do{
printf("\n 1. Agregar una persona\n 2. Borrar una persona\n 3. Imprimir lista ordenada por nombre\n 4. Imprimir grafico de edades\n");
printf("\n opcion: ");
fflush(stdin);
opcion=validarNumero(opcion);

switch(opcion){

case 1:
    index=altaPersona(&persona,TAM);
    if(index==0){
        printf("Persona Agregada\n");
    }
    else{
        printf("Error\n");
    }
    break;
case 2:
    index=bajaPersona(&persona,TAM);
    if(index==0){
        printf("Persona dada de baja\n");
    }
    else{
        printf("la persona no ha sido dada de baja\n");
    }
    break;
case 3:
    mostrarListaPorNombre(&persona,TAM);
    break;
case 4:
    mostrarGrafico(&persona,TAM);
    break;
default :
    printf("\n Error: ingrese alguna de las opciones dadas con anterioridad.\n");
    break;
}
/* menu de opciones */

printf("volver a ingresar?: ");
scanf("%s", respuesta);

}while(strcmp(respuesta,"s")==0);
/*condicion para que se repita la iteracion
*/
return 0;
}
