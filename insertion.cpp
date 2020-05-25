#include <iostream>
#include<bits/stdc++.h>
using namespace std;

 int main()
 {
   int val,j;
   vector<int>arr={7,4,8,3,6,9};
 for(int i=1;i<arr.size();i++){
     val=arr[i];
     j=i-1;
 while(j>=0 && val<arr[j]){
     arr[j+1]=arr[j];
     j--;
 }
 arr[j+1]=val;
 }//completed 
 for(int k=0;k<arr.size();k++){//to print sorted vector
    cout<<arr[k]<<" ";
 }
    return 0;
 }
