// practical 1
public class CmdArgsList {
    public static void main(String[] args) {
        System.out.println("Count: " + args.length);
        for (int i = 0; i < args.length; i++) {
            System.out.println((i + 1) + ": " + args[i]);
        }
    }
}
