package Basic;
import java.util.Scanner;

public class Prime_num {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        boolean isPrime = true; // CamelCase : First word is small and rest first letter are big.
        for(int i=2; i<= Math.sqrt(N); i++){
            if(N%2==0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            System.out.println("Is a Prime Number");
        }
        else{
            System.out.println("Not a Prime Number");
        }
    }
}