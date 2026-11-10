
int Numbers(int num1,int num2){
    int result=num1+num2;
    return result;
}



#include<iostream>
int main(){
    int fist_numbers={12};//here instead of assingnement operator we can also use {68} like this remeber you cant use the assingnment operator a
    int second_number={23};
    // int second_number{23}; see this syntax also valid

    int sum=fist_numbers+second_number;
    std::cout<<"sum="<<sum<<std::endl;
    sum=Numbers(34,23);
    std::cout<<"sum= "<<sum<<std::endl;
    return 0;
}