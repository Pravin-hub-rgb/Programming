public class SBuilder {
    public static void main(String[] args) {
        StringBuilder builder = new StringBuilder();
        // this one is mutable
        for (int i = 0; i < 26; i++) {
            char ch = (char) ('a'+i);
            builder.append(ch);
        }
        // so this comes with many methods which are self explainatory 
        // like builder.reverse() etc
        System.out.println(builder.toString());
    }
}
