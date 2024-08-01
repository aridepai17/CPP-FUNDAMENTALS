#include <iostream>
#include <thread>
#include <thread>

int Operation(int count){
    using namespace std::chrono_literals;
    int sum{};
    for (int i = 0; i < count; i++){
        sum += i;
        std::cout << '.';
        std::this_thread::sleep_for(1s); // std::chrono::seconds(1)
    }
    return sum;
}

int main(){
    using namespace std::chrono_literals;
    std::future<int> result = std::async(std::launch::deferred, Operation, 10);
    std::this_thread::sleep_for(2s);
    std::cout << "Main() threading continues execution" << std::endl;
    if(result.valid()){
        // Operation(10);
        auto sum = result.get();
        std::cout << "Sum : " << sum << std::endl;
    }
}