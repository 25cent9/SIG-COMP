/*
  Innocent Niyibizi
  3-29-17
  Kattis: 'Adding Words'
*/

class Word
{
private:
  std::string def;
  int value;
public:
  Word(std::string name, int val)
  {
    def = name;
    value = val;
  }
  const int getVal() const
  {
    return value;
  }
  const std::string getDef() const
  {
    return def;
  }
  void clear()
  {
    def = "";
    value = 0;
  }
};

#include <iostream>

int main()
{
  std::set<Word> definitions;
  std::string input;
  while(std::cin>>input)
  {
    std::cout<<input<<std::endl;
  }
  return 0;
}
