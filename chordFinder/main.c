#include<stdio.h>
#include<stdint.h>
#include<string.h>
#include "PrintKeyboard.h"
#include "Cchords.h"

#define clear() printf("\033[H\033[J")

//******************************
//******************************
//        main()
//******************************


int main(int argc, char* argv[])
{
  
  clear();
  // iteration
  int i =1;

  printKeyboard();
  // set array to zero 
  initArray(chordArray);
  // printArray(chordArray);
  for (i=1;i<argc;++i){
    makeChordArray(*(argv + i),chordArray, *errArray);
  }
  printArray(chordArray,*errArray);
  endl(1);


  return 0;
}
