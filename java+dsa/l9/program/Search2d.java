public class Search2d {
    public static void main(String[] args) {
        int[][] arr = {
                { 1, 2, 3, 4 },
                { 5, 6, 7, 8 },
                { 9, 10, 11, 12 }
        };
        int target = 99;
        System.out.println(search(arr, target));
    }

    static int search(int[][] arr, int target) {
        for (int[] row : arr ) {
            for (int i = 0; i < row.length; i++) {
                if(target==row[i]){
                    return 1;
                }
            }            
        }
        return -1;
    }
}
