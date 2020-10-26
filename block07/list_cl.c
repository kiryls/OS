#include <stdlib.h>
#include "list_cl.h"

static int id = 0;

l_node * new_l_node(client p, struct _node * next) {
    l_node * ln = (l_node *) malloc(sizeof(l_node));
    if(ln == NULL) return NULL;

    ln->id = id++;
    ln->person = p;
    ln->next = next;
    return ln;
}

list_cl l_add_cl(list_cl l, client p) {
    l_node * ln = new_l_node(p, NULL);
    if(ln == NULL) return l;

    if(l.head == NULL)
        l.head = l.tail = ln;
    else {
        l.tail->next = ln;
        l.tail = ln;
    }
    return l;
}

client l_rem_cl(list_cl l) {
    client p;
    if(l_is_empty(l)) return p;

    client p = l.head->person;
    l_node * tmp = l.head;
    l.head = l.head->next;

    free(tmp);

    return p;
}

int l_is_empty(list_cl l) {
    return l.head == NULL;
}

list_cl l_clear(list_cl l) {
    while(l_is_empty(l)) l_rem_cl(l);
    l.head = NULL;
    return l;
}

int l_length(list_cl l) {
    int count = 0;
    for(l_node * n = l.head; n != NULL; n = n->next, count++);
    return count;
}
