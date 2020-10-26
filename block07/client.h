#ifndef _CLIENT_H
#define _CLIENT_H

#include "address.h"

typedef struct {
   unsigned int cf;
   const char  *first_name;
   const char  *last_name;
   address      addr;
} client;

extern client cl_set_name(client, const char *,const char *);
extern client cl_set_address(client, address);
extern client cl_set_cf(client, unsigned int);
extern void   client_print(client);

#define CL_EMPTYCLIENT { 0, NULL, NULL, ADDR_EMPTYADDRESS }

#endif
