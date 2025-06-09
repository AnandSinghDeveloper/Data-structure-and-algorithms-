#include <iostream>
using namespace std;

int main(){
// int Arrat1[10] = {1,2,3,4,5,6,7,8,9,10}; // yaha pe ham array ka size predifine kar rahe hain 

//  int i[]={1,2,3,4,5,6,7,8};// jab ham array ka size define nhi karte to array apne aap hi acorrding to vlue adjeust ho jata hain 
 cout<<"Hello Let's start learning array"<<endl;


 // loop in array

//  int arr = 5 ; 
//    int Array[arr];

//    for(int i=0;i<arr;i++){
//      cin>>Array[i];
//    }

//    for(int i=0; i<arr; i++ ){
//        cout<<Array[i]<<endl;
//    }
//---------------------------------------------------------------------------------
//  Q.1 find a smallest number in array

//  int size = 5;
//  int arr[size];
//  int smallestnum = INT16_MAX ;  // INT_MAX is a constant in C++ which is used to represent the maximum value of an integer
 
//  for(int i=0;i<size;i++){
//      cin>>arr[i];
//  } 

//  for(int i=0; i<size;i++){
    
//       if(arr[i] < smallestnum){
//          smallestnum = arr[i];
         
         
//       }
//---------------------------------------------------------------------------------    
    
//  }
  
 
  // cout<<"smallest number is "<<smallestnum<<endl;

  // Q.2 find a largest number in array and return his index
       
  // int size = 5;
  // int arr[size]={1,7,3,4,5};
  // int smallestnum = INT16_MIN ;  
  // int index;
  // for(int i=0; i<size;i++){
  //      if(arr[i] > smallestnum){
  //          smallestnum = arr[i];
  //           index = i;
  //      }
  // }
  //         cout<<" largest index number is "<<index<< endl;

//--------------------------------------------------------------------------------------

   // Q.3 linear search

   int target = 5;
   int size = 5;
   int arr[]={1,7,3,4,5};

   for(int i=0; i<size; i++){
       if(arr[i] == target){
           cout<<" target number is found at index "<<i<<endl;
       }
   }
   

  return 0;
}