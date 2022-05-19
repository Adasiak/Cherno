#include<iostream>
#include<memory>
#include<string>



class Enity
{
private:
    std::string name;
    char* nameee;
    unsigned int size;
public:
    Enity(const char* string)
    {
        std::cout<<"Constr of ENity"<<std::endl;
        size =strlen(string);
        nameee = new char[size +1];
        memcpy(nameee,string , size);
        nameee[size]=0;
    }
    Enity(const Enity & other) 
        :nameee(other.nameee) , size(other.size)
    {
        std::cout<<"coping constructor"<<std::endl;
        size = other.size;
        nameee = other.nameee;
        memcpy(nameee,other.nameee , size);
    }
    Enity(Enity&& other)
        // :nameee(std::move(nameee)) , size(std::move(size))
    {
        std::cout<<"MOving Const"<<std::endl; 
        size = other.size;
        nameee = other.nameee;
        
        other.size = 0;
        other.nameee = nullptr;
    }

    ~Enity()
    {
        std::cout<<"Destroyyyyy"<<std::endl;
        delete nameee;
    }

    void Name()
    {
        for(auto i = 0; i< size; i++ )
            printf("%c", nameee[i]) ;   
        
        std::cout<<std::endl;
    }

};


class Dron
{
private:
    Enity Nameofdrone = "cat & path";
public:
    Dron()
    {  
        std::cout<<"const of drone"<<std::endl; 
    }
    ~Dron()
    {
        std::cout<<"destruct of drone"<<std::endl;
    }

    void Getname()
    {
        Nameofdrone.Name();
    }
    
};


int main ()
{
    std::shared_ptr<Dron> Draas = std::make_shared<Dron>();
    Draas->Getname();

    

}