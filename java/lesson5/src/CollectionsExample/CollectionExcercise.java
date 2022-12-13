package lesson5.src.CollectionsExample;

import java.util.LinkedList;
import java.util.List;

public class CollectionExcercise {
    public static void main(String[] args) {
        List<String> listOfItems = new LinkedList<String>();
        
        listOfItems.add("Mike");
        listOfItems.add("Bob");
        listOfItems.add("Alice");
        
        for (Object list: listOfItems) {
            System.out.println(list);
        }
    }
}
