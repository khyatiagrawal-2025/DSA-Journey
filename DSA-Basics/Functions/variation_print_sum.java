package Functions;

import java.util.Scanner;

public class variation_print_sum {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int sum = printsum(a,b);
        System.out.println("Sum of "+a+" and "+b+" is "+sum+".");
    }
    public static int printsum(int x, int y){
        return x+y;
    }
}
