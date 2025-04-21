#include<iostream>

int main(){
    int n1,n2,m1,m2;
    std::cout<<"Enter the two numbers to find thier GCD: ";
    std::cin>>n1>>n2;
    m1=n1;
    m2=n2;

    while(n1 != n2){
        if(n1>n2){
            n1 -= n2;
        }
        else if(n2>n1){
            n2 -= n1;
        }
    }
    std::cout<<"GCD of "<<m1<<" and "<<m2<<" is "<<n1;
    return 0;
}