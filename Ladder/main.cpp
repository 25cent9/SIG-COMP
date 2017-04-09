/*
  Innocent Niyibizi
  4-8-17
  Kattis: 'Ladder'
*/

#include <iostream>
#include <math.h>
#define PI 3.14159265

int main()
{
  int height, ladder;
  short angle;
  std::cin>>height>>angle;
  std::cout<<ceil((height/sin(angle*PI/180)))<<std::endl;
  return 0;
}
