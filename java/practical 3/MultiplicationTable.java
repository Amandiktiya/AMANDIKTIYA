// practical 3
public class MultiplicationTable {
    public static void main(String[] args) {
        int upto = 10;
        // header
        System.out.printf("%4s", "x");
        for (int j = 1; j <= upto; j++) System.out.printf("%4d", j);
        System.out.println();
        for (int j = 0; j <= upto; j++) System.out.print("----");
        System.out.println();
        // body
        for (int i = 1; i <= upto; i++) {
            System.out.printf("%4d", i);
            for (int j = 1; j <= upto; j++) System.out.printf("%4d", i * j);
            System.out.println();
        }
    }
}
