// practical 10

import java.util.Scanner;

public class ExceptionHandlingDemo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        try {
            System.out.print("Enter numerator: ");
            int a = Integer.parseInt(sc.nextLine().trim());
            System.out.print("Enter denominator: ");
            int b = Integer.parseInt(sc.nextLine().trim());
            int c = a / b;
            System.out.println("Result: " + c);
        } catch (NumberFormatException e) {
            System.out.println("Please enter valid integers.");
        } catch (ArithmeticException e) {
            System.out.println("Cannot divide by zero.");
        } finally {
            sc.close();
            System.out.println("Done.");
        }
    }
}
