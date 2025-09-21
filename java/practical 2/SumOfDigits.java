// practical 2
import java.util.Scanner;

public class SumOfDigits {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter integer: ");
        long n = sc.nextLong();
        n = Math.abs(n);
        long sum = 0;
        while (n > 0) { sum += n % 10; n /= 10; }
        System.out.println("Sum of digits = " + sum);
        sc.close();
    }
}
