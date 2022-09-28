package com.pravin;

import java.util.Scanner;

public class Largest {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a = in.nextInt();
        int b = in.nextInt();
        int c = in.nextInt();

        // FInd the largest of the 3 numbers

        // below is the first logic that I came with
//        if(a>b && a>c){
//            System.out.println(a+" is the largest number");
//        } else if(b>c && b>a){
//            System.out.println(b+" is the largest number");
//        } else{
//            System.out.println(c+" is the largest number");
//        }

        // another logic
//        int max = a;
//        if(b>max){
//            max=b;
//        }
//        if(c>max){
//            System.out.println(c+" is the largest number");
//        }
//        System.out.println(max+" is the largest number");

        // another logic using Math class
        int max = Math.max(Math.max(a,b),c);
        System.out.println(max);
    }
}
