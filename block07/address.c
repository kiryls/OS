#include <stdio.h>
#include "address.h"

static char *country_name[] = {"Not available", "Italy" , "France", "German", "Espana", "United Kingdom", "Portugal", "United States" };

address new_address(const char *street, unsigned int civico, unsigned int cap, country location){
    address addr;
    
    addr.street   = street;
    addr.civico   = civico;
    addr.cap      = cap;
    addr.location = location;
   
    return addr;
}


void addr_print(address addr){
   printf("%s %u, %3u (%s)\n", addr.street, addr.civico, addr.cap, country_name[addr.location]); 
}

address addr_change(address addr, address_field_id fd, address_field val){

   switch(fd){
      case STREET: addr.street  = val.street;
                   break;
      case CIVICO: addr.civico = val.civico;
                   break;
      case CAP:    addr.cap = val.cap;
                   break;
      case COUNTRY:addr.location = val.location;
                   break;
   }
   return addr;
}


