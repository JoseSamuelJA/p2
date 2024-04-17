#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Empleado {
private:
    string nombre;
    string apellido;
    int edad;
    int salario;
public:
    Empleado(string n, string o, int e, int g) {
        nombre = n;
        apellido = o;
        edad = e;
        salario = g;
    }
    
    void mostrarInfo() {
        cout << "Nombre: " << nombre << ", Apellido: " << apellido << ", Edad: " << edad << ", Salario: " << salario << endl;
    }
};

int main() {
    string n, o; // Declarar las variables para almacenar el nombre y el apellido
    int e, g; // Declarar la variable para almacenar la edad y el salario
    
    cout << "Ingrese el nombre: ";
    cin >> n;
    cout << "Ingrese el apellido: ";
    cin >> o;
    cout << "Ingrese la edad: ";
    cin >> e;
    cout << "Ingrese la salario: ";
    cin >> g;
    
    Empleado empleado(n, o, e, g); // Crear un objeto de la clase empleado
    
    // Llamar al método mostrarInfo() para mostrar la información de la persona
    empleado.mostrarInfo();

    // Guardar la información de la persona en un archivo
    ofstream archivo("empleados.txt");
    if (!archivo.is_open()) {
        cout << "Error al abrir el archivo." << endl;
        return 1;
    }
    archivo << "Nombre: " << n << ", Apellido: " << o << ", Edad: " << e << ", Salario: " << g << endl;
    archivo.close();
    cout << "Datos guardados en el archivo empleados.txt" << endl;
    
    return 0;
}
