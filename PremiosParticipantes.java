import java.util.Scanner;

public class PremiosParticipantes {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int puesto;
        String premio;

        for (int i = 1; i <= 10; i++) {
            System.out.print("Ingrese el puesto del participante " + i + ": ");
            puesto = scanner.nextInt();

            if (puesto == 1) {
                premio = "es la suma de $1.000.000 pesos";
            } else if (puesto == 2) {
                premio = "es la suma de $500.000 pesos";
            } else if (puesto == 3) {
                premio = "es la suma de $250.000 pesos";
            } else if (puesto == 4) {
                premio = "es la suma de $100.000 pesos";
            } else if (puesto == 5) {
                premio = "es una medalla";
            } else if (puesto >= 6 && puesto <= 10) {
                premio = "es un dulce";
            } else {
                premio = "puesto invalido. debe estar entre el 1 y el 10";
            }

            System.out.println("Su premio: " + premio);
        }

        scanner.close();
    }
}
