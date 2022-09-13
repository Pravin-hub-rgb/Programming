import java.util.ArrayList;

public class ArrayListEx {
    public static void main(String[] args) {
        // we use arraylist when we don't know how much is size of row
        // syntax
        // ArrayList<wrapper_class> name = new ArrList<>();
        ArrayList<Integer> list = new ArrayList<>();
        list.add(99);
        list.add(100);
        list.add(122);
        list.add(123);
        System.out.println(list);
        list.set(0,101);
        System.out.println(list);
    }
}
