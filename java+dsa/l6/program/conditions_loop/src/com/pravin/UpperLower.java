package com.pravin;

import java.util.Scanner;

public class UpperLower {
    public static void main(String[] args) {


        Scanner in = new Scanner(System.in);
//        char ch = in.next().charAt(0); //if space is given before the letter then this won't work
        char ch = in.next().trim().charAt(0); // its better to do this
//    a = (int) (a);
//        if (a >= 97 && a <= 122) {
        if (ch >= 'a' && ch <= 'z') {
            System.out.println(ch + " is small letter alphabet");
        } else {
            System.out.println(ch + " is capital letter alphabet");

        }
    }
}
