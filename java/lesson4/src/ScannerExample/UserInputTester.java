package lesson4.src.ScannerExample;

import java.util.*;

public class UserInputTester {
    
    public static void main(String[] args) {
        Scanner scanner =  new Scanner(System.in);
        try {
            System.out.println("Enter a string");
            String userInput = scanner.nextLine();
            System.out.println("The user input: " + userInput);
        } catch (Exception ex) {
            ex.getLocalizedMessage();
        } finally {
            scanner.close();
        }
    }
    
}
