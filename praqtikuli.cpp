/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class AbstractCar {
    protected:
        string ModelName;
        string Manufacturer;
        int YearReleased;
    public:
        static int CarCount;
        
        AbstractCar(string ModelName, string Manufacturer, int YearReleased) {
            this->ModelName = ModelName;
            this->Manufacturer = Manufacturer;
            this->YearReleased = YearReleased;
            CarCount++;
        }
        
        string getModelName() {
            return ModelName;
        }
        
        void setModelName() {
            this->ModelName = ModelName;
        }
        
        string getManufacturer() {
            return Manufacturer;
        }
        
        void setManufacturer() {
            this->Manufacturer = Manufacturer;
        }
        
        int getYearReleased() {
            return YearReleased;
        }
        
        void setYearreleased() {
            this->YearReleased = YearReleased;
        }
    
    void engine() {
        cout <<"Car engine started..." << endl;
    }
    
    void seatBel() {
        cout << "Seatbet is on..." << endl;
    }
    
    void move() {
        cout << "car started moving..." << endl;
    }
};

int AbstractCar::CarCount = 0;

class FerraryCar: public AbstractCar {
    public:
        FerraryCar(string ModelName, int YearReleased): AbstractCar(ModelName, "Ferrary", YearReleased) {}
        
        void radioPress() {
            // Complex logic for radio
            cout << "Click on button for radio" << endl;
        }
        
        void radioPress(string radioMode) {
            cout <<"Radio pressed "<< radioMode << "mode"  << endl;
        }
    };        
class BugattiCar: public AbstractCar {
    public:
        BugattiCar(string ModelName, int YearReleased):AbstractCar(ModelName, "Bugatti", YearReleased) {}
        
        void radioPress() {
            //Complex logic for radio
            cout << "Click on button for radio" << endl;
        }
        
        void radioPress(string radioMode) {
            cout << "Radio pressed" << radioMode << "mode" << endl;
        }
    };

class OnlineShop {
        string Name;
        
    public:
        static int SoldCarCount;
        
        
        OnlineShop(string Name) {
            this-> Name = Name;
        }
        
        string getName() {
            return Name;
        }
    
        void setName(string Name) {
            this-> Name = Name;
        }
        
    void sellCar() {
        cout << "Online shop has sold car to costumer" << endl;
        SoldCarCount++;
    }

    void sellCar(FerraryCar car) {
        cout << "Online shop has sold" << car.getManufacturer() << " " << car.getModelName() << " to costumer" << endl;
        SoldCarCount++;
    }
    
    void sellCar(BugattiCar car) {
        cout << "Online shop has sold" << car.getManufacturer() << " " << car. getModelName() << " to costumer" << endl;
        SoldCarCount++;
    }
};

int OnlineShop::SoldCarCount = 0;

int main()
{
    FerraryCar LaFerrary("LaFerrary", 2018);
    BugattiCar Chiron("Chiron", 2020);

    OnlineShop CarShop("car shop");
    
    CarShop.sellCar();
    cout << OnlineShop::SoldCarCount << endl;
    
    CarShop.sellCar(LaFerrary);
    cout << OnlineShop::SoldCarCount << endl;
    
    CarShop.sellCar(Chiron);
    cout << OnlineShop::SoldCarCount << endl;
    return 0;
}
