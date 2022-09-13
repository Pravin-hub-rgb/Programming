public class EvenNumLeet {
    public static void main(String[] args) {
        int[] arr = { 2, 34, 55, 66666, 666 };
        System.out.println(findNumbers(arr));
    }

    // public int findNumbers(int[] nums) {
    //     int count = 0;        
    //     for (int num : nums) {
    //         if(even(num)){
    //             count++;
    //         }
    //     }        
    //     return count;
    // }
    // public boolean even(int num){
    //     return noOfDigits(num)%2==0;
    // }
    // public int noOfDigits(int num){
    //     int count = 0;
    //     while(num>0){
    //         count++;
    //         num/=10;            
    //     }
    //     return count;
    // }

    static int findNumbers(int[] arr) {
        int times = 0;
        int count = 0;
        for (int num : arr) {
            // If number is negative then 
            // we are making it positive
            if(num<0){
                num*=-1;
            }
            // if num is 0 the while loop will not run
            // so just return 1
            if(num==0){
                return 1;
            }
            int temp = num;
            while (temp > 0) {
                times++;
                temp /= 10;
            }
            if (times % 2 == 0) {
                count++;
            }
            times = 0;
        }
        return count;
    }


    // static int findNumbers(int[] arr) {
    // int times = 0;
    // int count = 0;
    // for (int num : arr) {
    // int temp =num;
    // while (temp > 0) {
    // times++;
    // temp /= 10;
    // }
    // System.out.println("num = "+num);
    // System.out.println("times = "+times);
    // if (times % 2 == 0) {
    // count++;
    // }
    // times =0;
    // System.out.println("count = "+count);
    // System.out.println("*************");
    // }
    // return count;
    // }
}
