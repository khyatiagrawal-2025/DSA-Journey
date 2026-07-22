package Basic;
import java.util.Scanner;
import java.util.*;

public class Max_of_2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();

//        if(a>b){
//            System.out.println("a is greater");
//        }
//        else if(a<b){
//            System.out.println("b is greater");
//        }
//        else{
//            System.out.println("a and b are equal");
//        }
        int max = Math.max(c,(Math.max(a,b)));
        System.out.println(max);
    }
}
