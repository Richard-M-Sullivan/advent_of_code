#include <stdio.h>

int main(int argc, char** argv){
  // open file
  FILE* file = fopen("input.txt", "r");

  // process file
  int counter = 0;
  char c;
  while ((c = fgetc(file)) != EOF) {
    if ( c == '(' ) {
      counter++;
    }
    else if ( c == ')' ) {
      counter--;
    }
  }
  // close file
  fclose(file);

  // print result
  printf("%d\n",counter);
  return 0;
}
