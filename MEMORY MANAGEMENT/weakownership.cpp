#include <iostream>
#include <memory>
using namespace std;

class Printer{
    std::shared_ptr <int> m_pValue{};
public:
    void SetValue(std::shared_ptr<int> p){
        m_pValue = p;
    }
    void Print(){
        std::cout << "Reference Count: " << m_pValue.use_count() << std::endl;
        std::cout << "Value is : " << *m_pValue << std::endl;}
};

int main(){
    Printer prn;
    int num{};
    std::cin >> num;
    std::shared_ptr<int> p{new int{num}} ;
    prn.SetValue(p);
    if ( *p > 10){
        p = nullptr;
    }
    prn.Print();
}