#ifndef _CLIENT_H
#define _CLIENT_H

typedef struct {
    char            *nome_via;
    unsigned int    civ;
    char            *city;
    unsigned int    cap;
} address;


typedef struct {
    unsigned int    cf;
    char            *first_name;
    char            *last_name;
    address         adr;   
} client;

#endif