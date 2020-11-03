#ifndef _ADDRESS_H
#define _ADDRESS_H

typedef enum { NA, IT, FR, DE, ES, UK, PT, US } country;

typedef struct {
   const char  *street;
   unsigned int civico;
   unsigned int cap;
   country      location;
} address;

#define ADDR_EMPTYADDRESS {NULL, 0, 0, NA}


/* Il tipo 'address_field' è introdotto per definire dati che possono
 * contenere un qualsiasi campo dell'indirizzo. Ad esempio:
 *    address_field af;
 *    af.street = "via Pessinetto";
 *
 * oppure:
 *    af.civico = 20;
 *
 * I campi possono essere tra i seguenti:
 *    street, civico, cap, location
 *
 * Una variabile di tipo 'address_field' può essere passata come argomento
 * alla funzione addr_change per modificare un campo di un indirizzo. Ad esempio:
 *    addr_change(a, STREET, af);
 * oppure:
 *    addr_change(a, CIVICO, af);
 *
 * Il tipo 'address_field_id' è una enumerazione simbolica usata per identificare
 * il campo da modificare di un indirizzo nella funzione 'addr_change'. 
 * Può essere uno dei seguenti:
 *    STREET, CIVICO, CAP, COUNTRY
 */

typedef enum { STREET, CIVICO, CAP, COUNTRY } address_field_id; 

typedef union {
   const char  *street;
   unsigned int civico;
   unsigned int cap;
   country      location;
} address_field;

extern address new_address(const char *, unsigned int, unsigned int, country);
extern void    addr_print(address);
extern address addr_change(address, address_field_id, address_field);

#endif