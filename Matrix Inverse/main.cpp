/*
  Innocent Niyibizi
  4-8-17
  Kattis: 'Matrix Inverse'
*/

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
  int a, b, c, d, caseNum=1;
  int det;
  while(cin>>a)
  {
    cin>>b>>c>>d;
    det = (a*d)-(b*c);
    cout << "Case " << caseNum << ":" << endl;
    cout<<d/det<<" "<<-b/det<<endl;
    cout<<-c/det<<" "<<a/det<<endl;
    caseNum++;
  }

  return 0;
}
