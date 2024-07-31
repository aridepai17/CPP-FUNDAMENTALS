#include <iostream>
#include <list>
#include <thread>
using namespace std;

std::list<int> g_Data;
const int SIZE = 10000000;

void Download(){
    std::cout << "[Downloader] Started Downloading" << std::endl;
    for(int i = 0; i < SIZE; i++){
        g_Data.push_back(i);
    }
    std::cout << "[Downloader] Download Complete" << std::endl;
}

int main(){
    std::cout << "[Main] User started an operation" << std::endl;
    std::thread thDownloader(Download);
    thDownloader.detach();

    std::cout << "[Main] User started another operation" << std::endl;
    if (thDownloader.joinable()){
        thDownloader.join();
    }
    system("Pause");
    return 0;
}
