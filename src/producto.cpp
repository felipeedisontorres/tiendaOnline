#include "Producto.h"

Producto::Producto(const std::string& n, double p, int s)
    : nombre_(n), precio_(p), stock_(s) {}

const std::string& Producto::nombre() const { return nombre_; }
double Producto::precio() const { return precio_; }
int Producto::stock() const { return stock_; }
void Producto::setPrecio(double p) { precio_ = p; }

bool Producto::vender(int u){
    if(u <= 0 || u > stock_) return false;
    stock_ -= u; 
    return true;
}

void Producto::reabastecer(int u){ 
    if(u > 0) stock_ += u; 
}

double Producto::valorInventario() const { 
    return precio_ * stock_; 
}
