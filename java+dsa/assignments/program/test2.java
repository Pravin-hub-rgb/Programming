import java.util.Scanner;

public class test2 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int num1 = in.nextInt();
        int num2 = in.nextInt();
        in.close();
        printArm(num1, num2);
    }

    // print every three digit armstrong numbers

    static void printArm(int num1, int num2) {

        for (int i = num1; i < num2; i++) {
            int digits = 0;
            int temp = i;
            int sum = 0;
            while (temp > 0) {
                temp = temp / 10;
                digits++;
            }

            temp = i;
            while (temp > 0) {
                int d = temp % 10;
                sum = sum + (int) (Math.pow(d, digits));
                temp/=10;
            }
            if (sum == i) {
                System.out.println(i + " is Armstrong number");
            }
        }
    }

}
