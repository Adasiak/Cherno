#include <iostream>
#include <string>

class Enity
{
private:

public:
    Enity()
    {
        std::cout<<"Constructor of Enity"<<std::endl;
    }

    ~Enity()
    {
        std::cout<<"Detructor of Enity"<<std::endl;
    }

};

int * Arrauy()
{
    int* array= new int[50];
    return array;
};

class ScopePtr
{
private:
    Enity* Mptr;
public:
    ScopePtr(Enity* ptr) : Mptr(ptr)  
    {
        std::cout<<"constructor of scorpe "<<std::endl;
    }
    ~ScopePtr()
    {
        std::cout<<"Destructor of scorpe "<<std::endl;
        delete Mptr;
    }
};

int main()
{
    
        ScopePtr e =new Enity();
        // Enity e= new Enity();
    
    // int array[50];
    // Arrauy(array);
    // for (auto* m : array)
    //     std::cout<<m<<std::endl;
    // { 
    //     ScopePtr M(new Enity());

    // }

    // std::cin.get();
    return 0;
}