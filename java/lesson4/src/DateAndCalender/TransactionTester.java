package lesson4.src.DateAndCalender;

import java.util.Date;

public class TransactionTester {
    
    public static void main(String[] args) {
        Transaction transaction = new Transaction("Withdrawal", new Date(), "1111", 567.50);
        
        System.out.println(transaction);
    }
}
