#include <iostream>
#include <string>

class entry
{
    public:
    // entry();
    // ~entry(){std::cout<<"entry destruktor"<<std::endl;};

    virtual std::string Getname(){return "Entry";};
};

class joy : public entry
{
    private:
    std::string mayname;

    public:
    joy(const std::string& name) : mayname(name){};
    // ~joy(){std::cout<<"joyy dest"<<std::endl;};
    std::string Getname() override {return mayname;};

};

void Printname(entry* ee)
{
    std::cout<<ee->Getname()<<std::endl;
}

int main()
{
    entry* e = new entry();
    Printname(e);
    std::cout<<std::endl;
    
    joy* p = new joy("cherno");
    Printname(p);
    std::cout<<std::endl;

    entry* z = p;
    Printname(z);


    return 0;
};

