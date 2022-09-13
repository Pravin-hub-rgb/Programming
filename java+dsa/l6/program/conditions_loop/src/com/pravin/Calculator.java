package com.pravin;

import java.util.Scanner;

public class Calculator {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int ans=0;
        while(true){
            // take the operator
            System.out.print("Enter the operator : ");
            char op = in.next().trim().charAt(0);
            if(op == '+' || op == '-' || op == '*' || op == '/' || op == '%'){
                // input two number
                System.out.print("Enter first no. :");
                int a = in.nextInt();
                System.out.print("Enter second no. :");
                int b = in.nextInt();
                if(op == '+'){
                    ans = a+b;
                }else if(op == '-'){
                    ans = a-b;
                } else if(op == '*'){
                    ans = a*b;
                } else if(op=='/'){
                    if(a!=0){
                        ans = a/b;
                    }
                } else {
                    ans = a%b;
                }
            } else if (op == 'x' || op == 'X') {
                System.out.println("Quitted");
                    break;
            } else {
                System.out.println("Wrong operator");
            }
            System.out.println(ans);
        }

    }
}
