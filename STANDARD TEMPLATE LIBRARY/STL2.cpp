#include <iostream>
#include <set>
#include <functional>
#include <map>
#include <string.h>
#include <vector>

void Set(){
    std::multiset<int , std::greater<int>> s{8,2,0,9,5};
    s.insert(1);
    s.insert(3);
    s.insert(3);
    s.insert(3);

    auto itr = s.begin();
    // *itr = 3;
    while (itr != s.end()){
        std::cout << *itr++ << " ";
    }
    std::cout << std::endl;
    s.erase(0);
    s.erase(s.begin());
    itr = s.find(9);
    if (itr != s.end()){
        std::cout << "Element found" << std::endl;
    }
    else{
        std::cout << "Element not found" << std::endl;
    }
    auto found = s.equal_range(3);
    while (found.first != found.second){
        std::cout << *found.first++ << " ";
    }
}

void Map(){
    std::map<int, std::string> m{
        {1, "Iron Man"},
        {2, "Captain America"},
        {3, "Thor"},
        {4, "Hulk"}
    };
    m.insert(std::pair<int , std::string>(7, "Black Widow"));
    m.insert(std::make_pair(10, "Hawkeye"));
    
    m[0] = "Deadpool";
    m[5] = "Spider Man";
    m[6] = "Black Panther";

    auto itr = m.begin();
    std::cout << itr->first << " " << itr->second << std::endl;
    ++itr;

    for (const auto& x: m){
        std::cout << x.first << " " << x.second << std::endl;
    }
    std::cout << "10: " << m[10] << std::endl;
    for (const auto& x: m){
        std::cout << x.first << " " << x.second << std::endl;
    }
}

int main(){
    Set();
    Map();
    return 0;
}