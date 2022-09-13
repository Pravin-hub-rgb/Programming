public class Performance {
    public static void main(String[] args) {
        String series = "";
        for (int i = 0; i < 26; i++) {
            char ch = (char) ('a'+i);
            series+=ch;
            // this is actually creating new string object in every iterations
        }
        // so as this have time complexity of O(N^2) this is not efficient
        // what's the better way ??
        // where we can easily modify the string -- is there any such data type  ??
        // this is where string builder comes in equations and it is different class
        System.out.println(series);
    }
}
