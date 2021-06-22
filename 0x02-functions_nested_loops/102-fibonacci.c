#include <stdio.h>
#include "holberton.h"
int main(void)
{
int i, n = 50, t1 = 0, t2 = 1;
int nextTerm = t1 + t2;
for (i = 1; i <= n; ++i)
{
_putchar(nextTerm);
t1 = t2;
t2 = nextTerm;
nextTerm = t1 + t2;
}
return (0);
}
