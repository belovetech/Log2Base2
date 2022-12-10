
public class ArrayExcercise {
       
    public int[] fillArray() {
        int[] arr = new int[5];
        
        for (int i = 0; i < arr.length; i++) {
            arr[i] = 5 - i;
        }
        return arr;
    }
    
    public static void main(String[] args) {
        ArrayExcercise arrayExcercise = new ArrayExcercise();
        int[] arr = arrayExcercise.fillArray();
        String[] words = {"Ignition sequence start!", "Liftoff!"};
        
        System.out.println(words[0]);
        for (int i =0 ; i < arr.length; i++) {
            System.out.println(arr[i]);
        }
        System.out.println(words[1]);
    }
}