#include "nodo.h"
#include <stdlib.h>
#include <stdio.h>

 NODO* CrearNodo(NODO* n) {
    NODO* nuevo = (NODO*)malloc(sizeof(NODO));
    nuevo->siguiente = NULL;
    nuevo->dato = 0;
    return nuevo;
}

NODO* asignar_dato(NODO* n, DATO d) {
    if (n != NULL) {
        n->dato = d;
    }
    return n;
}

DATO obtener_dato(NODO* n) {
    if (n==NULL) {
        return -1;
    }
    return n->dato; 
}

NODO* asignar_referencia(NODO*n, NODO*e){
    if (n != NULL) {
        n->siguiente = e;
    }
    return n;
} 
NODO* obtener_referencia(NODO*c) {
    if (c!=NULL) {
        return c ->siguiente;
    }
    return c; 
}

bool borrar_nodo(NODO* n) {
    if (n->siguiente == NULL) {
        free(n);
        return true;
    }
    return false;
}