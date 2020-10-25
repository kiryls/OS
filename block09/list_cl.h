#ifndef _LIST_CL_H
#define _LIST_CL_H

// Definizione del tipo 'l_node' usato per rappresentare i nodi della lista
#include "client.h"

typedef struct _node {
    unsigned int    id;
    client          person;
    struct _node    *next;
} l_node;

// Definizione del tipo list_cl (lista di client)

typedef struct {
    l_node *head; // Puntatore al nodo testa della lista
    l_node *tail; // Puntatore al nodo coda  della lista
} list_cl;

extern list_cl l_add_cl(list_cl, client);
extern client l_rem_cl(list_cl);
extern int l_is_empty(list_cl);
extern list_cl l_clear(list_cl);
extern int l_length(list_cl);

#endif
