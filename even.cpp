#include<iostream>
int main(){
    int num1;
    std::cout<<"Enter the  value of num1 "<<std::endl;
    std::cin>>num1;
    do{
        if(num1%2==0)
        {
            std::cout<<"Even number"<<std::endl;
            num1++;
        }
        else{
            std::cout<<"Odd Number"<<std::endl;
            num1++;
        }
    }
    while(num1<=10);
    


}