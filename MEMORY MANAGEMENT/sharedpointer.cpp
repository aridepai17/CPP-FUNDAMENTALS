#include <string>
#include <iostream>
using namespace std;

class Project{
    std::string m_Name;
    public:
    void SetName(const std::string & name){
        m_Name = name;
    }
    void ShowProjectDetails() const{
        std::cout << "[Project Name]" << m_Name << '\n';
    }
};

class Employee {
    Project *m_pProject{};
public:
    void SetProject(Project *prj){
        m_pProject = prj;
    }
    const Project * GetProject() const{
        return m_pProject;
    }
};

void ShowInfo(Employee * emp){
    std::cout << "Employee project details: \n";
    emp -> GetProject() -> ShowProjectDetails();
}

int main(){
    Project *prj = new Project{};
    prj -> SetName("Video Decoder");
    Employee *e1 = new Employee{};
    e1 -> SetProject(prj);
    Employee *e2 = new Employee{};
    e2 -> SetProject(prj);
    Employee *e3 = new Employee{};
    e3 -> SetProject(prj);

    ShowInfo(e1);
    ShowInfo(e2);
    prj -> ShowProjectDetails();

    delete prj;
    delete e1;
    delete e2;
}