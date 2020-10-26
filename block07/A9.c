#include <stdio.h>
#include "address.h"
#include "client.h"
#include "list_cl.h"

/* Modificare il programma affinché la lista dei clienti sia inizializzata leggendo 
 * un file dal seguente formato: Il file ha tante righe quanti sono i clienti. Ogni riga
 * ha i seguenti campi separati da virgole:
 *
 *     nome, cognome, via, civico, CAP, paese, piva
 *
 * esempio:
 *     Donald, Duck, via dei Tigli, 20, 10149, US, 0
 *     Mickey, Mouse, via Disney, 1, 42069, UK, 666
 *
 * Il file è passato al programma da linea di comando.
 */
 
int main(int argc, char *argv[]){
   list_cl l = L_EMPTYLIST_CL;
   client  cl;
   cl = cl_set_name(cl, "Donald", "Duck");
   address adr = new_address("via dei Tigli", 20, 10149, US);
   cl = cl_set_address(cl, adr);
   cl = cl_set_cf(cl, 87294);

   l = l_add_cl(l, cl);

   for(l_node *n = l.head; n != NULL; n = n->next)
        client_print(n->person);
}