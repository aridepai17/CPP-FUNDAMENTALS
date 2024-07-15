#include <cstdlib>
#include <iostream>
#include <memory>
using namespace std;

struct Free{
    void operator()(int *p){
        free(p);
        std::cout << "Memory is freed" << std::endl;
    }
};

void MallocFree(int *p){
    free(p);
    std::cout << "Memory is freed" << std::endl;
}

void SharedPtrDeleters(){
    // std::unique_ptr<int> p { (int*) malloc(4), Free{} };
    std::shared_ptr<int> p { (int*) malloc(4), MallocFree };
    *p = 100;
    std::cout << *p << std::endl;
    // free(p);
}

int main(){
    SharedPtrDeleters();
}