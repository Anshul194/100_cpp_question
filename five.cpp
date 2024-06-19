//14. Write a C++ program that calculates the volume of a sphere.

#include<iostream>
using namespace std;
int main(){
    int radius;
    float pi=3.14,volume;
    cout<<"Enter the radius :";
    cin>>radius;
    volume=(4*pi*radius*radius*radius)/3;
    cout<<"volume :"<<volume;

}