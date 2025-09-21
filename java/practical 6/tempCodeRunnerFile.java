import java.io.*;

public class FileCopy {
    public static void main(String[] args) {
        // Hardcoded source और destination file paths
        String sourceFile = "C:\\Users\\AmanDiktiya\\Desktop\\java\\practical 6\\source.txt";
        String destFile = "C:\\Users\\AmanDiktiya\\Desktop\\java\\practical 6\\destination.txt";

        try (FileInputStream in = new FileInputStream(sourceFile);
             FileOutputStream out = new FileOutputStream(destFile)) {

            byte[] buffer = new byte[1024];
            int length;

            while ((length = in.read(buffer)) > 0) {
                out.write(buffer, 0, length);
            }

            System.out.println("File copied successfully from " + sourceFile + " to " + destFile);

        } catch (IOException e) {
            System.out.println("Error occurred: " + e.getMessage());
        }
    }
}
