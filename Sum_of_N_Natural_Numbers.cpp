// Calculate the sum of N natural numbers
#include<iostream>
int sum_of_N_natural_numbers_using_formula(int n);
int sum_of_N_natural_numbers_using_loop(int n);
int main(){
    int num;
    std::cout<<"Enter the number to calculate it's sum: ";
    std::cin>>num;
    std::cout<<"Sum of N natural numbers using loop: "<<sum_of_N_natural_numbers_using_loop(num)<<"\nSum of N natural numbers using formula: "<<sum_of_N_natural_numbers_using_formula(num);
    return 0;

}

int sum_of_N_natural_numbers_using_loop(int n){
    int sum=0;
    while(n>0){
        sum += n;
        n--;
    }
    return sum;
     
}

int sum_of_N_natural_numbers_using_formula(int n){
    int sum=0;
    sum = (n*(n+1))/2;
    return sum;
}