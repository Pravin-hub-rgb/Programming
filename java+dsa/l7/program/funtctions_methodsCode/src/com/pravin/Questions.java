package com.pravin;

import java.util.Scanner;

public class Questions {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        // int n = in.nextInt();
        // in.close();
        // System.out.println(isPrime(n));
        printArm();
    }

    // print every three digit armstrong numbers
    
    static void printArm(){
        
        for (int i = 100; i < 1000; i++) {
            int isArm=i;
            int sum=0;

            while(isArm>0){
                int d =isArm%10;
                sum =sum+ d*d*d;
                isArm/=10;
            }
            // System.out.println(sum);
            if(sum==i){
                System.out.println(i+ " is a Armstrong number");
            }            
        }
    }

    // check if a number is prime or not
    static boolean isPrime(int n){
        boolean is=false;
        if(n<2){
            is = false;
        } else {
            for (int i=2;i<Math.sqrt(n);i++){
                if(n%i==0){
                    is = false;
                }
                else {
                    is = true;
                }
            }
        }
        return is;
    }
}
