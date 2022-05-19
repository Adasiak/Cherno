#include<iostream>
#include<memory>


class String 
{
private:
    char * mData;
    uint32_t mSize;

public:
    String() = default;
    String(const char* string)
    {
        printf("Created !\n");
        mSize = strlen(string);
        mData = new char[mSize];
        memcpy(mData, string, mSize);

    }

    String(const String & other)
    {
        printf("Copping  !\n");
        mSize = other.mSize;
        mData = new char[mSize];
        memcpy(mData, other.mData, mSize);

    }

    String(String && other) 
    {
        printf("Moved !\n");
        mSize = other.mSize;
        mData = other.mData;

        other.mSize = 0;
        other.mData = nullptr;
    }

    String& operator=(String&& other ) 
    {
        printf("Moved !\n");
        if (this !=  &other)
        {
            delete[] mData; 

            mSize = other.mSize;
            mData = other.mData;

            other.mSize = 0;
            other.mData = nullptr;
        }

        return *this;
    }


    ~String()
    {
        printf("Destroyed !\n");
        delete mData;
    }

    void Print()
    {
        for(uint32_t i=0; i<mSize;i++)
        {
            printf("%c",  mData[i]);

        }
        printf("\n");
    }


};


class Enity : public String
{
private:
    String mName;

public:
    Enity(const String& name) 
        : mName(name)
    {
    }

    Enity(String&& name) 
        : mName(std::move(name))
    {
    }

    void Printname()
    {
        mName.Print();
    }

};


int main()
{
    // Enity enity("cherno");
    // enity.Printname();  

    // String string = "hello ";
    // String destr = std::move(string); //String destr(std::move(string)); its the same 
    

    // destr = std::move(string);

    String apple ="Apple";
    String des ="" ;
    std::cout<<"Apple:    ";
    apple.Print();
    std::cout<<"des:    ";
    des.Print();
    des=std::move(apple);
    std::cout<<"Apple:    ";
    apple.Print();
    std::cout<<"des:    ";
    des.Print();

    // std::cin.get();
    // return 0;
}