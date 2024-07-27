#include <iostream>
#include <fstream>
#include <cstring>
#include <string.h>

struct Record{
    int id;
    char name[10];
};

void WriteRecord(Record *p){
    std::ofstream binstream{ "records", std::ios::binary | std::ios::out };
    binstream.write((const char*)p, sizeof(Record));
}

Record GetRecord(){
    std::ifstream input{ "records", std::ios::binary | std::ios::in };
    Record r;
    input.read((char*)&r, sizeof(Record));
    return r;
}

int main(){
    Record r;
    r.id = 123;
    strncpy(r.name, "John", 5);
    WriteRecord(&r);

    Record r2 = GetRecord();
    std::cout << r2.id << ":" << r2.name << std::endl;

    /* std::ofstream textstream{ "data" };
    textstream << 12345678;

    std::ofstream binstream { "binary", std::ios::binary | std::ios::out };
    int num { 12345678 };
    binstream.write((const char*)&num, sizeof(num));
    num = 0;
    binstream.close();
    std::ifstream input{ "binary", std::ios::binary | std::ios::in };
    input.read((char*)&num, sizeof(num));

    std::cout << num << std::endl;
    return 0;
    */
}