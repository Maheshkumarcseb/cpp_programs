#include<iostream>
using namespace std;
class Vehicle
{
    public:
    void vehicle();
};
void Vehicle::vehicle()
{
    cout<<"i am a vehicle\n";
}
class FourWheeler:public Vehicle
{
    public:
    void fourwheeler();
};
void FourWheeler::fourwheeler()
{
    cout<<"i have a fourwheeler\n";
}
class Car:public FourWheeler
{
    public:
    void car();
};
void Car::car()
{
    cout<<"i am a car\n";
}
int main()
{
    Car mycar;
    mycar.car();
    mycar.fourwheeler();
    mycar.vehicle();
    return 0;
}
