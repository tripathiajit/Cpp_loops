#include<iostream>

bool IsAPrimeNum(int n);
bool CheckEvenOdd(int n);

int main(){
    int num;
    std::cout<<"Enter the number to check whether it is a even or odd and prime or not: ";
    std::cin>>num;  
    if(num <= 1){
        std::cout<<"Incorrect input";
        exit;
    }
    if(CheckEvenOdd(num)){
        if(IsAPrimeNum(num)){
            std::cout<<num<<" is an odd and prime number";
        }
        else{
            std::cout<<num<<" is an odd and not a prime number";
        }
    }
    else{
        if(IsAPrimeNum(num)){
            std::cout<<num<<" is an even and prime number";
        }
        else{
            std::cout<<num<<" is an even and not a prime number";
        }
    }
    return 0;
}

bool CheckEvenOdd(int n){
    if(n&1){
        return true;
    }
    return false;
}

bool IsAPrimeNum(int n){
    if(n == 2){
        return true;
    }
    if(!(n&1)) return false;
    for(int i=3; i*i<=n; i+=2){
        if(n%i == 0)return false;
    }
    return true;
}
