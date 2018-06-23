/*
** this function returns 1 if the machine is little-endian
*/

#include <stdlib.h> 

int ft_check_endianness(void)
{
  unsigned int x;
  char *c;
  
  x = 1;
  c = NULL;
  c = (char*)&x;
  return ((int)*c);
}
