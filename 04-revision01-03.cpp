#include <iostream>
#include <string>


class slowo
{   

    public:
    // slowo(){std::cout<<"slowo konst "<<std::endl;}
    // virtual ~slowo(){std::cout<<"slowo dest "<<std::endl;}
    virtual std::string getname(){return "Ńslowo";};
};

class kot:public slowo{
    protected:
    std::string koteczekkkkkkk;
    public:
    kot (const std::string& kotus) : koteczekkkkkkk(kotus){};
    ~kot(){std::cout<<"kot destruktor"<<std::endl;}
    std::string getname() {return koteczekkkkkkk;};
};

void printnamemame(slowo* e)
{
    std::cout<<e->getname()<<std::endl;
}

int main ()
{   
    slowo* svj;
    svj=new kot("kkkkkkkkkk");
    printnamemame(svj);
    
    return 0;
}