// practical 7
import java.io.*;

public class FileStats {
    public static void main(String[] args) {
        // Hardcoded file path
        String filename = "sample.txt"; 
        long lines = 0, words = 0, chars = 0;

        try (BufferedReader br = new BufferedReader(new FileReader(filename))) {
            String line;

            while ((line = br.readLine()) != null) {
                lines++;                                 // Line count
                chars += line.length();                 // Character count (excluding newline)
                words += line.trim().isEmpty() ? 0 : line.trim().split("\\s+").length;  // Word count
            }

            System.out.println("Lines: " + lines);
            System.out.println("Words: " + words);
            System.out.println("Characters: " + chars);

        } catch (IOException e) {
            System.out.println("Error: " + e.getMessage());
        }
    }
}
