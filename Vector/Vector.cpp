#include<iostream>
#include<vector>
using namespace std;

int main(){

  vector <int>vec={2,7,11,15};
 vector <int>ans;
  int target = 9;
  
  // vector <char> Vegeto = {'a','g', 'n'};

  // vec.push_back(25);
  // vec.push_back(28);
  // vec.pop_back();

  //  cout<<"front is " <<vec.front()<<endl;
  // cout<<"size = " <<vec.size()<<endl;
  // cout<< "index of "<<vec.at(0)<<endl;

  // for( char val : Vegeto){
  //     cout<<val <<endl;
  // }
   
for (int i =0;i<vec.size();i++){
    for(int j=i+1; j<vec.size();j++){
        if(vec[i] + vec[j] == target){
          ans.push_back(i);
          ans.push_back(j);

        
        }
    }
 
  } 
  


  return 0;
}