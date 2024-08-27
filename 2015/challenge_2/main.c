#include <stdio.h>

typedef struct box_sides{
  int x, y, z;
} box_sides;

// takes in a string, and sets the values in box
// returns 0 if no error, and 1 if an error
int set_box_from_line(box_sides* box, char* line);

int part1(char* input_file);
int part2(char* input_file);

int main(int argc, char** argv){
  
  //printf("The answer to part 1 is: %d\n",part1("input.txt"));
  //printf("The answer to part 2 is: %d\n",part2("input.txt"));
  char* line = "hello";
  box_sides box = {1, 1, 1};

  set_box_from_line(&box, line);

  printf("box is: x=%d, y=%d, z=%d.\n", box.x, box.y, box.z);

  printf("The answer to part 1 is: %s\n","TODO");
  printf("The answer to part 2 is: %s\n","TODO");
  
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

int set_box_from_line(box_sides* box, char* line) {
  box->x = 0;
  box->y = 0;
  box->z = 0;

  return 0;
}
