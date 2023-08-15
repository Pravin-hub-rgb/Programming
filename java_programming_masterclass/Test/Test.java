import java.util.Scanner;

public class Test {
    static Scanner input = new Scanner(System.in);

    public static void main(String[] args) {
        printYearsAndDays(1787879);
    }

    public static void printYearsAndDays(long minutes) {
        if (minutes < 0) {
            System.out.println("Invalid Value");
            return;
        }
        long days = minutes > 1440 ? minutes / 1440 : 0;
        System.out.println(days);
        long years = days > 365 ? days / 365 : 0;
        System.out.println(years);
        days %= 365;
        minutes %= 1440;
        System.out.println(minutes + "min " + years + "y " + days + "d");
    }
}