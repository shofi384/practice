#include <iostream>
#include <string>
using namespace std;
using std::cout;
int main()
{
char c;
string det;
cout<<"Please enter a letter (followed by 'Enter')\n"
  << "And I will tell if the letter is vowel or consonant!\n";
  cin>> c;

  switch(c)
    {case ('a'||'A'):
      det = "vowel";
      break;
     case 'e':
       det = "vowel";
       break;
     case 'i':
       det = "vowel";
     break;
     case'o':
       det = "vowel";
     break;
     case 'u':
       det = "vowel";
     break;
     default:
       det = "consonant";
      }
  cout<< c <<" is a "<< det<<"!\n"
      <<endl;
}
