#include <iostream>

class base
{
    public:
    base(){std::cout<<"base construct"<<std::endl;}
   virtual ~base(){std::cout<<"base destruct"<<std::endl;}

};

class determid: public base
{
    public:
    determid(){std::cout<<"determind construktor"<<std::endl;}
    ~determid(){std::cout<<"determind destruktor "<<std::endl;}
};

int main()
{
    base* cos = new base();
    delete cos;
    std::cout<<"_---------------------------------------------------------\n "<<std::endl;

    determid* mos = new determid();
    delete mos;
    std::cout<<"_---------------------------------------------------------\n "<<std::endl;

    base* moss = new determid();
    delete moss;
    std::cout<<"_---------------------------------------------------------\n "<<std::endl;



    return 0;
}


