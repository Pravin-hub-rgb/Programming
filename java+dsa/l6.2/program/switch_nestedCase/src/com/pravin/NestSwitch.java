package com.pravin;

import java.util.Scanner;

public class NestSwitch {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int empID = in.nextInt();
        String department = in.next();
        switch (empID){
            case 1:
                switch (department) {
                    case "first" -> System.out.println("you belong to first department");
                    case "second" -> System.out.println("you belong to second department");
                    default -> System.out.println("You belongs to the streets");
                }
                break;
            case 2:
                switch (department) {
                    case "first" -> System.out.println("you belong to third department");
                    case "second" -> System.out.println("you belong to fourth department");
                    default -> System.out.println("You belongs to the streets");
                }
                break;
            case 3:
                switch (department) {
                    case "first" -> System.out.println("you belong to fifth department");
                    case "second" -> System.out.println("you belong to sixth department");
                    default -> System.out.println("You belongs to the streets");
                }
                break;
            default:
                System.out.println("Please enter correct empID");
        }
    }
}
