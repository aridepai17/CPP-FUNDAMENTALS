#include <iostream>
#include <unordered_set>
#include <unordered_map>
#include <string>

void UnSet(){
    std::unordered_multiset<std::string> coll;
    coll.insert("Hulk");
    coll.insert("Thor");
    coll.insert("Iron Man");
    coll.insert("Captain America");
    coll.insert("Hulk");
    coll.insert("Thor");
    coll.insert("Iron Man");
    coll.insert("Iron Man");
    coll.insert("Iron Man");
    coll.insert("Doctor Strange");
    coll.insert("Deadpool");

    for (const auto x: coll){
        std::cout << "Bucket #:" << coll.bucket(x) << " contains : " << x << std::endl;
    }
    std::cout << "Bucket Count: " << coll.bucket_count() << std::endl;
    std::cout << "Number of elements: " << coll.size() << std::endl;
    std::cout << "Load Factor: " << coll.load_factor() << std::endl;
}

void UnMap(){
    std::unordered_map<std::string, std::string> coll;
    /*
    coll["Batman"] = "Bruce Wayne";
    coll["Spider Man"] = "Peter Parker";
    coll["Captain America"] = "Steve Rogers";
    coll["Hulk"] = "Bruce Banner";
    */
    coll.insert(std::make_pair("Batman", "Bruce Wayne"));
    coll.insert(std::make_pair("Batman", "Matches Malone"));
    coll.insert(std::make_pair("Spider Man", "Peter Parker"));
    coll.insert(std::make_pair("Captain America", "Steve Rogers"));
    coll.insert(std::make_pair("Hulk", "Bruce Banner"));

    for(const auto& x: coll){
        std::cout << "Bucket #: " << coll.bucket(x.first) << " -> " << x.first << " -> " << x.second << std::endl;
    }
}

class Employee{
    std::string m_Name;
    int m_Id;
public:
    Employee(const std::string &n, int id) : m_Name(n), m_Id(id){

    }
    const std::string& GetName() const{
        return m_Name;
    }
    int GetId() const{
        return m_Id;
    }
};

struct EmployeeHash{
    size_t operator()(const Employee& emp) const{
        auto s1 = std::hash<std::string>{}(emp.GetName());
        auto s2 = std::hash<int>{}(emp.GetId());
        return s1 ^ s2;
    }
};

struct EmployeeEqual{
    bool operator()(const Employee& e1, const Employee& e2) const{
        return e1.GetName() == e2.GetName() && e1.GetId() == e2.GetId();
    }
};

void Hashes(){
    std::hash<std::string> h1;
    std::cout << "Hash : " << h1("Batman") << std::endl;
    std::unordered_set<Employee, EmployeeHash, EmployeeEqual> coll;
    coll.insert(Employee("Batman", 1));
    coll.insert(Employee("Spider Man", 2));
    coll.insert(Employee("Captain America", 3));
    coll.insert(Employee("Hulk", 4));
    coll.insert(Employee("Doctor Strange", 5));
    
    for (const auto& x: coll){
        std::cout << x.GetId() << " -> " << x.GetName() << std::endl;
    }
}
int main(){
    UnSet();
    UnMap();
    return 0;
}