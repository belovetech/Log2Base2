package lesson4.src.UserInput;

// import java.io.BufferedReader;
// import java.io.IOException;
// import java.io.InputStreamReader;
import java.io.*;
import java.util.*;

public class UserInput {
    
    public static void main(String[] args) throws IOException {
        
        // using InputStreamReader
        try {
            BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
            System.out.println("Enter your name");
            String name = reader.readLine();
            System.out.println("My name is " + name);
        } catch (IOException ioe) {
            ioe.printStackTrace();
        }
        
        // Using Scanner
        try (
        Scanner scanner = new Scanner(System.in)) {
            System.out.println("Enter your nationality");
            String nationality = scanner.nextLine();
            System.out.println("I'm from " + nationality);
        }
        
        // Using Console
        Console console = System.console();
        if (console == null) {
            System.out.println("No console: not in interactive mode!");
            System.exit(0);
        }
        System.out.println("Enter your username");
        String username  = console.readLine();
        
        System.out.println("Enter your password");
        char[] password  = console.readPassword();
        
        System.out.println("Thank you!");
        System.out.println("Your username is: " + username);
        System.out.println("Your password is: " + String.valueOf(password));
        
    }
    
    
}
