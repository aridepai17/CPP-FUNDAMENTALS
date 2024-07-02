#pragma once

class Integer{
    int *mpint;
public:
    Integer();
    Integer(int value);
    Integer(Integer &obj);
    int GetValue() const;
    void SetValue(int value);
    ~Integer();
};