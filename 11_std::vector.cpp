#include <iostream>
#include <string>
#include <vector>


struct Verb
{
    float x, y, z;

    Verb(float  x, float y, float z)
        : x(x),y(y),z(z)
    {
    }
    
    Verb(const Verb& vertex)
        : x(vertex.x), y(vertex.y), z(vertex.z)  
    {
        std::cout<<"Copied"<<std::endl;

    };
};


std::ostream& operator<<(std::ostream& stream, const Verb& vertax )
{
    stream<<"[ " << vertax.x << ", " <<vertax.y<<", " <<vertax.z << " ]";
    return stream;
}

int main()
{
    std::vector<Verb> vercccc;
    vercccc.reserve(3);
    vercccc.emplace_back(1,2,3);
    vercccc.emplace_back(4,5,6);
    vercccc.emplace_back(7,8,9);


    // std::cout<<&vercccc<<std::endl;

    for (auto i= vercccc.begin(); i != vercccc.end();i++)
    {
        std::cout<<*i<<std::endl;
    }
    std::cout<<std::endl;
    for (const auto& v:vercccc)
          std::cout<<v<<std::endl;

}