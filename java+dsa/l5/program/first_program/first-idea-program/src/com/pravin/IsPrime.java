package com.pravin;

import java.util.Scanner;
public class IsPrime {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int num = input.nextInt();
        if(n<=1){
            System.out.println("Neither prime nor composite");
        }
        int c =2;
        while(c < num){
            if(num%c==0){
                System.out.println("not prime");

                            }
            c++;

        }
    }
}
