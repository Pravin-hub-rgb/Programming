package com.pravin;

import java.util.Scanner;
public class Loops {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        // Q: Print numbers from 1 to 5
//        for (int i = 1;i<=5;i++){
//            System.out.println(i);
//        }
        // take input from the user and print from 1 to the number giver by the user
//        int num = input.nextInt();
//        for (int i=1;i<=num;i++){
//            System.out.print(i+" ");
//        }

        //While loop
//        int i=0;
//        while(i<5){
//            System.out.println(i);
//            i++;
//        }

        // do while loop
        int j=1;
        do{
            System.out.println(j);
            j++;
        } while (j<6);

    }
}
