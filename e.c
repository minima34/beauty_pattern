#include <stdio.h>

int main()
{
  int bytes[64];
  int i,j;

  for(i=0; i<64; i++)
  {
    bytes[i] = 0xa0+i;
  }

  for(i=0; i<32; i++)
  {
    for(j=0; j<32; j++)
    {
      printf("%02X ", bytes[i+j]);
    }
    printf("\n");
  }

  return 0;
}
