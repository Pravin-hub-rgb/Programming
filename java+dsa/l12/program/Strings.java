
public class Strings {
   public static void main(String[] args) {
    // Pretty printing
    float a = 453.1274f;
    System.out.printf("Formatted number is %.2f \n", a); 
    // it also rounds it up
    
    System.out.printf("Pie : %.3f \n", Math.PI);
    // prints three digits after decimal

    // these %-- were the placeholder, also we can do this 
    System.out.printf("Hello my name is %s and everybody calls me %s", "Govani Georgio", "Gergio");

    // place holder are same as in C like %d, %s , %f ....

    System.out.println("a" + 'b'); // ab as string can't be converted to any data type
   }
}