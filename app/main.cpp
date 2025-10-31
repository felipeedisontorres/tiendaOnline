#include <iostream>
#include <vector>
#include <fstream>
#include <iomanip>
#include "Producto.h"

int main(){
    std::vector<Producto> inv = {
        {"Queso", 15.90, 10},
        {"Vino", 45.00, 5},
        {"Manzanas", 2.50, 20},
        {"Chocolate", 7.25, 12}
    };

    auto mostrar = [&](){
        std::cout << "\nInventario:\n" << std::fixed << std::setprecision(2);
        for(const auto& p: inv)
            std::cout << p.nombre() << ": $" << p.precio()
                      << " | stock " << p.stock()
                      << " | valor $" << p.valorInventario() << '\n';
    };

    mostrar();

    // Simulaciones mínimas (venta, reabastecimiento, actualización de precios)
    inv[0].vender(3);        // Queso -3
    inv[1].vender(2);        // Vino  -2
    inv[2].reabastecer(10);  // Manzanas +10
    inv[3].setPrecio(7.90);  // Chocolate nuevo precio

    mostrar();

    // Total inventario
    double total = 0;
    for(const auto& p: inv) total += p.valorInventario();
    std::cout << "\nTOTAL inventario: $" << total << '\n';

    // BONUS: reporte TXT
    std::ofstream out("reporte_inventario.txt");
    if(out){
        out << std::fixed << std::setprecision(2);
        out << "Nombre\tPrecio\tStock\tValor\n";
        for(const auto& p: inv)
            out << p.nombre() << '\t' << p.precio() << '\t'
                << p.stock() << '\t' << p.valorInventario() << '\n';
        out << "TOTAL\t-\t-\t" << total << '\n';
    }
    std::cout << "Reporte generado: reporte_inventario.txt\n";
}
