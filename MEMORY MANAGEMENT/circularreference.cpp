#include <iostream>
#include <memory>
using namespace std;

class Employee;
class Project {
public:
    std::shared_ptr <Employee> m_emp;
    Project(){
        std::cout << "Project()" << std::endl;
    }
    ~Project(){
        std::cout << "~Project()" << std::endl;
    }
};
class Employee {
public:
    std::shared_ptr <Project> m_prj;
    Employee(){
        std::cout << "Employee()" << std::endl;
    }
    ~Employee(){
        std::cout << "~Employee()" << std::endl;
    }
};

int main(){
    std::shared_ptr <Employee> emp {new Employee{}};
    std::shared_ptr <Project> prj  {new Project{}};

    emp -> m_prj = prj;
    prj -> m_emp = emp;
}