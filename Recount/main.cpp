/*
  Innocent Niyibizi
  4-9-17
  Kattis: 'Recount'
*/

#include<iostream>
#include<set>
#include<string>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
  string votes[100000];
  string name = " ", topName="";
  set<string> names;
  int voteCount = 0, topVote=0, validVotes;
  bool runOff = false;
  while(name!="***")
  {
    getline(cin, name);
    if(name=="***")
      break;
    votes[voteCount++] = name;
    names.insert(name);
  }
  for(set<string>::iterator it=names.begin(); it!=names.end(); ++it)
  {
    validVotes = count(votes, votes+voteCount, *it);
    if(validVotes>topVote)
    {
      topVote = validVotes;
      topName = *it;
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
