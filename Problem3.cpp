#include <iostream>
using namespace std;

int main(){ int min=INT_MAX;
    int Nums[8];
cout <<"Enter 8 numbers"<<endl;
for(int i=0 ;i<8;i++){
    cin>>Nums[i];
    }
for(int i=0 ;i<8;i++){
   if(Nums[i]<min){
    min=Nums[i];
   }
}cout<<"The minimum number is: "<<min;
}
