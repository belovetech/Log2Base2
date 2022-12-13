package lesson5.src.IteratorExample;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;


public class IteratorExample {
    
    public static void main(String[] args) {
        List<String> names = new ArrayList<String>();
        
        names.add("Mike");
        names.add("Bob");
        names.add("Alice");
        
        // Convert List of strings to an iterator
        Iterator<String> iterator = names.iterator();
        
        while(iterator.hasNext()) {
            System.out.println(iterator.next());
        }
        
        
    }
}
