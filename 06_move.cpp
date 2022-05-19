#include <iostream>
#include <memory>
#include <string>

class enity
{
public:
    enity() = default;
    //constructor
    enity(const char* enityy)
    {
        printf("Done\n");
        Size = strlen(enityy);
        Data =  new char[Size];
        memcpy(Data, enityy, Size);

    }
    //coping constructor
    enity(const enity& other)
    {
        printf("Done copping \n");
        Size = other.Size;
        Data =  new char[Size];
        memcpy(Data, other.Data, Size);

    }
    // move constructor 
    enity(enity&& other) noexcept
    {
        printf("Moved  \n");
        Size = other.Size;
        Data =  other.Data;

        other.Size= 0;
        other.Data = nullptr;


    }


    ~enity()
    {
        std::cout<<"Destroyed"<<std::endl;
        delete Data;

    }
    void Print()
    {
        for (uint32_t i=0; i< Size; i++)
        {
            printf("%c",  Data[i]);
        }
        printf("\n");

    }

private:
    char* Data;
    uint32_t Size;

};

class monkey
{
public:
    // coping constuructor
    monkey(const enity& name) : Name(name)
    {

    }
    // move constructor //////////////////////////////////
    monkey(enity&& name) : Name((enity&&)name)          //
    {                                                   //
                                                        //  
    }                                                   //
    //////////////////////////////////////////////////////
    void Printname()
    {
        Name.Print();
    }

private:
    enity Name;

};
 


int main ()
{

    monkey mooonkey("butter");
    mooonkey.Printname();
    
    
    return 0;
}
