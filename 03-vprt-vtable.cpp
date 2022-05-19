

#include <iostream>
#include <string>
#include <vector>

using namespace std;
class hau
{
    public:
        virtual void printttt(){std::cout<<"hua virt pritttttt"<<std::endl;};
        virtual void ffoooo(){std::cout<<"hau virt fooo"<<std::endl;};
};

class miau: public hau //vtable vprt
{
    public:
        void printttt() override {std::cout<<"maiu printtt"<<std::endl;};
        void ffoooo() override {std::cout<<"miau fooo"<<std::endl;};

};

int main()
{
    hau* sj;
    sj=new miau;
    sj->hau::ffoooo();
    sj->printttt();
     sj->ffoooo();
    return 0;
}