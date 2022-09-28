import java.util.Arrays;

public class MultiDimensionArr {
    public static void main(String[] args) {
        int[][] arr =new int[3][]; // no. of rows is mandotry
        // second way to initialize
        int[][] arr2 = {
            {1,2,3},
            {4,5,6},
            {7,8,9}
        };
        // for (int i = 0; i < arr2.length; i++) {
        //     for(int j = 0; j<arr2[i].length;j++){
        //         System.out.print(arr2[i][j]+" ");
        //     }
        //     System.out.println(" ");
        // } 
        // System.out.println(Arrays.toString(arr2));
        
        for(int [] a : arr2){
            System.out.println(Arrays.toString(a));
        }
    }
}
