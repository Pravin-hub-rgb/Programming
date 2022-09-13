
import java.util.Arrays;
// import java.util.Scanner;

public class Test {
	public static void main(String[] args) {
		int[] nums =  {9,8,7,6,5,4,3,2,1,0};

		System.out.println(Arrays.toString(plusOne(nums)));
		// System.out.println(getConcatenation(nums, 4));
	}
	static int[] plusOne(int[] digits) {
		int newLen = 0;
		// to return an array		
        // I think first we have to make a digits out of 
        // the given array
        long digit = 0;
        for(int i = 0; i < digits.length; i++){
            digit *= 10;
            digit += digits[i];
        }
		System.out.println(digit);
		if(digits.length == 1){
            if(digits[0] < 9) newLen = 1;  
            else newLen = 2;
        }else if(digit%9==0 ) newLen = digits.length+1;
        else newLen = digits.length;
        int[] ans = new int[newLen];
        
        digit++;
        
        for(int i = ans.length-1; i >= 0; i--){
            int last = (int) digit%10;
			ans[i] = last;
            digit/=10;
        }
		return ans;
    }

}
