#include<iostream>
int main(){
  bool red_light{true};
    bool yellow_light{false};
    if(!red_light){
        std::cout<<"I am good girl"<<std::endl;

    }
    else{
        std::cout<<"Abin is my food"<<std::endl;

    }
    std::cout<<"Red_light="<<red_light<<std::endl;
    std::cout<<std::boolalpha;//This applied for the all the statements below it not above it
    std::cout<<"yellow light=="<<yellow_light<<std::endl; 


    
}