#include<iostream>

class Singelton
{
// private:
//     static Singelton* Instance;

public:
    static Singelton& Get()
    {
        static Singelton Instance;
        return Instance;
    };

    void Hello(){std::cout<<"Hello World"<<std::endl;};
};

// Singelton* Singelton::Instance = nullptr ; 

void Function()
{
    static int i = 0;
    i++;
    std::cout<< i <<std::endl;
}

int main ()
{
    Function(); Function(); Function(); Function(); Function(); Function();
    
    Singelton::Get().Hello();
    
    return 0;
}