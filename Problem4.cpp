#include <iostream>
using namespace std;

int main(){
int Numbers[10];
cout << "Enter Ten Numbers"<<endl;
for(int i=0 ; i<10;i++){
    cin>>Numbers[i];}
int counterp=0; 
int countern=0;   
for(int i=0 ; i<10;i++){
    if(Numbers[i]>0){
        counterp++;
    }
    if(Numbers[i]<0){
        countern++;
    }    }
cout <<"The Negative Numbers are Repeated "<<countern<<" Times"<<endl;
cout <<"The Positive Numbers are Repeated "<<counterp<<" Times"<<endl;
cout <<"The Zeros are Repeated "<<(10-countern-counterp)<<" Times"<<endl;
}
