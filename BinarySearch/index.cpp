#include <iostream>
using namespace std;
#include <vector>

int binarySearch( vector<int> arr, int target){
  int st = 0, end = arr.size()-1;
  
 

  while (st <= end){

    int mid = (st + end) / 2;

    if (arr[mid] > target)
    {
      end = mid - 1;
    }
    else if (arr[mid] < target)
    {
      st = mid + 1;
    }
    else if (arr[mid] == target)
    {
      return mid;
    }
  
  }
return -1;

 
}

  int main(){
  
 vector <int> arrey={1,2,4,5,6,7,8,9,12,13,15,20};  
     
 cout<<binarySearch(arrey,2);
    return 0;
  }