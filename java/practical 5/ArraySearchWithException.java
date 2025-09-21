// practical 5
import java.util.*;

class ElementNotFoundException extends Exception {
    public ElementNotFoundException(String msg) { super(msg); }
}

public class ArraySearchWithException {
    public static int indexOf(int[] arr, int key) throws ElementNotFoundException {
        for (int i = 0; i < arr.length; i++) if (arr[i] == key) return i;
        throw new ElementNotFoundException("Element " + key + " not found in array.");
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Array size: ");
        int n = sc.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter " + n + " integers:");
        for (int i = 0; i < n; i++) arr[i] = sc.nextInt();
        System.out.print("Enter number to search: ");
        int key = sc.nextInt();
        try {
            int pos = indexOf(arr, key);
            System.out.println("Found at index " + pos);
        } catch (ElementNotFoundException e) {
            System.out.println("Error: " + e.getMessage());
        }
        sc.close();
    }
}

