// Write a C++ program that takes a number as input and prints its multiplication table up to 10.

#include<iostream>
using namespace std;
int main(){
    int number,i,table;
    
    cout<<"Enter the number which you want table  :";
    cin>>number;
for(int i=1;i<=10;i++){
    table=number*i;
    cout<<number<<"*"<<i<<"="<<table<<"\n";
}
}