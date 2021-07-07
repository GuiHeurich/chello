#include <stdio.h>
#include <stdlib.h>
#define SIZE 64

int main () {
  char *name;

  name = malloc(sizeof(char) * SIZE);

  if(name == NULL) {
    printf("Unable to allocate memory");
    return(1);
  } else {
    printf("Please enter your name: ");
    fgets(name, SIZE, stdin);
    printf("Hello, %s", name);
  }

  return(0);
}
