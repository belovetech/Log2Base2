package lesson6.src.queueExample;

import java.util.LinkedList;
import java.util.Queue;

public class queueExcercise {
    
    public static void main(String[] args) {
        Queue<String> queuedCustomer = new LinkedList<>();
        
        queuedCustomer.add("1230");
        queuedCustomer.add("3421");
        queuedCustomer.add("4231");
        queuedCustomer.add("0123");
        
        while (!queuedCustomer.isEmpty()) {
            System.out.println("Customer " + queuedCustomer.poll() + " is getting helped");
        }
        
        
    }
}
