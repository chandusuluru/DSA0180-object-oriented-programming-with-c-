#include <iostream>
using namespace std;

int main() {
  
  
  string sentence = "Mary had a little lamb";
  
  int words = 0;

  int lenOfSentence = sentence.size();


  for(int i = 0; i < lenOfSentence; i++)
  {

    if(sentence[i] == ' ')
    {
      
      words++;
    }

  }
  
  words = words + 1;

  cout << "No. of words = " << words << endl;

}
