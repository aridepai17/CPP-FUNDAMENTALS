#include <string>
#include <iostream>
#include <memory>
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
    std::shared_ptr<Project> m_pProject{};
public:
    void SetProject( const std::shared_ptr <Project> &prj){
        m_pProject = prj;
    }
    const std::shared_ptr<Project>& GetProject() const{
        return m_pProject;
    }
};

void ShowInfo( const std::shared_ptr <Employee> & emp){
    std::cout << "Employee project details: \n";
    emp -> GetProject() -> ShowProjectDetails();
}

int main(){
    std::shared_ptr <Project> prj { new Project{} };
    prj -> SetName("Video Decoder");
    std::shared_ptr <Employee> e1 { new Employee{} };
    e1 -> SetProject(prj);
    std::shared_ptr <Employee> e2 { new Employee{} };
    e2 -> SetProject(prj);
    std::shared_ptr <Employee> e3 { new Employee{} };
    e3 -> SetProject(prj);

    std::cout << "Reference Count: " << prj.use_count() << std::endl;
    ShowInfo(e1);
    ShowInfo(e2);
    prj -> ShowProjectDetails();
}