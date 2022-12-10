package lesson3.src.inheritanceExample;

public class PersonTester {
    public static void main(String[] args) {
        Person john = new Person("James", "John");
        Student james = new Student("James", "Daniel", "00123");
        StudentEmployee mike = new StudentEmployee("James", "Daniel", "00123", 45.6, "emp001");
        
        System.out.println(john);
        System.out.println(james);
        System.out.println(mike);
    }
}
