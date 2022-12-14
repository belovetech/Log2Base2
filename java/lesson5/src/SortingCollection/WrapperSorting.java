package lesson5.src.SortingCollection;

import java.util.Collections;
import java.util.LinkedList;
import java.util.List;

public class WrapperSorting {
    
    public static void main(String[] args) {
        List<Integer> nums = new LinkedList<Integer>();
        
        nums.add(302);
        nums.add(102);
        nums.add(123);
        
        for (Integer num: nums) {
            System.out.println(num);
        }
        
        // Sorting
        Collections.sort(nums);
        System.out.println("................Sorting..............");
        
        for (Integer num: nums) {
            System.out.println(num);
        }
        
    }
}
