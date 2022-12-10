package lesson3.src.inheritanceExample;

public class Person {
    private String firstName;
    private String lastName;
    
    public Person(String firstName, String lastName) {
        super();
        this.firstName = firstName;
        this.lastName = lastName;
    }
    
    public String getFirstName() {
        return firstName; 
    }
    
    public void setFirstName(String firstname) { 
        this.firstName = firstname; 
    }
    
    public String getLastName() { 
        return lastName; 
    }
    
    public void setLastName(String lastName) { 
        this.lastName = lastName; 
    }
    
    @Override
    public String toString() {
        return "Name: " + firstName + " " + lastName;
    }
}
