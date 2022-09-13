import java.util.Arrays;

public class Swap {
    public static void main(String[] args) {
        int[] arr = {1,2,3,4,5};
        System.out.println("before swap arr ="+Arrays.toString(arr));        
        swap(arr,0,1);
        System.out.println("after swap arr ="+Arrays.toString(arr));
    }

    static void swap(int[] arr, int i, int j) {
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        System.out.println("Swap inside the function arr ="+ Arrays.toString(arr));
    }
}
