import java.util.Arrays;
import java.util.Scanner;

public class Input {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int[] arr = new int[5];
        System.out.println("Enter array elements");
        for (int i = 0; i < arr.length; i++) {
            arr[i] = in.nextInt();
        }
        in.close();

        // display
        for (int i = 0; i < arr.length; i++) {
            System.out.println(arr[i]);
        }

        // Enhanved for loop
        for(int num : arr){
            System.out.println(num);
        }

        // Best way to print array
        System.out.println(Arrays.toString(arr));
    }
    
}
