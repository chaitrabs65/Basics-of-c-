#include<iostream>
#include<iomanip>
int main(){
  /* int age;
    std::string person_name;//see here if you need use the string you must include the header file std or simply do like this
    std::cout<<"please enter the name and age of a person ="<<std::endl;//so here for output statment why we use the << this means here data is flowing from the programm into the cout that displayed on the console
    std::cin>>person_name>>age;//so here cin is the input statment the data is flowing from the terminal to the cin so we use >> this symbol so here in the only disadavtage is we cant use the space while giving the name 
    // std::cout<<"My name is="<<person_name<<"My age is="<<age<<std::endl;*/

   /* int age3;
    std::string name;
    std::cout<<"Enter the name and age of the person "<<std::endl;
    std::getline(std::cin,name);//the getline is used overcome the problem of space if we need to give the name with this can be used
    std::cin>>age3;
    std::cout<<"My name is "<<name<<"My age is "<<age3<<"This much year old Iam"<<std::endl;*/



    //They are three types of intialization 
    //braced intialization
    /*int Chaitra_age;//this will intialize with the garabage values
    int apple_count{};//intializes with the zero
    int abin_age{25};//intializes with zero
    int banana_count{34};
    float Abin_salary{72.5};
    // int chaitra_num{233.9};see here in case of braced intialization intializing of floating point number to the int gives complie error
    int sum{abin_age+banana_count};//this will add those two things
    std::cout<<"chaitra age "<<Chaitra_age<<std::endl;
    std::cout<<"sum ="<<sum<<std::endl;
    std::cout<<"size of int="<<sizeof(int)<<std::endl;
    std::cout<<"size of double="<<sizeof(double);*/


    //paranthese or functional  intailization
    // int age();//intailizes zero
    // int salary(33.5);//doesnot give any complier error just assign the value of 33 instead of 33.5

    //Assignment intailization
    // int age=12;
    // int Age=132.4;//this also doesnt give any complier error 


    //there two types int singed and unsinged . By deafult it is singed (means both positive and negative values) in the binary reprasentation 0 represent the singed and 1 repreasents the unsigned
    //singed(2^n-1 to 2^n-1-1)and unsinges (0 to 2^n-1-1)
    //short int is 2byte and for long int =4 or 8byte
    

    // Floating number
    float salary(130.2242424242424f);//for floating point you need to expliciptly
    double number1(22332.42422424);
    long double number2(3.3335353353L);
    std::cout<<"size of double "<<sizeof(double)<<std::endl;
    std::cout<<"size of long double"<<sizeof(_LONGDOUBLE)<<std::endl;

    std::cout<<std::setprecision(5);//we can able to controt the prescision if we need to use the setprecision we need to include the header file #include<iomanip>
    std::cout<<"salary  "<<salary<<std::endl;
    std::cout<<"number1 "<<number1<<std::endl;
    std::cout<<"number2 "<<number2<<std::endl;

    std::cout<<std::fixed<<std::setprecision(5);
    std::cout<<"salary  "<<salary<<std::endl;
    std::cout<<"number1 "<<number1<<std::endl;
    std::cout<<"number2 "<<number2<<std::endl;

    

    return 0;


}