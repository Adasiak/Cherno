#include <iostream>
#include <string>

class String
{
    private:
    char*  mbape;
    unsigned int size;
    public:
    String(const char* string)
    {
        size=strlen(string);
        mbape= new char[size +1];
        // std::cout<<"const cos   "<<std::endl;
       memcpy(mbape,string,size);
       mbape[size]=0;
    } 

    String(const String &other)
        :mbape(other.mbape),size(other.size) 
    {
        std::cout<<"coppi"<<std::endl;
        mbape =  new char[size+1];
        memcpy(mbape, other.mbape, sizeof(String)+1);
    }

    ~String()
    {
        delete[] mbape ;
    }

    char& operator[](unsigned int index)
    {
        return mbape[index];
    }




    friend std::ostream &operator<<(std::ostream &stream, const String &string);
};

class kk:public String
{
    public:
};

std::ostream &operator<<(std::ostream &stream, const String &string)
{
    stream << string.mbape;
    return  stream;

}

void Prinss(const String& string)
{
    std::cout<<string<<std::endl;
}

int main()
{
    String string = "string";

    String seckond = string;

    seckond[2]='w';
    Prinss(string);
    
    Prinss(seckond);
    

    return 0;

}
