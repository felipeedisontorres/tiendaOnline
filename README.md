# TiendaOnline — Punto 4 

que separa **header**, **implementación** y **app** para simular operaciones de inventario:
- Contenedor STL `std::vector` para varios productos.
- Operaciones: **venta**, **reabastecimiento**, **actualización de precios**.
- Muestra **valor total del inventario**.
- **BONO:** genera `reporte_inventario.txt`.

## Estructura
TiendaOnline/
├─ CMakeLists.txt
├─ include/

│ └─ Producto.h
├─ src/

│ └─ Producto.cpp
└─ app/

└─ main.cpp
