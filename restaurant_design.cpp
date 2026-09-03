/*
 * Course: COEN 2220 - Programming 2
 * Name: Luis D. Cruz Medina
 * Lab: Lab 3 - Object-Oriented Programming, Part 1
 * Description: Class skeletons - restaurant case design
 * Due date: [3/9/2026]
 */

#include <iostream>
#include <string>
using namespace std;

// Dish class
class Dish
{
private:
    string name;
    double price;

public:
    Dish();
    Dish(string n, double p);

    string getName() const;
    double getPrice() const;
};


// Order class
class Order
{
private:
    Dish dishes[10];
    int dishCount;

public:
    Order();

    void addDish(Dish dish);
    double getSubtotal() const;
    double getTotal() const;
};


// I decided to calculate the 10% service charge inside Order
// because the service charge is part of the final order total.
// This keeps the calculation together with the order information.

int main()
{
    cout << "Esqueletos de diseno - sin logica de ejecucion en este bloque.\n";

    return 0;
}