#include <iostream>
using namespace std;
 void printName(string name){
   cout<<name<<endl;
 }

// calculate sum of 1 to n

int sumOfN (int n){
 int sum = 0;
  for(int i=1;i<=n;i++ ){
    sum = sum+i ;

  }
  cout<<sum ;

}

// calculate n factorial

int factorialOfN(int n ){
  int factorial= 0 ;
  for(int i=1;i<=n;i++){
    if(n % i == 0 ){
      factorial=factorial+1;
    }
  } 

  cout<<factorial;
}


int main(){

  // printName("Anand thakur");
  // sumOfN(5);
  factorialOfN(9);

  return 0;
}