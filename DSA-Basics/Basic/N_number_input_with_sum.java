package Basic;
import java.util.Scanner;

public class N_number_input_with_sum {
    public static void main(String[] args) {
        Scanner sc  = new Scanner(System.in);
        int N = sc.nextInt();

        int i=1;
        int sum = 0;
        while(i<=N){
            int num = sc.nextInt();
            sum+=num;
            i++;
        }
        System.out.println(sum);
    }
}
