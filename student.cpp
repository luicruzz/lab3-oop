/*
 * Course: COEN 2220 - Programming 2
 * Name: [Luis Cruz]
 * Lab: Lab 3 - Object-Oriented Programming, Part 1
 * Description: Student class - exercise with TODOs
 * Due date: [3/9/2026]
 */

#include <iostream>
#include <string>
using namespace std;

class Student
{
    private:
        string name;
        int    id;
        double gpa;

    public:
        // ===== Resuelve estos TODO ahora (Parte C) =====

        // TODO (Parte C): Default constructor.
        // Inicializa name a "", id a 0, gpa a 0.0

        // TODO (Parte C): setName(string n)
        // Solo asigna si n no esta vacio.

        // TODO (Parte C): setGpa(double g)
        // Solo asigna si g esta entre 0.0 y 4.0 (inclusive).
        // Si no es valido, imprime un mensaje de error y no cambia el valor.

        // TODO (Parte C): Getters con const: getName(), getId(), getGpa()

        // TODO (Parte C): printInfo() const
        // Imprime name, id, y gpa con formato similar a Book::printInfo()

        // ===== No los toques todavia - les toca mas adelante =====

        // TODO (Parte D): Constructor with parameters (name, id, gpa).

        // TODO (Parte E): Destructor.
        // Imprime un mensaje indicando que el objeto Student con ese 'name' fue destruido.
};

int main() {
    // ===== Resuelve estos TODO ahora (Parte C) =====

    // TODO (Parte C): Crea un Student usando el constructor default,
    // asigna valores con los setters, e imprime con printInfo().

    // TODO (Parte C): Prueba setGpa() con un valor invalido (ej. 5.0)
    // y confirma que el mensaje de error aparece y el gpa no cambia.

    // ===== No lo toques todavia - le toca mas adelante =====

    // TODO (Parte D): Crea un segundo Student usando el constructor con
    // parametros, con datos dummy (ej. "Alice Smith", 1001, 3.7).

    return 0;
}