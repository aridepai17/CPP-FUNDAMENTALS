#include<iostream>

template<typename T>
class PrettyPrint {
    T *m_pData;
public:
    PrettyPrint(T *pData) : m_pData(pData) {
        
    }
    void Print() {
        std::cout << "{" << *m_pData << "}" << std::endl;
    }
    T * GetData() {
        return m_pData;
    }
};

int main(){
    /*
    int data = 5;
    float f = 8.2f;
    PrettyPrint<int> p1(&data);
    p1.Print();
    PrettyPrint<float> p2(&f);
    p2.Print();
    */

    char *p{ "Hello World" };
    PrettyPrint<char *> p3(&p);
    p3.Print();
    char *pData = p3.GetData();

    return 0;
}