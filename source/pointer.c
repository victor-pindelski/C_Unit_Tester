#include "pointer.h"





signed char
cut_ptr_is_valid(void *pointer)
{
    if (pointer_is_null(pointer))
    {
        return NO;
    }


}










static signed char
pointer_is_null(void *pointer)
{
    if (pointer == NULL)
    {
        return YES;
    }

    return NO;
}









static signed char
pointer_is_mapped(void *pointer)
{
    // TODO
}
