/*
NAMESPACES
-> Named declarative region used for declaring types.
-> The types are not visible outside the namespace.
-> Standard library is in std namespace.
-> Prevents name clashes.
-> Helps modularize the code.
-> Types inside a namespace have a scope.

-> Either open the namespace or use the type.
    -> Use the global using declarative and open the entire namespace.
        using namespce std;
    -> Use the using declarative and open a specific type.
        using std::cout;
    -> Using the full qualified name.
        std::cout << "Hello World" << std::endl;

//
SYNTAX
namespace <name>{
    (namespace, class, structure, function, variable, etc)
}
//

*/

#include <iostream>
namespace avg{
    float calculate (float a, float b){
        return (a+b)/2;
    }
}
namespace basic{
    float calculate (float a, float b){
        return a+b;
    }
}

namespace sorting{
    void quicksort(){

    }

    void insertionsort(){

    }

    void mergesort(){

    }

    namespace comparison{
        void less(){

        }

        void greater(){

        }
    }
}

int main(){
     // using namespace avg;
     // using avg::calculate;
     // avg::calculate(1.4f, 23.7f);
    using namespace avg;
    calculate(1.4f, 23.7f);
    basic::calculate(1.4f, 23.7f);

    // using namespace sorting::comparison;
    // sort::comparison::less();
    return 0;
}
