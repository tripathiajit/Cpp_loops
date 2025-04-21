// Write a program to print multiplication of any number

#include <iostream>
#define MultiplyLimit 11

int main(){
    int i=1,num;

    std::cout<<"Enter the Variable to print it's multiplication table: ";
    std::cin>>num;
    while(i<MultiplyLimit){
        std::cout<<num<<" * "<<i<<" = "<<num*i<<"\n";
        i++;
    }
    return 0;
}
