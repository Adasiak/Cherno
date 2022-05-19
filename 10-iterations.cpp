#include<iostream>
#include<vector>
#include<unordered_map>


using namespace std;    

int main(){
    vector<int> valus = {1,2,3,4,5};

    for(int i=0; i<valus.size();i++)
    {
        std::cout<<valus[i]<<std::endl;
    }

    std::cout<<" "<<std::endl;


    for(int i : valus)
    {
        std::cout<<i<<std::endl;
    }

    std::cout<<" "<<std::endl;

    for (vector<int>::iterator it = valus.begin(); it != valus.end(); it ++)
    {
        std::cout<<*it<<std::endl;
    }
    
    std::cout<<" "<<std::endl;

    using Scoremap = unordered_map<std::string, int>; 
    using ScoreMapConstIt = unordered_map<std::string, int>::const_iterator;
    std::unordered_map<std::string, int> map;
    map["Cherno"]=5;
    map["C=++"]=2 ;


    for (ScoreMapConstIt iterator = map.begin(); iterator != map.end(); iterator ++)
    {
        auto & key = iterator->first;
        auto & value = iterator->second;
        std::cout<<key<<" "<<value<<std::endl;
    } 

     std::cout<<" "<<std::endl;

     for(auto kv:map)
     {  
        auto & key = kv.first;
        auto & value = kv.second;
        std::cout<<key<<" "<<value<<std::endl;

     }
    
     std::cout<<" "<<std::endl;

     for (auto [key, value]:map)
     {
         std::cout<<key<<" "<<value<<std::endl;
     }
         

} // namespace std;