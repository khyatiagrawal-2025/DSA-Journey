package OOPs;

public class method_overloading {

    public static void main(String[] args) {
        student("Yashika", 19, 71);
    }

    public static void student() {
        System.out.println("Hi!");
    }

    public static void student(String name) {
        System.out.println("Hi! " + name);
    }

    public static void student(String name, int marks) {
        System.out.println("Hi! " + name + " You scored " + marks);
    }

    public static void student(String name, int marks, int rollno) {
        System.out.println("Hi! " + name +
                " You scored " + marks +
                " and your rollno. is: " + rollno);
    }
}