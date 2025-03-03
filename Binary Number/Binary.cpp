#include <iostream>
using namespace std;

int main() {
  int n;
  int binaryNumber=0;
  int pow= 1;
  cin >> n;
   
 while (n>0){   
  int rem = n%2;
   n /= 2;
   binaryNumber += (rem*pow);
  pow *= 10;
    
 } 
cout<<binaryNumber;

  
  return 0;
}
