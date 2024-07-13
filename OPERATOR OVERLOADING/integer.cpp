#include "Integer.h"
#include <iostream>

Integer::Integer(){
    std::cout << "Integer()" << std::endl;
    m_Pint = new int(0);
}

Integer::Integer(int value){
    std::cout << "Integer(int)" << std::endl;
    m_Pint = new int(value);
}

Integer::Integer(const Integer & obj){
    std::cout << "Integer(const Integer&)" << std::endl;
    m_Pint = new int(*obj.m_Pint);
}

Integer::Integer(Integer && obj){
    std::cout << "Integer(Integer&&)" << std::endl;
    m_Pint = obj.m_Pint;
    obj.m_Pint = nullptr;
}

int Integer::GetValue() const{
    return *m_Pint;
}

void Integer::SetValue(int value){
    *m_Pint = value;
}

Integer::~Integer(){
    std::cout << "~Integer()" << std::endl;
    delete m_Pint;
}

Integer & Integer::operator ++(){
    ++(*m_Pint);
    return *this;
    //Add a return statement here
}

Integer Integer::operator ++(int){
    Integer temp (*this);
    ++(*m_Pint);
    return temp;
}

bool Integer::operator == (const Integer & a) const {
    return *m_Pint == *a.m_Pint;
}

Integer & Integer::operator = (const Integer & a){
    if (this != &a){
        delete m_Pint;
        m_Pint = new int(*a.m_Pint);
    }
    return *this;
}

Integer & Integer::operator = (Integer && a){
    if (this != &a){
        delete m_Pint;
        m_Pint = a.m_Pint;
        a.m_Pint = nullptr;
    }
    return *this;
}

void Integer::operator ()(){
    std::cout << *m_Pint << std::endl;
}

Integer operator +(int x, const Integer &y){
    Integer temp;
    temp.SetValue(x + y.GetValue());
    return temp;
}

std::ostream & operator << (std::ostream & out , const Integer & a){
    out << a.GetValue();
    return out;
}

std::istream & operator >> (std::istream & input, Integer & a){
    int x;
    input >> x;
    a.SetValue(x);
    return input;
}