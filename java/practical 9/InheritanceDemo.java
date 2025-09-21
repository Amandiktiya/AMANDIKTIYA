// practical 9

class Shape {
    String name;
    Shape(String name) { this.name = name; }
    double area() { return 0.0; }
}
class Rectangle extends Shape {
    double w, h;
    Rectangle(double w, double h) { super("Rectangle"); this.w = w; this.h = h; }
    @Override double area() { return w * h; }
}
class Circle extends Shape {
    double r;
    Circle(double r) { super("Circle"); this.r = r; }
    @Override double area() { return Math.PI * r * r; }
}
public class InheritanceDemo {
    public static void main(String[] args) {
        Shape[] shapes = { new Rectangle(5, 3), new Circle(2.5) };
        for (Shape s : shapes)
            System.out.printf("%s area = %.2f%n", s.name, s.area());
    }
}
