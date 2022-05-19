#include<iostream>


int& getvalue()
{   
    static int value=18;
    return value;
};

void stevalue(int& vava)
{

}

void prinrtname(std::string & name )
{
    std::cout<<"ivalue"<<"  "<< name <<std::endl;
}


void prinrtname(std::string && name )
{
    std::cout<< "rvalue"<<"  "<<name <<std::endl;
}

int main()
{
    int i=getvalue();
    int temp = 72;
    const int & a=temp;
    // int a =i;
    getvalue()=2;
    stevalue(i);
    stevalue(i);

    std::cout<<"i="<<i<<" "<<"a="<<getvalue()<<std::endl;



    std::string firstname = "Wiktor";
    std::string lastnamem ="Adasiak";

    std::string    fullname = firstname + lastnamem;

    prinrtname(fullname);
    prinrtname(firstname + lastnamem);
}