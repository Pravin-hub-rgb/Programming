package com.pravin;

import java.util.Scanner;

public class Sum {
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int num1,num2,sum;
        System.out.print("Enter number 1: ");
        num1 = in.nextInt();
        System.out.print("Enter number 2: ");
        num2 = in.nextInt();
        sum(num1,num2);
//        int ans = sum2();
//        System.out.println("The sum is " + ans);
    }

    static void sum(int n1,int n2){
        int sum = n1 + n2;
        System.out.println("The sum = "+ sum);
    }
}
