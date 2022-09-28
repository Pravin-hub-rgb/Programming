import java.util.Arrays;

public class largest {
    public static void main(String[] args) {
        int[] arr = {22,44,12,4,5};        
        // System.out.println("The largest number in arr is "+findLargest(arr));
        reverseArr(arr);
    }

    static void reverseArr(int[] arr) {
        int j = arr.length-1;
        for (int i = 0; i < arr.length/2; i++) {
            int temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j--;            
        }
        System.out.println(Arrays.toString(arr));
    }

    static int findLargest(int[] arr) {
        int large = 0;
        // for (int i : arr) {
        //     if(arr[i]>large){
        //         large = arr[i];
        //     }
        // }
        for (int i = 0; i < arr.length; i++) {
            if(arr[i]>large){
                large = arr[i];
            }
        }
        return large;        
    }
}
