#include <iostream>
using namespace std;

int main(){ int N;
cout << "Enter The Number of digits"<<endl;
cin >> N;
int numbers[N];
cout <<"Enter The Elemnts"<<endl;
for(int i=N-1 ; i>=0;i--){
    cin>>numbers[i];
}
for(int i=N-1 ; i>=0;i--){
   if(numbers[i]>0){
    numbers[i]=1;
   }else if(numbers[i]<0){
    numbers[i]=2;
   }
}
for(int i=N-1 ; i>=0;i--){
    cout<<numbers[i]<<" ";
}
}
