package Functions;

public class num_change {
    public static void main(String[] args) {
        int a = 10;
        num_change(a);
        System.out.println(a);
    }
    public static void num_change(int a){
        System.out.println(a);
        a+=5;
        System.out.println(a);
        a+=5;
        System.out.println(a);
    }
}