#include <iostream>
#include <string>

class Vehicle {
protected:
    std::string make;
    std::string model;
    int year;

public:
    Vehicle(const std::string& make, const std::string& model, int year)
        : make(make), model(model), year(year) {}
    void setMake(const std::string& m) { make = m; }
    std::string getMake() const { return make; }

    void setModel(const std::string& m) { model = m; }
    std::string getModel() const { return model; }

    void setYear(int y) { year = y; }
    int getYear() const { return year; }
};

class Car : public Vehicle {
private:
    int seatingCapacity;
    std::string fuelType;

public:
    Car(const std::string& make, const std::string& model, int year, int seatingCapacity, const std::string& fuelType)
        : Vehicle(make, model, year), seatingCapacity(seatingCapacity), fuelType(fuelType) {}
    void setSeatingCapacity(int capacity) { seatingCapacity = capacity; }
    int getSeatingCapacity() const { return seatingCapacity; };

    void setFuelType(const std::string& fuel) { fuelType = fuel; }
    std::string getFuelType() const { return fuelType; }
};

class Truck : public Vehicle {
private:
    double payloadCapacity;
    double towingCapacity;

public:
    Truck(const std::string& make, const std::string& model, int year, double payloadCapacity, double towingCapacity)
        : Vehicle(make, model, year), payloadCapacity(payloadCapacity), towingCapacity(towingCapacity) {}
    void setPayloadCapacity(double capacity) { payloadCapacity = capacity; }
    double getPayloadCapacity() const { return payloadCapacity; }

    void setTowingCapacity(double capacity) { towingCapacity = capacity; }
    double getTowingCapacity() const { return towingCapacity; }
};

int main() {
    Car myCar("Toyota", "Camry", 2022, 5, "Gasoline");
    Truck myTruck("Ford", "F-150", 2022, 1500.0, 8000.0);
    std::cout << "Car Information:" << std::endl;
    std::cout << "Make: " << myCar.getMake() << ", Model: " << myCar.getModel() << ", Year: " << myCar.getYear()
              << ", Seating Capacity: " << myCar.getSeatingCapacity() << ", Fuel Type: " << myCar.getFuelType() << std::endl;

    std::cout << "\nTruck Information:" << std::endl;
    std::cout << "Make: " << myTruck.getMake() << ", Model: " << myTruck.getModel() << ", Year: " << myTruck.getYear()
              << ", Payload Capacity: " << myTruck.getPayloadCapacity() << " lbs, Towing Capacity: " << myTruck.getTowingCapacity() << " lbs" << std::endl;

    return 0;
}

