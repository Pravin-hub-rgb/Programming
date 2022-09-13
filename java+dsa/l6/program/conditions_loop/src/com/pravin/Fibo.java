package com.pravin;

import java.util.Scanner;

public class Fibo {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        // find the value at nth place in a fibonacci series
        int n = in.nextInt();
        int a=0;
        int b=1;
        int i=2;
        while(i<=n){
            int temp =b;
            b=b+a;
            a=temp;
            i++;
        }
        System.out.println(b);
    }
}
