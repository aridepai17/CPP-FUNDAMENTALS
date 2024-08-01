#include <iostream>
#include <thread>
#include <windows.h>

void Process(){
    // std::cout << "Thread ID : " << std::this_thread::get_id() << std::endl;
    for (int i = 0; i < 10; i++){
        std::this_thread::sleep_for(std::chrono::seconds(1));
        std::cout << i << std::endl;
    }
}

int main(){
    std::thread t1(Process);
    /*
    HANDLE Handle = t1.native_handle():
    SetThreadDescription(handle, L"Thread 1")
    auto id = t1.get_id();
    std::cout << "t1.get_id() : " << id << std::endl;
    
    int cores = std::thread::hardware_concurrency();
    
    std::cout << "Number of cores : " << cores << std::endl;
    */
    t1.join();
    return 0;
}