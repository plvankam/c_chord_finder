#ifndef DRAW_H
#define DRAW_H

#include<stdio.h>


//        tab()
void tab(int num)
{
  int i;
  for (i=0;i<num;++i){
    printf("\t");
  }
}
//        endl()
void endl(int num)
{
  int i;
  for (i=0;i<num;++i){
    printf("\n");
  }
}

void printHbar(int num)
{
  int i;
  for (i=0;i<num;++i){
    printf("--");
  }
}

void printVbar(int num)
{
  int i;
  for (i=0;i<num;++i){
    printf("|");
  }
}

void printStar(int num)
{
  int i;
  for (i=0;i<num;++i){
    printf("*");
  }
}

void printSpace(int num)
{
  int i;
  for (i=0;i<num;++i){
    printf(" ");
  }
}
#endif // draw.h
