#include <iostream>
#include <memory>  
// #include <string>

using namespace std;

class enity
{
    public:
    enity(){std::cout<<"consturktor od enity"<<std::endl;};

    ~enity(){std::cout<<"detructor od enity"<<std::endl;};

    void printsomething()
    {
        std::cout<<"option 1"<<std::endl;
    }
    
    void printsomethingmore()
    {
        std::cout<<"option 2"<<std::endl;
    }

};

int main()
{
    //OPCJA NUMER 1
    // {
    //     std::unique_ptr<enity> entityyy(new enity());

    //     entityyy->printsomething();
    // }

    // // OPCJA NUMER 2
    // {
    //     std::unique_ptr<enity> enitiii = std::make_unique<enity>();

    //     enitiii->printsomethingmore();

    // }
    
        // std::unique_ptr<enity> Uniqptr1 = std::make_unique<enity>(new enity());
        // std::unique_ptr<enity> Uniqptr2 = std::move(Uniqptr1);
        // std::cout<<Uniqptr1<<std::endl;
        // std::cout<<*Uniqptr1<<std::endl;
        // std::cout<<*Uniqptr2<<std::endl;

        // shared_ptr<enity> eniiity = make_shared<enity>();
        // cout<<"shared cout "<<eniiity.use_count()<<endl;
        // {
        //     shared_ptr<enity> e2 = eniiity;
        //     cout<<"shared cout "<<eniiity.use_count()<<endl;
        // }
        //     cout<<"shared cout "<<eniiity.use_count()<<endl;

        
        weak_ptr<int> eniiity ;
        {
            shared_ptr<int> e2 = make_shared<int>(22);
            eniiity = e2; 

            cout<< eniiity.use_count()<<endl;

        }

        cout<< eniiity.use_count()<<endl;
        




    
    return 0;
}