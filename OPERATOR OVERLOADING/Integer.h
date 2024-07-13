#pragma once 
#include <iostream>

class Integer{
    int *m_Pint;
public:
    Integer();
    Integer(int value);
    Integer(const Integer &obj);
    Integer (Integer &&obj);
    int GetValue() const;
    void SetValue(int value);
    ~Integer();
    Integer & operator ++();
    Integer operator ++(int);
    bool operator == (const Integer &a) const;

    //Copy Assignment
    Integer & operator = (const Integer &a);

    //Move Assignment
    Integer & operator = (Integer &&a);
    Integer operator + (const Integer &a) const;

    void operator ()();
};

Integer operator +(int x, const Integer &y);
std::ostream & operator << (std::ostream & out, const Integer & a);
std::istream & operator >> (std::istream & input, Integer & a);