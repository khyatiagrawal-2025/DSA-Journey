package Functions;
import java.util.Scanner;
//Pass by value - Makes Changes in the copy of the variable
//Pass by reference - it makes changes in the original value.
//For each loop - used to iterate [ for(int num: arr){ } ] --> ismein ye num is the copy not the original one
public class element_increased_by_2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size : ");
        int n = sc.nextInt();
        int [] arr = new int[n];
        System.out.println("Enter the elements ");
        for(int i = 0; i<n; i++){
            arr[i] = sc.nextInt();
        }
        printElement(arr,n);

        for(int num: arr){
            System.out.println(num);
        }
    }
    public static void printElement(int [] arr, int n){
        for(int i=0; i<n; i++){
            arr[i]+=2;
        }
    }
}
