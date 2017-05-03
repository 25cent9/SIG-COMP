#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
  unordered_set<int> cds;
  unsigned int JackNUM, JillNUM, CD, total, size;
  cin>>JackNUM>>JillNUM;
  while(JackNUM!=0 || JillNUM!=0)
  {
    cds.clear();
    total = JackNUM+JillNUM;
    for(int i =0; i<JackNUM; i++)
    {
      cin>>CD;
      cds.insert(CD);
    }
    for(int i = 0; i<JillNUM; i++)
    {
      cin>>CD;
      cds.insert(CD);
    }
    if(JackNUM==0 || JillNUM ==0)
      cout<<'0'<<endl;
    else
    {
      size = cds.size();
      cout<<total-size<<endl;
    }
    cin>>JackNUM>>JillNUM;
  }
  return 0;
}
