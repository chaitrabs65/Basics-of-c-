#include<iostream>
#include<iomanip>
int main(){
    auto value{23};
    value++;
    std::cout<<"value== "<<value++<<std::endl;//so how it works means first it use the value of 24 after the ending of that statment it gonna increment it 
    std::cout<<"value== "<<value<<std::endl;
     std::cout<<"value== "<<++value<<std::endl;//this will fistly increment 

     std::cout<<"===========post decrement and post increment"<<std::endl;
     auto value1{3.35f};
     value1--;
     std::cout<<std::fixed<<std::setprecision(2);//Remember everything works fine for icrement and decrement(means float int ) it de
     std::cout<<"value==  "<<value1--<<std::endl;
     std::cout<<"value== "<<value1<<std::endl;
    std::cout<<"value==  "<<--value1<<std::endl;

    
    


}