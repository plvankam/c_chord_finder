
#ifndef CCHORDS_H
#define CCHORDS_H

#define DEBUG

#include<stdio.h>
#include<stdint.h>
#include<string.h>
#include "draw.h"


//{******************************
//        defines
//        
//******************************

#define ARRAY_LEN 12
#define STARS30 printf("\n************************************************************\n");
//}******************************

//{******************************
//******************************
//******************************
//        variables

uint8_t i;
uint8_t chordArray[12];
char*   errArray[12];
static int errCnt = 0;

//}******************************


//{******************************
//        functions
//
//******************************

//          endl()
// void endl(uint8_t i)
// {
//   int j;
//   for (j=0;j < i;++j){
//     printf("\n");
//   }
// }


//{------------------------------        
//        initArray()
//------------------------------        
// used to initilize array to 
// all zeros
void initArray(uint8_t* array)
{
 uint8_t  i;
 endl(1);
 // loop through array or length 12
 // and type uint8_t 
 for (i=0;i<ARRAY_LEN;++i){
   *(array + i) = 0;
   // *(array + i) = 0;
 }
}

//}------------------------------        
//{------------------------------        
//        printArray()
//------------------------------        
void printArray(uint8_t* array,char* errArray)
{
 static uint8_t i;
 endl(1);
    STARS30
 printf("\t\t| Weighted Tables of Notes Used |");
   STARS30
 for (i=0;i<ARRAY_LEN;++i){
   switch(i)
   { 
   case(0):
     printf(" |!!!!!|||||| ");
     break;
   case(1):
     printf(" |     |||||| ");
     break;
   case(2):
     printf(" |!!!!!|||||| ");
     break;
   case(3):
     printf(" |     |||||| ");
     break;
   case(4):
     printf(" |!!!!!|||||| ");
     break;
   case(5):
     printf(" |     |||||| ");
     break;
   case(6):
     printf(" |||||||||||| ");
     break;
   case(7):
     printf(" |||||||||||| ");
     break;
   case(8):
     printf(" |     |||||| ");
     break;
   case(9):
     printf(" |!!!!!|||||| ");
     break;
   case(10):
     printf(" |     |||||| ");
     break;
   case(11):
     printf(" |||||||||||| ");
     break;
   default:
     break;
   }
   if (*(array + (11-i))){
     switch((11 - i))
     {
      case(0): 
        printf("c \t  ");
        break;
      case(1): 
        printf("c#\t  ");
        break;
      case(2): 
        printf("d \t  ");
        break;
      case(3): 
        printf("d#\t  ");
        break;
      case(4): 
        printf("e \t  ");
        break;
      case(5): 
        printf("f \t  ");
        break;
      case(6): 
        printf("f#\t  ");
        break;
      case(7): 
        printf("g \t  ");
        break;
      case(8): 
        printf("g#\t  ");
        break;
      case(9):
        printf("a \t  ");
        break;
      case(10): 
        printf("a#\t  ");
        break;
      case(11): 
        printf("b \t  ");
        break;
      default:
        break;
     }
     printf("%2d",*(array + (11 - i)));
   }
   endl(1);
 }
   STARS30
}

