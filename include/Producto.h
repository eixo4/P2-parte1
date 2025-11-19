#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>
#include <iostream>


class Producto {

private:
    // [ELIAS - TODO #4] Declara el atributo: 'id' (int).
    // [ELIAS - TODO #5] Declara el atributo: 'nombre' (std::string).
    // [ELIAS - TODO #6] Declara el atributo: 'precio' (float o double).
    // [ELIAS - TODO #7] Declara el atributo: 'categoria' (std::string).
    // [ELIAS - TODO #8] Declara el atributo: 'stock' (int).
    // [ELIAS - TODO #9] Declara el atributo: 'calificacionPromedio' (float).

public:
    Producto(int id, std::string nombre, double precio, std::string categoria, int stock, float calificacionPromedio);

    Producto();

    int getId() const;
    std::string getNombre() const;
    double getPrecio() const;
    std::string getCategoria() const;
    int getStock() const;
    float getCalificacionPromedio() const;

    void mostrarInfo() const;
};

// [ELIAS - TODO #14] Cierra el Include Guard (#endif).
#endif
