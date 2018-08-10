
#ifndef PRINTKEYBOARD_H
#define PRINTKEYBOARD_H
#include<stdio.h>
#include"draw.h"

//--------------------------------------------------
//--------------------------------------------------

void printKeyboard()
{
 
  short numTop = 6;
  short numBottom = 7;

  printHbar(30);
  endl(1);
  int i;
  for (i=0;i<numTop;++i){
    //--------------------------------------------------
    //--------------------------------------------------
    //**************************************************
    //**************************************************
    //                TOP KEY TEMPLATE
    //**************************************************
    //**************************************************
    //              c            top
    printVbar(5);
    //              c#           top
    printSpace(5);
    //              d            top
    printVbar(5);
    //              d#           top
    printSpace(5);
    //              e            top
    printVbar(4);
    printSpace(1);
    //              e            top
    // printVbar(5);
    //              f            top
    printVbar(5);
    //              f#           top
    printSpace(5);
    //              g            top
    printVbar(5);
    //              g#           top
    printSpace(5);
    //              a            top
    printVbar(5);
    //              a#           top
    printSpace(5);
    //              b            top
    printVbar(5);

    //************************************************** 
    //************************************************** 
    endl(1);
    //************************************************** 
    //************************************************** 
  }
  for (i=0;i<numTop;++i){

    //**************************************************
    //**************************************************
    //             BOTTOM KEY TEMPLATE
    //**************************************************
    //**************************************************

    // c
    printVbar(5);
    // c#
    printVbar(2);
    printSpace(1);
    printVbar(2);
    // d
    printVbar(5);
    // d#
    printVbar(2);
    printSpace(1);
    printVbar(2);
    // e
    printVbar(4);
    printSpace(1);
    // f
    printVbar(5);
    // f#
    printVbar(2);
    printSpace(1);
    printVbar(2);
    // g
    printVbar(5);
    // g#
    printVbar(2);
    printSpace(1);
    printVbar(2);
    // a
    printVbar(5);
    // a#
    printVbar(2);
    printSpace(1);
    printVbar(2);
    // b
    printVbar(5);

    //************************************************** 
    //************************************************** 
    endl(1);
    //************************************************** 
    //************************************************** 

  }
}
#endif // printkeyboard_h
