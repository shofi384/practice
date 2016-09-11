#include <iostream>
using namespace std;

int main ()
{
double sum, cube=0;
for(int i=1; i<=5; ++i)
{if(i%2!=0)
	{cube = i*i*i;
sum +=cube;}}
cout<<sum;
}
