package lesson4.src.enumerations;

import lesson4.src.enumerations.Light.StopLight;

public class LightChanger {
    
    public static void main(String[] args) {
        Light light = new Light();
        light.changeLight(StopLight.RED);
    }
}
