#include <stdio.h>
#include <stdlib.h>


typedef struct nodo{
    char nombre[50];
    int dni;
    char direccion[30];
    int fecha;
    struct nodo* siguiente;

}nodo;

nodo* primero = NULL;
nodo* ultimo = NULL;

void insertarNodo();
void desplegarLista();


int main(){

int op;

insertarNodo();
desplegarLista();


    do{
        do{
        system("cls");
        printf("(1) Ingresar datos.\n(2) Mostrar datos.\n(3) Salir.\nQue opcion desea ingresar?:");
        scanf("%d", &op);

    switch(op){

        case 1:
            insertarNodo();
            system("pause");
            break;

        case 2:
            desplegarLista();
            system("pause");
            break;

        case 3:
            printf("\n\nSaliendo...\n\n");
            system("pause");
            break;

        default:

            printf("\nEl numero ingresado no es correcto.\n");
            system("pause");

    }
    }while(op>0 && op<2);
    }while(op != 3);




return 0;

}

void insertarNodo(){

    nodo* nuevo = (nodo*)malloc(sizeof(nodo));
    printf("\nIngresar nombre y apellido: ");
    scanf("%s", &nuevo->nombre);
    printf("\nIngrese el DNI: ");
    fflush(stdin);
    scanf("%d", &nuevo->dni);
    printf("\nIngresar direccion: ");
    fflush(stdin);
    scanf("%s", &nuevo->direccion);
    printf("\nIngresar fecha de nacimiento: ");
    fflush(stdin);
    scanf("%d", &nuevo->fecha);

    if(primero == NULL){

        primero = nuevo;
        primero->siguiente == NULL;
        ultimo = nuevo;

    }else{

        ultimo->siguiente = nuevo;
        nuevo->siguiente = NULL;
        ultimo = nuevo;

    }
    printf("\nEl nodo ha sido generado con exito!.\n");


}



void desplegarLista(){

    nodo* actual = (nodo*)malloc(sizeof(nodo));
    actual = primero;

    if(primero != NULL){
            while(actual != NULL){
                printf("\n%s", actual->nombre);
                printf("\n%d", actual->dni);
                printf("\n%s", actual->direccion);
                printf("\n%d", actual->fecha);
                actual = actual->siguiente;

            }
    }else{
        printf("\nLa lista se encuentra vacia.\n");
    }

}




