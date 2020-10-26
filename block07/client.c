#include <stdio.h>
#include "client.h"

client cl_set_name(client cl, const char *first_name,const char *last_name){
   client p = { cl.cf, first_name, last_name, cl.addr};
   return p;
}

client cl_set_address(client cl, address addr){
   client p = { cl.cf, cl.first_name, cl.last_name, addr};
   return p;
}

client cl_set_cf(client cl, unsigned int cf){
   client p = { cf, cl.first_name, cl.last_name, cl.addr};
   return p;
}

void client_print(client cl){
   printf("%s %s, CF: %u, ", cl.first_name, cl.last_name, cl.cf); 
   addr_print(cl.addr);
}
