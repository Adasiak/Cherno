#include <iostream>
#include <string>

class Enity
{
private:

public:
    int x;
    void Print() const {std::cout<<"Hello word"<<std::endl; };

};


class Scopr
{
private:
    Enity* Obj;
public:
    Scopr(Enity* enity) : Obj(enity)
    {

    }

    Enity* Getobj(){return Obj;};
    
    ~Scopr()
    {
        delete Obj;
    }
};

int main()
{
    Enity e;
    e.Print();
    std::cout<<std::endl;
    Enity * ptr =&e;
    Enity & enity = *ptr;
    
    (*ptr).Print();
    std::cout<<std::endl;
    

    ptr->x = 2;
    std::cout<<ptr->x<<std::endl;
    ptr ->Print();

    Scopr  scr = new Enity();
    scr.Getobj()->Print();


}