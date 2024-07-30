#include <iostream>
#include <vector>
#include <list>

const char * GetErrorMessage(int errorNo){
    return "Empty";
}

// typedef const char *(*PFN)(int);
using PFN = const char *(*)(int);
void showError(PFN pfn){

}

// typedef std::vector < std::list<std::string>> Names;
using Names = std::vector<std::list<std::string>>;

int main(){
    Names names;
    Names nnames;

    PFN pfn = GetErrorMessage;
    showError(pfn);
    return 0;
}