// [ELIAS - TODO #15] Incluye el archivo de cabecera "Producto.h".
#include "Producto.h"
#include <iostream>

// [ELIAS - TODO #16] Implementa el Constructor con Parámetros.
// Usa 'this->variable = variable' o una lista de inicialización para asignar los valores.
Producto::Producto(int id, std::string nombre, double precio, std::string categoria, int stock, float calificacionPromedio) {
    // Asigna los argumentos a los atributos privados aquí
}

// [ELIAS - TODO #17] Implementa el Constructor Por Defecto.
// Inicializa los números en 0 y los strings en vacío o "Desconocido".
Producto::Producto() {
    // Lógica aquí
}

// [ELIAS - TODO #18] Implementa todos los métodos Getters definidos en el header.
// Ejemplo: int Producto::getId() const { return id; }
// Haz esto para: id, nombre, precio, categoria, stock, calificacionPromedio.

// [ELIAS - TODO #19] Implementa 'mostrarInfo()'.
// Usa std::cout para imprimir todos los atributos en un formato legible.
void Producto::mostrarInfo() const {
    // cout << "ID: " << id << " Nombre: " << nombre ... etc
}
