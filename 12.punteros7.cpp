#include<stdio.h>
#include<stdlib.h>
using namespace std;
//MANEJO DE PUNTEROS  
int main(){
    char *lista[3];
    //memory allocation = malloc
    //reserve ocho veces el tamo de la letra ---> m e l c h o r \0----> 7+1 letras
    //(char*)nosdael huecoadecuado al tamaño
    int salir;
    lista[0]=(char *) malloc(8*sizeof(char));
    lista[1]=(char *) malloc(7*sizeof(char));
    lista[2]=(char *) malloc(8*sizeof(char)); 
    printf("\nPrimer rey mago: ");
    scanf("%s",lista[0]);
    printf("\nSegundo rey mago: ");
    scanf("%s",lista[1]);
    printf("\nTercer rey mago: ");
    scanf("%s",lista[2]);
    printf("\nLos 3 reyes magos son: ");
    printf("%s, ",lista[0]);
    printf("%s, ",lista[1]);
    printf("%s, ",lista[2]);   
    printf("\nToca cualquier tecla para salir: ");
    scanf("%i",&salir);
    
       }
