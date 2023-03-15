#include <iostream>
using namespace std;
class Vehicle
{
protected:
string make;
string model;
public:
void getDetails()
{
cout<<"Enter Make: ";
cin>> make;
cout<<"Enter Model: ";
cin>> model;
}
void printDetails()
{
cout<<"Make: "<<make<<endl;
cout<<"Model: "<<model<<endl;
}
};
class Car: public Vehicle
{
protected:
string price;
string seating_cap;
string fuel_type;
public:
void getDetails()
{
cout<<"Enter details for Car:\n";
Vehicle::getDetails();
cout<<"Price: ";
cin>> price;
cout<<"Seating Capacity: ";
cin>> seating_cap;
cout<<"Fuel Type: ";
cin>> fuel_type;
}
void printDetails()
{
cout<<"Car Specifications:\n";
Vehicle::printDetails();
cout<<"Price: Rs "<<price<<endl;
cout<<"Seating Capacity: "<<seating_cap<<endl;
cout<<"Type of Fuel: "<<fuel_type<<" L"<<endl;
}
};
class Bike: public Vehicle
{
protected:
string cylinders;
string num_gears;
string fueltank_size;
public:
void getDetails()
{
cout<<"Enter details for Bike:\n";
Vehicle::getDetails();
cout<<"Number of Cylinders: ";
cin>> cylinders;
cout<<"Number of Gears: ";
cin>> num_gears;
cout<<"Size of the Fuel Tank: ";
cin>> fueltank_size;
}
void printDetails()
{
cout<<"Bike Specifications:\n";
Vehicle::printDetails();
cout<<"Number of Cylinders: "<<cylinders<<endl;
cout<<"Number of Gears: "<<num_gears<<endl;
cout<<"Size of the Fuel Tank: "<<fueltank_size<<" L"<<endl;
}
};
class Audi: public Car
{
protected:
string horse_power;
public:
void getDetails()
{
cout<<"Enter details for Audi:\n";
Vehicle::getDetails();
cout<<"Horse Power: ";
cin>> horse_power;
}
void printDetails()
{
cout<<"Audi Specifications:\n";
Vehicle::printDetails();
cout<<"Horse Power: "<<horse_power<<endl;
}
};
class BajajBike: public Bike
{
protected:
string engine_power;
public:
void getDetails()
{
cout<<"Enter details for Bajaj Bike:\n";
Vehicle::getDetails();
cout<<"Engine Power: ";
cin>> engine_power;
}
void printDetails()
{
cout<<"BajajBike Specifications:\n";
Vehicle::printDetails();
cout<<"Engine Power: "<<engine_power<<" cc"<<endl;
}
};
int main()
{
Car *c1 = new Car;
Bike *b1 = new Bike;
Audi *a1 = new Audi;
BajajBike *bb1 = new BajajBike;
c1->getDetails();
b1->getDetails();
a1->getDetails();
bb1->getDetails();
cout<<"\n";
c1->printDetails();
b1->printDetails();
a1->printDetails();
bb1->printDetails();
}
