function generarTrianguloPascal(niveles) {
    for (let fila = 0; fila < niveles; fila++) {
        let linea = ' '.repeat(niveles - fila); // Espacios para dar forma de triángulo
        let valor = 1;

        for (let col = 0; col <= fila; col++) {
            linea += valor + ' ';
            // Calculamos el siguiente valor usando la fórmula del coeficiente binomial:
            valor = valor * (fila - col) / (col + 1);
        }

        console.log(linea);
    }
}

// Llama a la función con los niveles deseados (por ejemplo, 5 niveles)
generarTrianguloPascal(5);