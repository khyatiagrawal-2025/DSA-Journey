package OOPs;

public class New {
    public static void main(String[] args) {
        student s1 = new student("Khyati", 17, 18);
        s1.print();
    }
}

class student {
    String name;
    int age;
    int rollno;
    String college;

    student(String name, int age, int rollno, String college) {
        this.name = name;
        this.age = age;
        this.rollno = rollno;
        this.college = college;
        System.out.println("5th constructor (main)");
    }

    student(String name, int age, int rollno) {
        this(name, age, rollno, "No value");
        System.out.println("4th constructor");
    }

    student(String name, int age) {
        this(name, age, 0);
        System.out.println("3rd constructor");
    }

    student(String name) {
        this(name, 0);
        System.out.println("2nd constructor");
    }

    student() {
        this("No value");
        System.out.println("1st constructor");
    }

    void print() {
        System.out.println(name + " " + age + " " + rollno + " " + college);
    }
}