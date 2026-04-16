package Functions;
import java.util.Scanner;

public class variation_print_name {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String name = sc.next();
        print_name(name);
    }

    public static void print_name(String name) {
        System.out.println("Hey "+name+"!");
    }
}
