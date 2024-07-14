#include <iostream>
#include "Integer.h"

// USER TYPE TO USER TYPE CASTING
    class Product{
        Integer m_Id;
    public:
        Product(const Integer & id) : m_Id(id){
            std::cout << "Product(const Integer & id)" << std::endl;
        }
        ~Product(){
            std::cout << "~";
        }
        const Integer & GetInteger() const{
            return m_Id;
        }
        operator Integer(){
            return m_Id;
        }
    };

void Print (Integer a){

}
int main(){

    // BASIC TYPE CASTING
    int a = 5, b = 2;
    float f =  (float) a/b;
    float g = static_cast <float> (a) / b;

    char *p = (char *) &a; // convert int to char
    char *p = reinterpret_cast <char *> (&a);

    const int x = 1;
    int *w = (int *) &x;
    int *w = const_cast <int*> (&x);
    std::cout << f << std::endl;

    // PRIMITIVE TO USER TYPE CASTING
    Integer a1{ 5 };
    // Initialization
    Integer a2 = 5;
    Print(5);
    // Assignment
    a1 = 7;

    // USER TYPE TO PRIMITIVE TYPE CASTING
    int x = a1;
    int x = static_cast <int> (a1); // Explicit casting

    // USER TYPE TO USER TYPE CASTING
    Product o{ 5 };
    Integer id{5};
    id = o ; // id = o.operator Integer();
    if (id == o.GetInteger()){
        std::cout << "Id matches with the product\n";
    }

    return 0;
}

