/*
  Innocent Niyibizi
  4-9-17
  Kattis: 'Recount'
  delte histoy
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
  map<string,int> votes;
  string name = " ", topName="";
  int voteCount = 0, topVote=0, validVotes;
  bool runOff = false;
  map<string, int>::iterator it;
  while(name!="***")
  {
    getline(cin, name);
    if(name=="***")
      break;
    else if(votes.find(name)!=votes.end())
    {
      it=votes.find(name);
      it->second++;
    }
    else
    {
      votes.insert(make_pair(name,1));
    }
  }
  for(map<string, int>::iterator it=votes.begin(); it!=votes.end(); ++it)
  {
    validVotes = it->second;
    if(validVotes>topVote)
    {
      topVote = validVotes;
      topName = it->first;
      runOff = false;
    }
    else if(validVotes==topVote)
    {
      runOff = true;
    }
  }
  cout<<((runOff)?"Runoff!":topName)<<endl;
  return 0;
}
