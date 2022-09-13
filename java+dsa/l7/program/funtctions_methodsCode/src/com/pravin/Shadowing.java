package com.pravin;

public class Shadowing {
    static int x = 55; // x can be accessed by any block and function inside Shadowing class
    public static void main(String[] args) {
        System.out.println(x); // 55
        int x;
//        System.out.println(x); Scope will begin when value is initialized
        x = 90;
        System.out.println(x); // 90
        // Shadowing -> redeclaring a variable with same name inside another scope
        // lower level is overriding upper level
    }
    static void fun(){
        System.out.println(x); //55
    }
}
