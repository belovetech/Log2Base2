public class Person {
    private String firstName;
    private String address;
    private String work;
    
    public Person(String firstName, String address, String work) {
        super();
        this.firstName = firstName;
        this.address = address;
        this.work = work;
    }
    
    public String getFirstName() {
        return firstName;
    }
    
    public void setFirstName(String firstName) {
        this.firstName = firstName;
    }
    
    public String getAddress() {
        return address;
    }
    
    public void setAddress(String address) {
        this.address = address;
    }
    
    public String getWork() {
        return work;
    }
    
    public void setWork(String work) {
        this.work = work;
    }
    
    @Override
    public String toString() {
        return "First Name: " + firstName + " Address: " + address + " Work" + work;
    }
}
