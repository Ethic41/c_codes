#include <stdio.h>

int main(){
  char string[10];
  int A = -73;
  unsigned int B = 31337;

  strcpy(string, "sample");

  //Example printing with different format string
  printf("[A]Dec: %d, Hex: %x, Unsingned: %u\n", A, A, A);
  printf("[B]Dec: %d, Hex: %x, Unsingned: %u\n", B,B,B);
  printf("[field width on B] 3:'%3u', 10:'%10u','%08u'\n", B,B,B);
  printf("String %s Address %08x\n",string, string );

  //Example of unary address operator (derefrencing) and a %x format String
  printf("A is at address %08x\n", &A);
}
