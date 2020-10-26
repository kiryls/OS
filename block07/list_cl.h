#ifndef _LIST_CL_H
#define _LIST_CL_H

#include <stddef.h>
#include "client.h"

typedef struct _node {
   unsigned int  id;
   client        person;
   struct _node *next;
} l_node;

typedef struct { 
   l_node *head;  
   l_node *tail;  
 } list_cl; 

extern list_cl l_add_cl(list_cl, client);
extern client  l_rem_cl(list_cl);
extern int     l_is_empty(list_cl);
extern list_cl l_clear(list_cl);
extern int     l_length(list_cl);

#define L_EMPTYLIST_CL { NULL, NULL }

#endif
