#include <iostream>
using namespace std;

int main(){ int N,counter=0;
cout << "Enter The Number of digits"<<endl;
cin >> N;
int numbers[N];
int numbersreverse[N];
cout <<"Enter The Elemnts"<<endl;
for(int i=0 ; i<=N-1;i++){
    cin>>numbers[i];}
for(int i=0 ; i<=N-1;i++){
    numbersreverse[i]=numbers[N-1-i];}
for(int i=0 ; i<=N-1;i++){
    if(numbers[i]==numbersreverse[i]){
        counter++;
    }
}if(counter==N){
    cout<<"Yes"<<endl;
}else{cout<<"No"<<endl;}
}
