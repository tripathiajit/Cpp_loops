#include<iostream>

bool IsAPrimeNum(int n);
bool IsAPrimeNum_(int n);

int main(){
    int num;
    std::cout<<"Enter the number to check whether it is a prime or not: ";
    std::cin>>num;
    if(num == 0){
        std::cout<<"Incorrect input";
        exit;
    }
    if(IsAPrimeNum(num)){
        std::cout<<num<<" is a Prime number\n";
    }
    else{
        std::cout<<num<<" is not a Prime number\n";
    }
    if(IsAPrimeNum_(num)){
        std::cout<<num<<" is a Prime number";
    }
    else{
        std::cout<<num<<" is not a Prime number";
    }    
    return 0;
}

bool IsAPrimeNum(int n){
    int i=1;
    while(i<=n){
        if((n%i==0) && ((i != 1) && (i != n))){
        
            return 0;
        }
        i++;
    }
    return 1;
}

bool IsAPrimeNum_(int n){
    int i=1,cnt=0;
    while(i<=n){
        if(n%i==0){
            cnt++;
        }
        i++;
    }
    if(cnt == 2){
        return 1;
    }
    return 0;

}