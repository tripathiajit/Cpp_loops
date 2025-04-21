#include<iostream>

int main(){
    int num,digit;
    std::cout<<"Enter the number to display it's digit: ";
    std::cin>>num;
    std::cout<<"Digits of "<<num<<"are: ";
    while(num != 0){
        digit = num%10;
        num /= 10;
        std::cout<<" "<<digit;
    }
    return 0;
}