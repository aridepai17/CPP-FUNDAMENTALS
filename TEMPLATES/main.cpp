#include "Integer.h"
#include <iostream>
#include <string.h>

class Employee{
    std::string m_Name;
    Integer m_Id;
public:
    Employee(const std::string &name, const Integer &id) :
        m_Name(name),
        m_Id(id){
            std::cout << "Employee(const std::string &name, const Integer &id)" << std::endl;
    }
    
    template<typename T1, typename T2>
    Employee(T1 &&name, T2 &&id):
        m_Name{std::forward<T1>(name)},
        m_Id(std::forward<T2>(id){
            std::cout << "Employee(std::string &&name, Integer &&id)" << std::endl;
    }
};

template<typename T1, typename T2>
Employee *Create(T1 &&a, T2 &&b){
    return new Employee( std::forward<T1>(a), std::forward<T2>(b) );
}


int main(){
    Employee e1{"John", Integer{1} };
    std::string name = "Jane";
    Employee e2{ name, 100};
    Integer val{ 10 };
    Employee e3{ "Mary", val };
    Employee e4{ std::string{"Mike"}, val };
    auto emp = Create("John", Integer{100});
    return 0;
}