// Calculate the factors of a number

#include<iostream>
void Calculate_factors(int n);

int main(){
    int num;
    std::cout<<"Enter the number to calculate it's factors: ";
    std::cin>>num;
    Calculate_factors(num);
    return 0;
}

void Calculate_factors(int n){
    int i=1;
    std::cout<<"Factors of "<<n<<" are: ";
    while(i<=n){
        if(n%i == 0){
            std::cout<<i;
            if(i<n){
                std::cout<<",";
            }
        }
        i++;
    }
    
    return;
}