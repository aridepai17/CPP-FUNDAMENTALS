#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <unordered_set>
#include <algorithm>

class Employee{
    std::string m_Name;
    int m_Id;
    std::string m_ProgLang;
public:
    Employee(const std::string &n, int id, const std::string &p1):
        m_Name(n), m_Id(id), m_ProgLang(p1){

    }
    const std::string & GetName() const{
        return m_Name;
    }
    int GetId() const{
        return m_Id;
    }
    const std::string & GetProgrammingLanguage() const{
        return m_ProgLang;
    }
    // bool operator <(const Employee &e)const {
    //     return m_Id < e.m_Id;
    // }
};

void UserDefined(){
    std::vector<Employee> v{
        Employee{"Batman", 1, "C++"},
        Employee{"Spider Man", 2, "Python"},
        Employee{"Captain America", 3, "Java"},
        Employee{"Hulk", 4, "Rust"},
        Employee{"Doctor Strange", 5, "C"}
    };

    std::sort(v.begin(), v.end(), [](const auto &e1, const auto &e2){
        return e1.GetName() < e2.GetName();
    });

    for(const auto &e: v){
        std::cout << "ID: " << e.GetId() << " Name: " << e.GetName() << " Programming Language: " << e.GetProgrammingLanguage() << std::endl;
    }
    int cppCount{};
    // for (const auto &e: v){
    //     if(e.GetProgrammingLanguage() == "C++"){
    //        cppCount++;
    //     }
    // }

    // cppCount = std::count(v.begin(), v.end(), Employee{"C++", 1, "C++"});
    // std::cout << "C++ Count: " << cppCount << std::endl;

    cppCount = std::count_if(v.begin(), v.end(), [](const auto &e){
        return e.GetProgrammingLanguage() == "C++";
    });
    std::cout << "C++ Count: " << cppCount << std::endl;

    auto itr = std::find_if(v.begin(), v.end(), [](const auto &e){
        return e.GetProgrammingLanguage() == "Java";
        });
    if(itr != v.end()){
        std::cout << "Found: " << itr->GetName() << "is a Java Developer" << std::endl;
    }
    
    std::for_each(v.begin(), v.end(), [](const auto &e){
        std::cout << e.GetName() << std::endl;
    });
}

struct EmpCompare{
    bool operator()(const Employee &e1, const Employee &e2){
        return e1.GetId() < e2.GetId();
    }
};

void Set(){
    std::set<Employee> v{
        Employee{"Batman", 1, "C++"},
        Employee{"Spider Man", 2, "Python"},
        Employee{"Captain America", 3, "Java"},
        Employee{"Hulk", 4, "Rust"},
        Employee{"Doctor Strange", 5, "C"}
    };
    for (const auto &e: v){
        std::cout << "ID: " << e.GetId() << " Name: " << e.GetName() << " Programming Language: " << e.GetProgrammingLanguage() << std::endl;
    }
}

int main(){
    UserDefined();
    Set();
    return 0;
}