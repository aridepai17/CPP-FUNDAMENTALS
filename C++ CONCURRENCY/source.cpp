#include <iostream>
#include <list>

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
    Download();
    std::cout << "[Main] User started another operation" << std::endl;
    return 0;
}