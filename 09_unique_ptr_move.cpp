#include<iostream>
#include<memory>

using namespace std;

int main()
{   
    int *p1 = new int;
    *p1 =10;
    unique_ptr<int> up1(p1);

    cout<<"up1= "<<*up1<<endl ; 
    unique_ptr<int> up2;

    up2=std::move(up1);
    cout<<"up1= "<<up1<<endl ; 
    cout<<"up2= "<<*up2<<endl ; 
}
