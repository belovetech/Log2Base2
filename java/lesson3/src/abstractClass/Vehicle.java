package lesson3.src.abstractClass;

public abstract class Vehicle {
    protected String start;
    protected String stop;
    protected String direction;
    
    public Vehicle(String start, String stop, String direction) {
        this.start = start;
        this.stop = stop;
        this.direction = direction;
    }
    
    public abstract void speed();
    
}