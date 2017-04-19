/*
  Innocent Niyibizi
  4-19-17
  Height Ordering
*/

#include <iostream>
using namespace std;

void bubbleSort(int children[], int& moves)
{
  bool swap;
  int temp;
  do
  {
    swap = false;
    for(int i=0; i<19; i++)
    {
      if(children[i]>children[i+1])
      {
        temp = children[i];
        children[i] = children[i+1];
        children[i+1] = temp;
        swap = true;
        moves++;
      }
    }
  }while(swap);

}

void printHeigts(int children[])
{
  for(int i = 0; i<20; i++)
    cout<<children[i]<<" ";
  cout<<endl;
  return;
}

int main()
{
  int testCases, testCase, heights[20], moves=0;
  cin>>testCases;
  for(int i = 0; i < testCases; i++)
  {
    cin>>testCase;
    moves = 0;
    for(int j = 0; j<20; j++)
      cin>>heights[j];
    cout<<testCase<<" ";
    bubbleSort(heights, moves);
    cout<<moves<<endl;
  }
  return 0;
}
