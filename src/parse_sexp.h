#ifndef PARSE_SEXP_H
#define PARSE_SEXP_H

#include "types.h"

extern LispObject parse_sexp(char *);
extern void init_symbol_table(void);

#endif
