#include<iostream>
using namespace std;


 void changep(int* p){
   *p = 20;
 };
int main(){

  // pointer is special variable which store the address of another variable
  int a= 10 ;
  // int* p = &a;
  changep(&a);

// in this pointer p store the address of a 

// * => dereference operator - it is used to access the value at the address stored in the pointer variable
  // int** q = &p;
  // cout<<*(p)<<endl;

  cout<<a<<endl;

  // Null pointer- a pointer which is not pointing to any address
  int* r = NULL;
  cout<<r<<endl;
  


  return 0;
}