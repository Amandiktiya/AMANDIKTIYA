// practical 13
import java.sql.*;

public class SQLiteExample {
    public static void main(String[] args) {
        Connection conn = null;
        try {
            // Driver load
            Class.forName("org.sqlite.JDBC");

            // SQLite DB connect
            conn = DriverManager.getConnection("jdbc:sqlite:students.db");
            System.out.println("✅ Connected to SQLite database.");

            Statement stmt = conn.createStatement();

            // Table create
            stmt.execute("CREATE TABLE IF NOT EXISTS students (" +
                    "id INTEGER PRIMARY KEY AUTOINCREMENT, " +
                    "name TEXT, " +
                    "age INTEGER)");

            // Insert records
            stmt.execute("INSERT INTO students (name, age) VALUES ('Aman', 20)");
            stmt.execute("INSERT INTO students (name, age) VALUES ('Shivank', 22)");

            // Select and display
            ResultSet rs = stmt.executeQuery("SELECT * FROM students");
            while (rs.next()) {
                System.out.println(
                        rs.getInt("id") + " | " +
                        rs.getString("name") + " | " +
                        rs.getInt("age")
                );
            }

            // Close resources
            rs.close();
            stmt.close();
            conn.close();

        } catch (Exception e) {
            System.out.println("❌ Error: " + e.getMessage());
        }
    }
}
