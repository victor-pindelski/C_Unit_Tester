#ifndef ___CUT_SOURCE_POINTER_H___
#define ___CUT_SOURCE_POINTER_H___

#include "types.h"

#include <stddef.h>
#include <unistd.h>
#include <errno.h>






// CUT function.
// Returns 1 if pointer is pointing to a valid memory location.
// Returns 0 if pointer is pointer to an invalid memory location.
// Returns 0 if pointer is NULL.
signed char
cut_ptr_is_valid(void *pointer);






// Returns 1 if pointer is NULL.
// Returns 0 if pointer isn't NULL.
static signed char
pointer_is_null(void *pointer);






// Returns 1 if pointer maps to a valid memory location.
// Returns 0 if pointer doesn't map to a valid memory location.
static signed char
pointer_is_mapped(void *pointer);


#endif /* !___CUT_SOURCE_POINTER_H___ */
