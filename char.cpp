#include<iostream>
int main(){
    char ch{'a'};
    char Ch{34};
    char character{23};
    std::cout<<"value of ch "<<ch<<std::endl;
    std::cout<<"character="<<Ch<<std::endl;
    std::cout<<"character in terms of integer="<<(int)Ch<<std::endl;
    std::cout<<"character 23 in terms integer "<<static_cast<int>(character)<<std::endl;

}