#include <iostream>
#include <limits>

int ProcessRecords(int count){
    int *pArray = (int*)malloc(count * sizeof(int));

    if(count < 10)
        throw std::out_of_range("Count is less than 10");
    int *p = new int[count];

    if (pArray == nullptr){
        throw std::runtime_error("Failed to allocate memory");
    }
    for(int i = 0; i < count; i++){
        pArray[i] = i;
    }
    free(pArray);
    return 0;
}

int main(){
    try{
    // ProcessRecords(std::numeric_limits<int>::max());
    ProcessRecords(5);
    }
    catch(std::runtime_error &e){
        std::cout << e.what() << std::endl;
    }
    catch(std::out_of_range &e){
        std::cout << e.what() << std::endl;
    }
    catch(std::bad_alloc &e){
        std::cout << e.what() << std::endl;
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    catch(...){
        std::cout << "Exception exists" << std::endl;
    }
    return 0;
}