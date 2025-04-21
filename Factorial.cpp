// Write a program to calculate the factorial of a number
#include<iostream>
int fact(int n);

int main(){
    int num;
    std::cout<<"Enter the number to calculate it's factorial: ";
    std::cin>>num;
    std::cout<<"Factorial of "<<num<<" is "<<fact(num);
    return 0;
}

int fact(int n){
    int f=1;
    if(n == 0){
        return 1;
    }
    else{
        while(n>0){
            f *= n;
            n--;
        }
    }
    return f;
    
}