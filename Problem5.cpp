#include <iostream>
using namespace std;

int main(){ int n;
int counter;
int Numbers[10];
cout << "Enter Ten Numbers"<<endl;
for(int i=0 ; i<10;i++){
    cin>>Numbers[i];}
cout <<"The Values Are "<<endl;    
for(int i=0 ; i<10;i++){
    cout<<Numbers[i]<<" ";}
cout <<"\nEnter A Number "<<endl;
cin >>n;
for(int i=0 ; i<10;i++){
    if(Numbers[i]==n){
        counter++;
    }
}cout <<"The Number Was Repeated: "<<counter<<" Times";
}
