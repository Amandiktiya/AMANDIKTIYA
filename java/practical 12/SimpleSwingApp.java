// practical 12

import javax.swing.*;
import java.awt.*;

public class SimpleSwingApp {
    public static void main(String[] args) {
        JFrame frame = new JFrame("Simple Swing App");
        frame.setSize(400, 200);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        JLabel label = new JLabel("Hello, This is a Simple Java Swing Application.", JLabel.CENTER);
        frame.add(label);

        frame.setVisible(true);
    }
}
