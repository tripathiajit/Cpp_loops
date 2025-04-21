#include<iostream>
bool perfect_num(int n);

int main(){
    int num;
    std::cout<<"Enter the number to check whether it is a perfect or not: ";
    std::cin>>num;
    if(num == 0){
        std::cout<<"Incorrect input";
        exit;
    }
    if(perfect_num(num)){
        std::cout<<num<<" is a perfect number";
    }// TO DO
    else{
        std::cout<<num<<" is not a perfect number";
    }
}

bool perfect_num(int n){
    int i=1,sum=0;
    while(i<n){
        if(n%i == 0){
            sum += i;
        }
        i++;
    }
    if(n == sum){
        return 1;
    }
    return 0;

}