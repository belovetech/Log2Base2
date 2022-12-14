package lesson5.src.SortingCollection;

public class Person implements Comparable<Person>{
    
    public String name;
    
    public Person(String name) {
        this.name = name;
    }
    
    public int compareTo(Person person) {
        return this.name.compareTo(person.name);
    }
    
    @Override
    public String toString() {
        return "Name: " + name;
    }
}
