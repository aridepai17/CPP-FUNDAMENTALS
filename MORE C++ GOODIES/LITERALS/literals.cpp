#include <iostream> 

class Distance{
    long double m_Kilometers;
public:
    Distance(long double km) : m_Kilometers { km }{

    }
    long double GetKilometers() const{
        return m_Kilometers;
    }
    void SetKm(long double val){
        m_Kilometers = val;
    }
};

Distance operator""_metres(long double val){
    return Distance(val * 1.6);
}

Distance operator""_mi(long double val){ 
    return Distance(val / 1000);
}

int main(){
    Distance dist{ 32.90_mi };
    Distance d2 { 77123.0_metres};
    std::cout << d2.GetKilometers() << std::endl;

    return 0;
}