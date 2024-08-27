#include <stdio.h>

int part1(char* input_file);
int part2(char* input_file);

int main(int argc, char** argv){
  
  printf("The answer to part 1 is: %d\n",part1("input.txt"));
  printf("The answer to part 2 is: %d\n",part2("input.txt"));
  return 0;
}

// get final floor after going through entire input
int part1(char* input_file){
  // open file
  FILE* file = fopen(input_file, "r");

  // process file
  int floor = 0;
  char c;
  while ((c = fgetc(file)) != EOF) {
    if ( c == '(' ) {
      floor++;
    }
    else if ( c == ')' ) {
      floor--;
    }
  }
  // close file
  fclose(file);

  // return result
  return floor;
}

// get the position in the file where floor is negative 1
int part2(char* input_file){
  // open file
  FILE* file = fopen(input_file, "r");

  // process file
  int counter = 0;
  int floor = 0;
  char c;
  while ((c = fgetc(file)) != EOF) {
    if ( c == '(' ) {
      counter++;
      floor++;
    }
    else if ( c == ')' ) {
      counter++;
      floor--;
    }

    if ( floor < 0 ) {
      break;
    }
  }
  // close file
  fclose(file);

  // return result
  return counter;
}
