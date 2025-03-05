#ifndef _NODO_H_
#define _NODO_H_
#define TAM 1000
#include <stdbool.h>

typedef int DATO;
typedef struct Nodo{
    DATO dato;
    struct Nodo *siguiente;
} NODO;

NODO* crear_nodo();
bool borrar_nodo(NODO*n);
NODO* asignar_dato(NODO*n, DATO d);
DATO obtener_dato(NODO*n);
NODO* asignar_referencia(NODO*n, NODO*e);
NODO* obtener_referencia(NODO*n);

#endif