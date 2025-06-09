#include<iostream>
#include<vector>
using namespace std;

int main(){

  vector <int>vec;
  
  vector <char> Vegeto = {'a','g', 'n'};

  vec.push_back(25);
  vec.push_back(28);
  vec.pop_back();

   cout<<"front is " <<vec.front()<<endl;
  cout<<"size = " <<vec.size()<<endl;
  cout<< "index of "<<vec.at(0)<<endl;

  for( char val : Vegeto){
      cout<<val <<endl;
  }
   
  return 0;
}