/*Wirte a c++ Program to:
1- declare the array={10,20,35,42,58,60}
2- asks for and index and a number from user
3- then check the number at the indicated index if not found print"not found" else print"found"
  */
#include <iostream>
using namespace std;

int main(){ 
    int arr[6]{10,20,35,42,58,60}, index ,Num;
cout <<"Please Enter An Index From 1 to 6"<<endl;
cin>>index;
cout <<"Please Enter A Number To Check"<<endl;
cin>>Num;
if(arr[index-1]==Num){
    cout<<"Found";
}else{cout<<"Not Found";}
}
