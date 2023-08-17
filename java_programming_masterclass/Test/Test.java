public class Test {
    public static void main(String[] args) {
        int sum = 0;
        int count = 1;
        for (int i = 1; i <= 1000; i++) {
            if (i % 3 == 0 && i % 5 == 0) {
                System.out.println(i);
                sum += i;
                if (count == 5)
                    break;
                count++;
            }
        }
        System.out.print("The sum of first 5 number which are divisible by 3 and also 5 is = " + sum);
    }
}