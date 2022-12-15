package lesson6.src.setsExample;

import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Set;

public class SetExcercise {
    
    public static void main(String[] args) {
        List<String> numbers = new ArrayList<String>();
        
      // We have a list of numbers and some are duplicates
        numbers.add("123-222-3333");
        numbers.add("223-222-3333");
        numbers.add("123-332-3333");
        numbers.add("123-222-4433");
        numbers.add("123-222-1133");
        numbers.add("123-222-3333");
        numbers.add("123-222-3333");
        numbers.add("123-232-4533");
        numbers.add("123-562-3333");
        numbers.add("123-000-3333");
        numbers.add("555-222-3333");
        numbers.add("444-222-3333");
        
        // Add them to a Set to get a unique list
        Set<String> uniqueNumbers = new HashSet<String>(numbers);
        
        for (String number: uniqueNumbers) {
            System.out.println(number);
        }
        
    }
    
}
