#include<iostream>
#include<string>

static int level = 1;
static int speed =2;


int main ()
{
     if (level>5)
        speed = 10;
    else    
        speed = 5;

    std::cout<<speed<<std::endl;
    level = 22;

    speed = level > 5 ? 10 : 5;
    std::cout<<speed<<std::endl;

    std::string rank = level >10 ? "master":"beginer";
        std::cout<<rank<<std::endl;
    level = 3;
    speed = level > 5 ? level >10 ? 15:10:5;
       std::cout<<speed<<std::endl;
    

}