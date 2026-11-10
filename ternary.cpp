#include<iostream>
int main(){
    int a;
    std::cout<<"Enter the values of a and b="<<std::endl;
    std::cin>>a;
   auto max=(a>=12.4)?a:12.4;
    std::cout<<"output="<<max<<std::endl;
    return 0;


}