//}------------------------------        
//{------------------------------        
//        makeChordArray()
//------------------------------        
void makeChordArray(char* array, uint8_t* cArray, char* errArray)
{
      //++++++++++++++++++\\
      //   MAJOR CHORDS   \\
      //++++++++++++++++++\\
  

  if      (!strcmp(array,"C")){
    for (i=0;i<ARRAY_LEN;++i){
      switch(i)
      {

        case(0):
          // fall thru
        case(4):
          // fall thru
        case(7):
          *(cArray+((i)%12)) += 1 ;
          break;

        default:
          break;
      }
    }
  }
  else if (!strcmp(array,"C#")){
    for (i=0;i<ARRAY_LEN;++i){
      switch(i)
      {

        case(0):
          // fall thru
        case(4):
          // fall thru
        case(7):
          *(cArray+((i+1)%12)) += 1 ;
          break;

        default:
          break;
      }
    }
  }
  else if (!strcmp(array,"D")){
    for (i=0;i<ARRAY_LEN;++i){
      switch(i)
      {

        case(0):
          // fall thru
        case(4):
          // fall thru
        case(7):
          *(cArray+((i+2)%12)) += 1 ;
          break;

        default:
          break;
      }
    }
    
  }
  else if (!strcmp(array,"D#")){
    for (i=0;i<ARRAY_LEN;++i){
      switch(i)
      {

        case(0):
          // fall thru
        case(4):
          // fall thru
        case(7):
          *(cArray+((i+3)%12)) += 1 ;
          break;

        default:
          break;
      }
    }
    
  }
  else if (!strcmp(array,"E")){
    for (i=0;i<ARRAY_LEN;++i){
      switch(i)
      {

        case(0):
          // fall thru
        case(4):
          // fall thru
        case(7):
          *(cArray+((i+4)%12)) += 1 ;
          break;

        default:
          break;
      }
    }
    
  }
  else if (!strcmp(array,"F")){
    for (i=0;i<ARRAY_LEN;++i){
      switch(i)
      {

        case(0):
          // fall thru
        case(4):
          // fall thru
        case(7):
          *(cArray+((i+5)%12)) += 1 ;
          break;

        default:
          break;
      }
    }
    
  }
  else if (!strcmp(array,"F#")){
    for (i=0;i<ARRAY_LEN;++i){
      switch(i)
      {

        case(0):
          // fall thru
        case(4):
          // fall thru
        case(7):
          *(cArray+((i+6)%12)) += 1 ;
          break;

        default:
          break;
      }
    }
    
  }
  else if (!strcmp(array,"G")){
    for (i=0;i<ARRAY_LEN;++i){
      switch(i)
      {

        case(0):
          // fall thru
        case(4):
          // fall thru
        case(7):
          *(cArray+((i+7)%12)) += 1 ;
          break;

        default:
          break;
      }
    }
    
  }
  else if (!strcmp(array,"G#")){
    for (i=0;i<ARRAY_LEN;++i){
      switch(i)
      {

        case(0):
          // fall thru
        case(4):
          // fall thru
        case(7):
          *(cArray+((i+8)%12)) += 1 ;
          break;

        default:
          break;
      }
    }
    
  }
  else if (!strcmp(array,"A")){
    for (i=0;i<ARRAY_LEN;++i){
      switch(i)
      {

        case(0):
          // fall thru
        case(4):
          // fall thru
        case(7):
          *(cArray+((i+9)%12)) += 1 ;
          break;

        default:
          break;
      }
    }

  } 
  else if (!strcmp(array,"A#")){
    for (i=0;i<ARRAY_LEN;++i){
      switch(i)
      {

        case(0):
          // fall thru
        case(4):
          // fall thru
        case(7):
          *(cArray+((i+10)%12)) += 1 ;
          break;

        default:
          break;
      }
    }

  }
  else if (!strcmp(array,"B")){
    for (i=0;i<ARRAY_LEN;++i){
      switch(i)
      {

        case(0):
          // fall thru
        case(4):
          // fall thru
        case(7):
          *(cArray+((i+11)%12)) += 1 ;
          break;

        default:
          break;
      }
    }
    
  }
      //++++++++++++++++++\\
      //   MINOR CHORDS   \\
      //++++++++++++++++++\\

  else if (!strcmp(array,"c")){
    for (i=0;i<ARRAY_LEN;++i){
      switch(i)
      {

        case(0):
          // fall thru
        case(3):
          // fall thru
        case(7):
          *(cArray+((i)%12)) += 1 ;
          break;

        default:
          break;
      }
    }
    
  }
  else if (!strcmp(array,"c#")){
    for (i=0;i<ARRAY_LEN;++i){
      switch(i)
      {

        case(0):
          // fall thru
        case(3):
          // fall thru
        case(7):
          *(cArray+((i+1)%12)) += 1 ;
          break;

        default:
          break;
      }
    }
    
    
  }
  else if (!strcmp(array,"d")){
    for (i=0;i<ARRAY_LEN;++i){
      switch(i)
      {

        case(0):
          // fall thru
        case(3):
          // fall thru
        case(7):
          *(cArray+((i+2)%12)) += 1 ;
          break;

        default:
          break;
      }
    }
    
    
  }
  else if (!strcmp(array,"d#")){
    for (i=0;i<ARRAY_LEN;++i){
      switch(i)
      {

        case(0):
          // fall thru
        case(3):
          // fall thru
        case(7):
          *(cArray+((i+3)%12)) += 1 ;
          break;

        default:
          break;
      }
    }
    
    
  }
  else if (!strcmp(array,"e")){
    for (i=0;i<ARRAY_LEN;++i){
      switch(i)
      {

        case(0):
          // fall thru
        case(3):
          // fall thru
        case(7):
          *(cArray+((i+4)%12)) += 1 ;
          break;

        default:
          break;
      }
    }
    
    
  }
  else if (!strcmp(array,"f")){
    for (i=0;i<ARRAY_LEN;++i){
      switch(i)
      {

        case(0):
          // fall thru
        case(3):
          // fall thru
        case(7):
          *(cArray+((i+5)%12)) += 1 ;
          break;

        default:
          break;
      }
    }
    
    
  }
  else if (!strcmp(array,"f#")){
    for (i=0;i<ARRAY_LEN;++i){
      switch(i)
      {

        case(0):
          // fall thru
        case(3):
          // fall thru
        case(7):
          *(cArray+((i+6)%12)) += 1 ;
          break;

        default:
          break;
      }
    }
    
    
  }
  else if (!strcmp(array,"g")){
    for (i=0;i<ARRAY_LEN;++i){
      switch(i)
      {

        case(0):
          // fall thru
        case(3):
          // fall thru
        case(7):
          *(cArray+((i+7)%12)) += 1 ;
          break;

        default:
          break;
      }
    }
    
    
  }
  else if (!strcmp(array,"g#")){
    for (i=0;i<ARRAY_LEN;++i){
      switch(i)
      {

        case(0):
          // fall thru
        case(3):
          // fall thru
        case(7):
          *(cArray+((i+8)%12)) += 1 ;
          break;

        default:
          break;
      }
    }
    
    
  }
  else if (!strcmp(array,"a")){
    for (i=0;i<ARRAY_LEN;++i){
      switch(i)
      {

        case(0):
          // fall thru
        case(3):
          // fall thru
        case(7):
          *(cArray+((i+9)%12)) += 1 ;
          break;

        default:
          break;
      }
    }
    

  } 
  else if (!strcmp(array,"a#")){
    for (i=0;i<ARRAY_LEN;++i){
      switch(i)
      {

        case(0):
          // fall thru
        case(3):
          // fall thru
        case(7):
          *(cArray+((i+10)%12)) += 1 ;
          break;

        default:
          break;
      }
    }
    

  }
  else if (!strcmp(array,"b")){
    for (i=0;i<ARRAY_LEN;++i){
      switch(i)
      {

        case(0):
          // fall thru
        case(3):
          // fall thru
        case(7):
          *(cArray+((i+11)%12)) += 1 ;
          break;

        default:
          break;
      }
    }
    
    
  }
      //++++++++++++++++++\\
      //  major7 CHORDS   \\
      //++++++++++++++++++\\

  else if (!strcmp(array,"Cmaj7")){
    for (i=0;i<ARRAY_LEN;++i){
      switch(i)
      {

        case(0):
          // fall thru
        case(4):
          // fall thru
        case(7):
        case(11):
          *(cArray+((i)%12)) += 1 ;
          break;

        default:
          break;
      }
    }
    
    
    
  }
  else if (!strcmp(array,"C#maj7")){
    for (i=0;i<ARRAY_LEN;++i){
      switch(i)
      {

        case(0):
          // fall thru
        case(4):
          // fall thru
        case(7):
        case(11):
          *(cArray+((i+1)%12)) += 1 ;
          break;

        default:
          break;
      }
    }
    
    
  }
  else if (!strcmp(array,"Dmaj7")){
    for (i=0;i<ARRAY_LEN;++i){
      switch(i)
      {

        case(0):
          // fall thru
        case(4):
          // fall thru
        case(7):
        case(11):
          *(cArray+((i+2)%12)) += 1 ;
          break;

        default:
          break;
      }
    }
    
    
  }
  else if (!strcmp(array,"D#maj7")){
    for (i=0;i<ARRAY_LEN;++i){
      switch(i)
      {

        case(0):
          // fall thru
        case(4):
          // fall thru
        case(7):
        case(11):
          *(cArray+((i+3)%12)) += 1 ;
          break;

        default:
          break;
      }
    }
    
    
    
  }
  else if (!strcmp(array,"Emaj7")){
    for (i=0;i<ARRAY_LEN;++i){
      switch(i)
      {

        case(0):
          // fall thru
        case(4):
          // fall thru
        case(7):
        case(11):
          *(cArray+((i+4)%12)) += 1 ;
          break;

        default:
          break;
      }
    }
    
    
    
  }
  else if (!strcmp(array,"Fmaj7")){
    for (i=0;i<ARRAY_LEN;++i){
      switch(i)
      {

        case(0):
          // fall thru
        case(4):
          // fall thru
        case(7):
        case(11):
          *(cArray+((i+5)%12)) += 1 ;
          break;

        default:
          break;
      }
    }
    
    
    
  }
  else if (!strcmp(array,"F#maj7")){
    for (i=0;i<ARRAY_LEN;++i){
      switch(i)
      {

        case(0):
          // fall thru
        case(4):
          // fall thru
        case(7):
        case(11):
          *(cArray+((i+6)%12)) += 1 ;
          break;

        default:
          break;
      }
    }
    
    
    
  }
  else if (!strcmp(array,"Gmaj7")){
    for (i=0;i<ARRAY_LEN;++i){
      switch(i)
      {

        case(0):
          // fall thru
        case(4):
          // fall thru
        case(7):
        case(11):
          *(cArray+((i+7)%12)) += 1 ;
          break;

        default:
          break;
      }
    }
    
    
    
  }
  else if (!strcmp(array,"G#maj7")){
    for (i=0;i<ARRAY_LEN;++i){
      switch(i)
      {

        case(0):
          // fall thru
        case(4):
          // fall thru
        case(7):
        case(11):
          *(cArray+((i+8)%12)) += 1 ;
          break;

        default:
          break;
      }
    }
    
    
    
  }
  else if (!strcmp(array,"Amaj7")){
    for (i=0;i<ARRAY_LEN;++i){
      switch(i)
      {

        case(0):
          // fall thru
        case(4):
          // fall thru
        case(7):
        case(11):
          *(cArray+((i+9)%12)) += 1 ;
          break;

        default:
          break;
      }
    }
    
    

  } 
  else if (!strcmp(array,"A#maj7")){
    for (i=0;i<ARRAY_LEN;++i){
      switch(i)
      {

        case(0):
          // fall thru
        case(4):
          // fall thru
        case(7):
        case(11):
          *(cArray+((i+10)%12)) += 1 ;
          break;

        default:
          break;
      }
    }
    
    

  }
  else if (!strcmp(array,"Bmaj7")){
    for (i=0;i<ARRAY_LEN;++i){
      switch(i)
      {

        case(0):
          // fall thru
        case(4):
          // fall thru
        case(7):
        case(11):
          *(cArray+((i+11)%12)) += 1 ;
          break;

        default:
          break;
      }
    }
    
    
    
  }
      //++++++++++++++++++\\
      //   dom7 CHORDS   \\
      //++++++++++++++++++\\

  else if (!strcmp(array,"C7")){
    for (i=0;i<ARRAY_LEN;++i){
      switch(i)
      {

        case(0):
          // fall thru
        case(4):
          // fall thru
        case(7):
        case(10):
          *(cArray+((i+0)%12)) += 1 ;
          break;

        default:
          break;
      }
    }
    
    
  }
  else if (!strcmp(array,"C#7")){
    for (i=0;i<ARRAY_LEN;++i){
      switch(i)
      {

        case(0):
          // fall thru
        case(4):
          // fall thru
        case(7):
        case(10):
          *(cArray+((i+1)%12)) += 1 ;
          break;

        default:
          break;
      }
    }
    
    
  }
  else if (!strcmp(array,"D7")){
    for (i=0;i<ARRAY_LEN;++i){
      switch(i)
      {

        case(0):
          // fall thru
        case(4):
          // fall thru
        case(7):
        case(10):
          *(cArray+((i+2)%12)) += 1 ;
          break;

        default:
          break;
      }
    }
    
    
  }
  else if (!strcmp(array,"D#7")){
    for (i=0;i<ARRAY_LEN;++i){
      switch(i)
      {

        case(0):
          // fall thru
        case(4):
          // fall thru
        case(7):
        case(10):
          *(cArray+((i+3)%12)) += 1 ;
          break;

        default:
          break;
      }
    }
    
    
  }
  else if (!strcmp(array,"E7")){
    for (i=0;i<ARRAY_LEN;++i){
      switch(i)
      {

        case(0):
          // fall thru
        case(4):
          // fall thru
        case(7):
        case(10):
          *(cArray+((i+4)%12)) += 1 ;
          break;

        default:
          break;
      }
    }
    
    
  }
  else if (!strcmp(array,"F7")){
    for (i=0;i<ARRAY_LEN;++i){
      switch(i)
      {

        case(0):
          // fall thru
        case(4):
          // fall thru
        case(7):
        case(10):
          *(cArray+((i+5)%12)) += 1 ;
          break;

        default:
          break;
      }
    }
    
    
  }
  else if (!strcmp(array,"F#7")){
    for (i=0;i<ARRAY_LEN;++i){
      switch(i)
      {

        case(0):
          // fall thru
        case(4):
          // fall thru
        case(7):
        case(10):
          *(cArray+((i+6)%12)) += 1 ;
          break;

        default:
          break;
      }
    }
    
    
  }
  else if (!strcmp(array,"G7")){
    for (i=0;i<ARRAY_LEN;++i){
      switch(i)
      {

        case(0):
          // fall thru
        case(4):
          // fall thru
        case(7):
        case(10):
          *(cArray+((i+7)%12)) += 1 ;
          break;

        default:
          break;
      }
    }
    
    
  }
  else if (!strcmp(array,"G#7")){
    for (i=0;i<ARRAY_LEN;++i){
      switch(i)
      {

        case(0):
          // fall thru
        case(4):
          // fall thru
        case(7):
        case(10):
          *(cArray+((i+8)%12)) += 1 ;
          break;

        default:
          break;
      }
    }
    
    
  }
  else if (!strcmp(array,"A7")){
    for (i=0;i<ARRAY_LEN;++i){
      switch(i)
      {

        case(0):
          // fall thru
        case(4):
          // fall thru
        case(7):
        case(10):
          *(cArray+((i+9)%12)) += 1 ;
          break;

        default:
          break;
      }
    }
    

  } 
  else if (!strcmp(array,"A#7")){
    for (i=0;i<ARRAY_LEN;++i){
      switch(i)
      {

        case(0):
          // fall thru
        case(4):
          // fall thru
        case(7):
        case(10):
          *(cArray+((i+10)%12)) += 1 ;
          break;

        default:
          break;
      }
    }
    

  }
  else if (!strcmp(array,"B7")){
    for (i=0;i<ARRAY_LEN;++i){
      switch(i)
      {

        case(0):
          // fall thru
        case(4):
          // fall thru
        case(7):
        case(10):
          *(cArray+((i+11)%12)) += 1 ;
          break;

        default:
          break;
      }
    }
    
    
  }
  else{
    errArray[errCnt] = *array;
    errCnt++;
  }
  
}
//}------------------------------        
//}/******************************

void errorPrint(char* array[]){
  if (errCnt != 0){
    for (i=0;i<errCnt;++i){
      printf("%s, ", *array);
      if ((i+1)==errCnt){
        printf(", and ");
      }
      else
        printf(", ");
    }
  }
}


#endif // cchords
