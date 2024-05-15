#include <iostream>
using namespace std;

int main(){ int sum=0;
int average;
int Grades[5]={87,67,81,90,55};
for(int i=0 ;i<5;i++){
    sum=sum+Grades[i];}
average=sum/5;
cout <<"The Average Is: "<<average<<endl;
}
