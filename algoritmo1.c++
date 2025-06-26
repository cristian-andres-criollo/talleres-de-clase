#include <iostream>
using namespace std;

// Funciones para cada paso de la receta
void verificarIngredientes() {
    cout << "1. Revisar si tienes los ingredientes necesarios.\n";
    cout << "   Si no los tienes, ve a comprarlos y regresamos.\n";
    cout << "   Si los tienes, empezamos a cocinar.\n";
}

void pintarPechugaPollo() {
    cout << "2. Poner a pitar (cocinar a presión) la pechuga de pollo.\n";
}

void cocinarVerduras() {
    cout << "3. Cocinar las verduras.\n";
}

void cocinarArroz() {
    cout << "4. Cocinar el arroz amarillo con azafrán.\n";
}

void prepararPapas() {
    cout << "5. Pelar, lavar, picar y freír las papas.\n";
}

void cocinarSalchichas() {
    cout << "6. Picar y cocinar las salchichas en mantequilla.\n";
}

void apagarTodo() {
    cout << "7. Apagar todo cuando esté listo.\n";
}

void desmecharPollo() {
    cout << "8. Desmechar la pechuga de pollo.\n";
}

void juntarIngredientes() {
    cout << "9. Juntar todo en una olla, haciendo capas con salsa de tomate.\n";
    cout << "   Revolver todo muy bien.\n";
}

void cocinarFinal() {
    cout << "10. Dejar cocinar por 5 minutos a fuego bajo.\n";
}

void servirYDisfrutar() {
    cout << "11. Servir y disfrutar. ¡Buen provecho!\n";
}

int main() {
    verificarIngredientes();
    pintarPechugaPollo();
    cocinarVerduras();
    cocinarArroz();
    prepararPapas();
    cocinarSalchichas();
    apagarTodo();
    desmecharPollo();
    juntarIngredientes();
    cocinarFinal();
    servirYDisfrutar();

    return 0;
}
