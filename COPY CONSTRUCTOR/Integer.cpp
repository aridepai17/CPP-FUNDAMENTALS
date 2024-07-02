#include "Integer.h"
#include <iostream>

Integer::Integer(){
    mpint = new int(0);
}

Integer::Integer(int value){
    mpint = new int(value);
}

Integer::Integer(Integer &obj){
    mpint = new int(*obj.mpint);
}

int Integer::GetValue() const{
    return *mpint;
}

void Integer::SetValue(int value){
    *mpint = value;
}

Integer::~Integer(){
    delete mpint;
}
