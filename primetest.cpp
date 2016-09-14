/*
 * CSc103 Project 2: prime numbers.
 * See readme.html for details.
 * Please list all references you made use of in order to complete the
 * assignment: your classmates, websites, etc.  Aside from the lecture notes
 * and the book, please list everything.  And remember- citing a source does
 * NOT mean it is okay to COPY THAT SOURCE.  What you submit here **MUST BE
 * YOUR OWN WORK**.
 * References:
 *Except for the prior knowledge of coding and the instructions gievn with the assignment, no references are used.
 */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
 int in, primality;
 cin >> in;
	while(in>1)
  {primality= 1;
   if (in >2 && in%2==0) primality = 0;
    else {for(int i=3; i<in/2; i+=2)
     if(in%i == 0) primality = 0;}
   cout << primality << endl;
   cin >> in;}
   return 0;
}