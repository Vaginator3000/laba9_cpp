#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <string>

using namespace std;

class Car {
private:
    string brand;
    int power;
    int cost;

public:
    //конструктор без параметров
    Car() {
        brand = " ";
        power = 0;
        cost = 0;
    }

    //конструктор с 3 параметрами
    Car(string _brand, int _power,  int _cost) {
        brand = " ";
        brand = _brand;
        power = _power;
        cost = _cost;
    }

    //конструктор с 1 параметром
    Car(string _brand) {
        brand = " ";
        brand = _brand;
        power = 0;
        cost = 0;
    }

    //конструктор копирования
    Car(Car& a) {
        brand = " ";
        brand = a.brand;
        power = a.power;
        cost = a.cost;
    }

    void read() { //Ввод данных
        cout << "Enter a brand: ";   cin >> brand;
        cout << "Enter a power: ";   cin >> power;
        cout << "Enter a cost: ";    cin >> cost;
    }

    void display() {
        cout << endl;
        cout << brand << endl;
        cout << power << endl;
        cout << cost << endl;
        cout << endl;
    }

    //Перегрузка оператора =
    Car& operator= (const Car& a)
    {
        brand = " ";
        brand = a.brand;
        power = a.power;
        cost = a.cost;
        return *this;
    }
};

int main() {
    //Вызов всех конструкторов
    Car car1("Mazda");
    car1.display();
    Car car2("Ford", 400, 3000000);
    car2.display();
    Car car3;
    car3.display();

    //Массив инициализирован конструктором
    Car cars[3];
    for (int i = 0; i < 3; i++) 
        cars[i] = Car("Car" + to_string(i + 1));
    
    for (int i = 0; i < 3; i++) 
        cars[i].display();
    return 0;
}
