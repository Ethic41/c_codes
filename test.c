#include <stdio.h>
#include <string.h>

int main(){
  char var[20];
  char *ptr;
  strcpy(var, "Hello, World\n");
  ptr = var;
  printf("%s\n", ptr);
}
