// practical 4 b
import java.util.Scanner;

public class PrimesInRange {
    static boolean isPrime(int n) {
        if (n < 2) return false;
        if (n % 2 == 0) return n == 2;
        for (int d = 3; d * d <= n; d += 2)
            if (n % d == 0) return false;
        return true;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("From: "); int a = sc.nextInt();
        System.out.print("To  : ");int b = sc.nextInt();
        if (a > b) { int t = a; a = b; b = t; }
        System.out.println("Primes in [" + a + ", " + b + "]:");
        for (int n = a; n <= b; n++) if (isPrime(n)) System.out.print(n + " ");
        System.out.println();
        sc.close();
    }
}
