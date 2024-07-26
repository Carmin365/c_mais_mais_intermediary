class Car {
public:
    string brand;
    string model;
    int year;
    void speed_up() {
        cout << "Speeding up..." << endl;
    }
};

int main() {
    Car myCar;
    myCar.brand = "Ford";
    myCar.speed_up();
    return 0;
}

