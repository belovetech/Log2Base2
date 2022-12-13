package lesson4.src.enumerations;

public class Light {
    public Light(){};
    
    enum StopLight {
        GREEN, YELLOW, RED;
    }
    
    public void changeLight(StopLight currentLight) {
        if (currentLight == StopLight.GREEN) {
            System.out.println("Green means GO!");
        } else if (currentLight == StopLight.YELLOW) {
            System.out.println("Yellow means SLOW DOWN!");
        } else if (currentLight == StopLight.RED) {
            System.out.println("Red means STOP!");
        }
    }
}
 