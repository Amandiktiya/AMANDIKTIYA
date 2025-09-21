// practical 4 a
import java.util.Scanner;

public class PrimeCheck {
    static boolean isPrime(long n) {
        if (n < 2) return false;
        if (n % 2 == 0) return n == 2;
        for (long d = 3; d * d <= n; d += 2)
            if (n % d == 0) return false;
        return true;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number: ");
        long n = sc.nextLong();
        System.out.println(n + (isPrime(n) ? " is prime" : " is not prime"));
        sc.close();
    }
}

