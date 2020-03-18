
#ifndef _CALCULATRICE_H_RPCGEN
#define _CALCULATRICE_H_RPCGEN
#include <stdio.h>
#include <stdlib.h>


struct calc {
	long val1;
	long val2;
};

typedef struct 
{
	int a;
}svc_req;
typedef struct calc calc;
static long registre[6];
static long globale;
#define CALC_VERSION_1 1

void allumer();

long * ajouter(calc *);

long * soustraire(calc *);

long * multiplier(calc *);

void memoriser(int *);
long * extraire(int *);

void eteindre();

#endif /* !_CALCULATRICE_H_RPCGEN */
