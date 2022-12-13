package lesson4.src.scanner;

import java.util.Scanner;

public class ScannerMethods {
   public static void main(String[] args) {
        try (Scanner scanner = new Scanner("This is a scanner")) {
            while (scanner.hasNext()) {
                System.out.println(scanner.next());
            }
        }
        
        // System.out.println(scanner.nextLine());
        // System.out.println(scanner.nextInt());
        // System.out.println(scanner.next());

   }
}
