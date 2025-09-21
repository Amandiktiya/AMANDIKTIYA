// practical 8

import java.util.*;

public class ArraysAndStringsDemo {
    public static void main(String[] args) {
        // Array: min, max, average
        int[] arr = {7, 2, 9, 4, 5, 10};
        int min = arr[0], max = arr[0], sum = 0;
        for (int x : arr) { if (x < min) min = x; if (x > max) max = x; sum += x; }
        double avg = sum / (double) arr.length;
        System.out.println("Array: " + Arrays.toString(arr));
        System.out.printf("Min=%d, Max=%d, Avg=%.2f%n", min, max, avg);

        // String: reverse, vowel count, palindrome check
        String s = "naman";
        String rev = new StringBuilder(s).reverse().toString();
        long vowels = s.toLowerCase().chars().filter(c -> "aeiou".indexOf(c) >= 0).count();
        boolean palindrome = s.equals(rev);
        System.out.println("String: " + s);
        System.out.println("Reversed: " + rev + ", Vowels: " + vowels + ", Palindrome: " + palindrome);
    }
}
