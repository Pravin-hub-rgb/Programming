import java.util.ArrayList;

public class Operators {
    public static void main(String[] args) {
        System.out.println('a' + 'b'); // 195 - both char get converted to int
        System.out.println("a" + "b"); // ab - these are in string type
        System.out.println((char) ('a' + 3)); // d

        System.out.println("a" + 1);
        // this is same as after a few steps: "a" + "1"
        // interger will be converted to Integer that will call toString()

        System.out.println("kunal" + new ArrayList<>()); // kunal[]
        // System.out.println("kunal" + new Integer(46));

        
    }
}
