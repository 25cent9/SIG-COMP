//Innocent Niyibizi
#include <iostream>
#include <string.h>
#include <map>


using namespace std;
// map<char, char> keys = {
// {'1','1'}, {'2','1'},{'3','2'}, {'4','3'}, {'5','4'}, {'6','5'}, {'7','6'}, {'8','7'}, {'9','8'}, {'0','9'}, {'-','0'}, {'=','-'},

// {'W','Q'}, {'E','W'}, {'R','E'}, {'T','R'}, {'Y','T'}, {'U','Y'}, {'I','U'}, {'O','I'}, {'P','O'}, {'[','P'}, {']','['}, {'\\',']'},

// {'S','A'}, {'D','S'}, {'F','D'}, {'G','F'}, {'H','G'}, {'J','H'}, {'K','J'}, {'L','K'}, {';','L'}, {'\'',';'},

// {'X','Z'}, {'C','X'}, {'V','C'}, {'B','V'}, {'N','B'}, {'M','N'}, {',','M'}, {'.',','}, {'/','.'},

// {' ',' '}

// };

const string ONE = "1234567890-=";
const string TWO = "QWERTYUIOP[]\\";
const string THREE = "ASDFGHJKL;\'";
const string FOUR = "ZXCVBNM,./";

int main()
{
  string rows[4]= {ONE, TWO, THREE, FOUR};
  string line, currRow, newLine="";
  char character = ' ';
  int length = 0, index=-1, row =0;
  while(getline(cin, line))
  {
    newLine="";
    length = line.length();
    for(int i = 0; i<length; i++)
    {
      index = -1;
      row=0;
      character = line[i];
      while(index==-1 && character!= ' ' && character!='1')
      {
        currRow = rows[row];
        index = currRow.find(character);
        if(index==-1)
          row++;
      }
      if(character!=' ' && character!='1')
        cout<<currRow[index-1];
      else
        cout<<character;
    }
    cout<<endl;
  }
  return 0;
}
