/*
  Innocent Niyibizi
  4-8-17
  Kattis: 'Matrix Inverse'
*/

#include <iostream>
#include <string.h>
using namespace std;
void flipIt(float arr[][2])
{
  float hold;
  hold = arr[0][0];
  arr[0][0] = arr[1][1];
  arr[1][1] = hold;
  if(arr[1][0] != 0)
    arr[1][0] = -1*arr[1][0];
  else
    arr[1][0] = arr[1][0];
  if(arr[0][1] != 0)
    arr[0][1] = -1*arr[0][1];
  else
    arr[0][1] = arr[0][1];
  return;
}

float getDet(float arr[][2])
{
  float hold = 0;
  hold = (1/((arr[0][0]*arr[1][1])-(arr[0][1]*arr[1][0])));
  return hold;
}

int main()
{
  float matrix[2][2], caseNum=1;
  float det;
  string blank;
  while(cin>>blank)
  {
    for(int i =0; i<2; i++)
    {
      for(int j = 0; j<2; j++)
      {
        if(blank.length()>0)
        {
          matrix[0][0] = atoi(blank.c_str());
          blank = "";
        }
        else
        {
          cin>>matrix[i][j];
        }
      }
    }
    cout<<"Case "<<caseNum++<<":"<<endl;
    det = getDet(matrix);
    flipIt(matrix);
    for(int i =0; i <2; i++)
    {
      for(int j = 0; j<2; j++)
      {
        cout<<matrix[i][j]*det<<" ";
      }
      cout<<endl;
    }
  }

  return 0;
}
