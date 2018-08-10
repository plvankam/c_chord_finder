#include<stdio.h>
#include<string.h>

int main(int argc, char** argv)
{
  
  printf("%c\n",tolower(*(argv + 1)));
  char charArray[2];
  printf("tolower(\"A\") = %s","A");
  charArray[0] = *argv[0];
  printf("%c\n",charArray[0]);

  return 0;
}
