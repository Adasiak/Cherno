#include<iostream>
#include<string>
#include<memory>

class String
{
private:
    char * buffer;
    uint32_t size;
public:
    String(const char* string)
    {   
        std::cout<<"main"<<std::endl;
        size=strlen(string);
        buffer=new char[size +1];
        memcpy(buffer, string, size);

        buffer[size] =0;

    }
     
     String(const String& other)
        :buffer(other.buffer), size(other.size)
    {   
        std::cout<<"coping"<<std::endl;
        size=other.size;
        buffer=new char[size +1];
        memcpy(buffer, other.buffer, size );

        buffer[size] =0;

    }

    String(String&& other)
        :buffer(other.buffer), size(other.size)
    {   
        std::cout<<"moving"<<std::endl;
        size=other.size;
        buffer=other.buffer;
        memcpy(buffer, other.buffer, size);

        other.size=0;
        other.buffer = nullptr;
    }

    ~String()
    {
        std::cout<<"destruct of String "<<std::endl;
        delete[] buffer;
    }
    friend std::ostream& operator<<(std::ostream& stream , const String& string);

    char & operator[](uint32_t index)
    {
        return buffer[index];
    }
};

std::ostream& operator<<(std::ostream& stream , const String& string)
    {
        stream << string.buffer;
        return stream;
    }


int main()
{
    String string ="cherno";
    String sec =string ;
    
    sec[2]='w';
    
    std::cout<<string<<std::endl;

    std::cout<<sec<<std::endl;

    std::cin.get();

}