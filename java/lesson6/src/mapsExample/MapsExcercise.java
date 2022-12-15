package lesson6.src.mapsExample;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;

public class MapsExcercise {
    
    public static void main(String[] args) {
        Map<String, Person>  mapOfPeople = new HashMap<String, Person>();
        
        Person mike = new Person("Mike", "mike@email.com");
        Person shaun = new Person("Shaun", "shaun@email.com");
        Person sally = new Person("Sally", "sally@email.com");
        Person cesar = new Person("Cesar", "cesar@email.com");
        
        ArrayList<Person> people = new ArrayList<Person>();
        
        people.add(mike);
        people.add(shaun);
        people.add(sally);
        people.add(cesar);  
        
       
        // Add data to map
        /*mapOfPeople.put(mike.getEmail(), mike);
        mapOfPeople.put(shaun.getEmail(), shaun);
        mapOfPeople.put(sally.getEmail(), sally);
        mapOfPeople.put(cesar.getEmail(), cesar); */
        for (Person person: people) {
            MapsExcercise.addToMap(mapOfPeople, person);
        }
        
        
        System.out.println("<<<<<<<keySet>>>>>>>>");
        for (String email: mapOfPeople.keySet()) {
            System.out.println(email);
        }
        
        System.out.println("<<<<<<<Values>>>>>>>>");
        for (Person person: mapOfPeople.values()) {
            System.out.println(person);
        }
        
        
        System.out.println("<<<<<<<Get data from map>>>>>>>>");
        System.out.println("Get Mike: " + mapOfPeople.get("mike@email.com"));
        System.out.println("Get Jefy: " + mapOfPeople.get("jefy@email.com"));
        System.out.println("Contains Mike: " + mapOfPeople.containsKey("mike@email.com"));
        System.out.println("Contains Mike: " + mapOfPeople.containsKey("jefy@email.com"));
        
    }
    
    public static void addToMap(Map<String, Person> map, Person person) {
        map.put(person.getEmail(), person);
    }
}
