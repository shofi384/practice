#include <iostream>
#include <vector>
using namespace std;
int main()
{
  double ave,sum, max, min = 0.0;
std::vector<double> v;
cout <<"Please enter a series of numbers.\n And I will give you the average value:\n";

  for(double in; cin>>in;)
  v.push_back(in);

  for (int i=0; i<v.size(); ++i)
    { sum += v[i];
      if(v[i]>max) max = v[i];
      if(v[i]<min) min = v[i]; }

  ave = sum/v.size();

  cout <<"The average of entered values is " << ave <<"\nMaximum is "<<max<<"\nAnd the minimum is "<<min<< endl;
}
