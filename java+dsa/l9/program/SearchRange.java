public class SearchRange {
    public static void main(String[] args) {
        String name = "heyhey";
        char target = 'e';
        System.out.println(search(name, target, 2, 4));
    }

    static boolean search(String name, char target, int start, int end) {
        if (name.length() == 0) {
            return false;
        }
        for (int i = start; i <= end; i++) {
            if (target == name.charAt(i)) {
                return true;
            }
        }
        return false;
    }
}
