#include <iostream>
#include <memory>
#include <string>


class Enity
{
private:
    std::string name = "SOmething";
public:
    Enity()
    {
        std::cout<<"Constructor of Enity"<<std::endl;
    }
    ~Enity()
    {
        std::cout<<"Destructor of Enity"<<std::endl;
    }
    void Getname()
    {
        std::cout<<name<<std::endl;
    }
};

int main()
{
    // std::unique_ptr<Enity> enity(new Enity());
    // enity->Getname();
    

    std::shared_ptr<Enity> e1 =std::make_shared<Enity>();
        std::cout<<e1<<std::endl;
    
    {
        std::shared_ptr<Enity> e2 =e1;
        e2->Getname();
        // for (auto i = 0 ; i < e1.use_count();i++ )
    }

    e1->Getname(); 

    {
        // std::weak_ptr<Enity> e4 =std::make_weak<Enity>();
    }

}   