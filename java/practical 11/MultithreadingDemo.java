// practical 11

class Task implements Runnable {
    String name;

    Task(String n) {
        name = n;
    }

    public void run() {
        for (int i = 1; i <= 5; i++) {
            System.out.println(name + " -> " + i);
            try {
                Thread.sleep(500);  // 0.5 second pause to show interleaving
            } catch (InterruptedException e) {
                System.out.println(name + " interrupted");
            }
        }
    }
}

public class MultithreadingDemo {
    public static void main(String[] args) {
        Thread t1 = new Thread(new Task("Thread A"));
        Thread t2 = new Thread(new Task("Thread B"));
        Thread t3 = new Thread(new Task("Thread C"));

        t1.start();
        t2.start();
        t3.start();
    }
}

