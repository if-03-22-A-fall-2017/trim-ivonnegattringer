#include <stdio.h>
#include "trim.cpp"

int main(int argc, char const *argv[]) {
  printf("%d\n", argc  );
  for (int i = 0; i < argc; i++) {
    printf("Arguments %d %s\n",i,argv[i] );
  }
  char trimmed[STRLEN]= "no content";
  trim(argv[1], trimmed);
  printf("trimmed: %s", trimmed);
  return 0;
}
