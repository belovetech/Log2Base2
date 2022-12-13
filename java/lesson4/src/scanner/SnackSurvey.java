package lesson4.src.scanner;

import java.util.Scanner;

public class SnackSurvey {
    
  public static void main(String[] args) {
    boolean keepRunning = true;
    try(Scanner scanner = new Scanner(System.in)) {
        
      while (keepRunning) {
        try {
          System.out.println("Snacks for the breakroom?");
          System.out.println("1. Fruits");
          System.out.println("2. Chips");
          System.out.println("3. Candy");
          System.out.println("Please, enter your selection");
          int selection = Integer.parseInt(scanner.nextLine());
          
          if (selection == 1) {
            System.out.println("Fruits");
            keepRunning = false;
          } else if (selection == 2) {
            System.out.println("Chips");
            keepRunning = false;
          } else if (selection == 2) {
            System.out.println("Candy");
            keepRunning = false;
          } else {
            System.out.println("Please enter a number between 1 and 3");
          }
            
        } catch (Exception ex) {
          System.out.print("\nError - Invalid input\n");
        }
      }
    }
  }
    
}
