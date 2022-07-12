#include<iostream>
#include<string>

using namespace std;

class Vehicle
{
  private:
    int vehicleID;
    string vehicleBrand;
    string vehicleType;
    int vehiclePrice;

  public:
    Vehicle();
    void setVehicleDetails(int vID, string vBrand, string vType, int vPrice);
    void displayVehicleDetails();
    void setVehiclePrice();
    ~Vehicle();
};

Vehicle::Vehicle(){}

void Vehicle::setVehicleDetails(int vID, string vBrand, string vType, int vPrice)
{
  vehicleID = vID;
  vehicleBrand = vBrand;
  vehicleType = vType;
  vehiclePrice = vPrice;
}

void Vehicle::displayVehicleDetails()
{
  cout << "VehicleID = " << vehicleID << endl;

  cout << "vehicleBrand = " << vehicleBrand << endl;

  cout << "vehicleType = " << vehicleType << endl;

  cout << "vehicle Price = " << vehiclePrice << endl;
}

void Vehicle::setVehiclePrice()
{
  cout << "Input new priceof vehicle :" << vehicleID << ":";
  cin >> vehiclePrice;

}

Vehicle::~Vehicle(){}


int main()
{
  Vehicle v1, v2, v3;

  v1.setVehicleDetails(1, "Toyota", "SUV", 8500000);

  v2.setVehicleDetails(2, "Nissan", "Saloon", 6000000);

  v3.setVehicleDetails(3, "Honda", "Convertible", 7200000);

  v1.setVehiclePrice();
  v2.setVehiclePrice();
  v3.setVehiclePrice();

  v1.displayVehicleDetails();
  v2.displayVehicleDetails();
  v3.displayVehicleDetails();

  return 0;  
}