#include <future>
#include <iostream>
#include <thread>

void Downloader(){
    using namespace std::chrono_literals;
    for( int i = 0; i < 10; i++ ){
        std::cout << '.';
        std::this_thread::sleep_for(1s); //std::chrono::seconds(1)
    }
}

int main(){
    std::future<void> result = std::async(Downloader);
    std::cout << "Main() threading continues execution.";
    result.get();