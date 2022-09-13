public class Binary {
    public static void main(String[] args) {
        int[] nums = { 23, 45, 1, 2, 8, 19, -3, -11, 28 };
        int target = 19;
        System.out.println(linearSearch(nums, target));
    }

    // serach in the array: return the index if item found
    // otherwise if item not found return -1
    static int linearSearch(int[] arr, int target) {
        if (arr.length == 0) {
            return -1;
        }

        // run a for loop
        for (int i = 0; i < arr.length; i++) {
            // check of element at every index if it is = target
            if (arr[i] == target) {
                return i;
            }
        }

        // this line will execute if none of the reutn statements above have executed 
        //hence the target not found
        return -1;
    }
}