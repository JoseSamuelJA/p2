#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

// Definición de la clase Empleado
class Empleado {
private:
    string nombre;
    string apellido;
    int edad;
    int salario;
public:
    // Constructor
    Empleado(string n, string o, int e, int g) : nombre(n), apellido(o), edad(e), salario(g) {}

    // Métodos para establecer y obtener los valores de los atributos
    void setNombre(string n) { 
	    nombre = n; 
	}
	void setApellido(string o) {
		apellido = o;
	}
    void setEdad(int e) {
	    edad = e;
	}
    void setSalario(int g) {
	    salario = g;
	}
    string getNombre() const {
	    return nombre; 
	}
	string getApellido() const {
		return apellido;
	}
    int getEdad() const {
	    return edad;
	}
    int getSalario() const {
	    return salario;
	}
};

// Función para almacenar los datos de las personas en un archivo de texto
void guardarPersonas(const vector<Empleado>& empleado) {
    ofstream archivo("empleados.txt");
    if (!archivo.is_open()) {
        cout << "Error al abrir el archivo." << endl;
        return;
    }
    for (size_t i = 0; i < empleado.size(); ++i) {
        archivo << "Nombre: " << empleado[i].getNombre() << "Apellido: " << empleado[i].getApellido() << ", Edad: " << empleado[i].getEdad() << ", Salario: " << empleado[i].getSalario() << endl;
    }
    archivo.close();
    cout << "Datos guardados en el archivo empleados.txt" << endl;
}

// Función para leer los datos de las empleado desde un archivo de texto y mostrarlos en pantalla
void mostrarPersonas() {
    ifstream archivo("empleado.txt");
    if (!archivo.is_open()) {
        cout << "Error al abrir el archivo." << endl;
        return;
    }
    string linea;
    cout << "Datos de las empleados almacenadas:" << endl;
    while (getline(archivo, linea)) {
        cout << linea << endl;
    }
    archivo.close();
}

int main() {
    vector<Empleado> empleados;

    cout << "Ingrese los datos de los empleados (nombre, apellido, edad y salario), o escriba 'fin' para terminar:" << endl;
    while (true) {
        string nombre, apellido;
        int edad, salario;
        cout << "Nombre: ";
        getline(cin, apellido);
        if (nombre == "fin") {
            break;
        }
        getline(cin, nombre);
        cout << "Apellido: ";
        cout << "Edad: ";
        cin >> edad;
        cin.ignore(); // Limpiar el buffer del salto de línea
        cout << "Salario: ";
        cin >> salario;

        Empleado.push_back(empleados(nombre, apellido, edad, salario));
    }

    // Guardar los datos de las personas en un archivo
    guardarEmpleados(empleado);

    // Mostrar los datos de las personas almacenadas en el archivo
    mostrarEmpleados();

    return 0;
}
