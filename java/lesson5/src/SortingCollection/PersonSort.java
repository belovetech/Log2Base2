package lesson5.src.SortingCollection;

import java.util.ArrayList;
import java.util.Collections;

public class PersonSort {
    public static void main(String[] args) {
        ArrayList<Person> people = new ArrayList<Person>();
        
        
        people.add(new Person("James"));
        people.add(new Person("Bob"));
        people.add(new Person("Michael"));
        
        Collections.sort(people);
        
        for (Person person: people) {
            System.out.println(person);
        }
        
    }
}
