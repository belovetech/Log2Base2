package lesson5.src.SortingCollection;

import java.util.Collections;
import java.util.LinkedList;
import java.util.List;

public class StringSorting {
    public static void main(String[] args) {
        List<String> names = new LinkedList<String>();
    
        names.add("Zen");
        names.add("james");
        names.add("Bob");
        
        for (String name: names) {
            System.out.println(name);
        }
        
        // Sorting
        Collections.sort(names);
        System.out.println("................Sorting..............");
        for (String name: names) {
            System.out.println(name);
        }
    }
}
