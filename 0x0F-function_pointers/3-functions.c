#include <stdio.h>

/**
 * op_add - performs a add operation
 * @a: int a
 * @b: int b
 * Return: Always 0 (Success)
*/
int op_add(int a, int b)
{       
        if (a && b)
                return (a + b);
}       

/**
 * op_sub - perfoms sub operation
 * @a: integer a
 * @b: int b
 * Return: Always 0 (Succes)
*/
int op_sub(int a, int b)
{       
        if (a && b)
                return (atoi(a) - atoi(b));
}       

/**
 * op_mul - performs multiplication operation
 * @b: int a
 * @b: int b
 * Return: Always 0 (Succeess) 
*/
int op_mul(int a, int b)
{       
        if ( a && b)
                return (atoi(a) * atoi(b));
}
