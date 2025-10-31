#pragma once

#include <string>

class Producto{
    std::string nombre_{}; 
    double precio_{}; 
    int stock_{};
public:
    Producto() = default;
    Producto(const std::string& n, double p, int s);
    const std::string& nombre() const;
    double precio() const;
    int stock() const;
    void setPrecio(double p);
    bool vender(int u);             // vende si hay stock
    void reabastecer(int u);        // suma al stock
    double valorInventario() const; // precio * stock
};
