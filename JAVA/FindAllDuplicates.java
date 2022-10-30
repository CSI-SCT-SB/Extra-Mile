// https://leetcode.com/problems/find-all-duplicates-in-an-array/

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class FindAllDuplicates {
    public static void main(String[] args) {
        int[] arr = {4,3,2,7,8,2,3,1};
        List<Integer> a = allDuplicates(arr);
        System.out.println(Arrays.toString(arr));
        System.out.println(a);
    }
    static List<Integer> allDuplicates(int[] arr){

        // sorting the given array
        int i = 0;
        while (i < arr.length){
            int correct = arr[i] - 1;
            if (arr[i] != arr[correct]){
                swap(arr, i, correct);
            }
            else{
                i++;
            }
        }

        // adding the duplicates numbers
        List<Integer> ans = new ArrayList<>();
        for (int index = 0; index < arr.length; index++) {
            if (arr[index] != index + 1){
                ans.add(arr[index]);
            }
        }
        return ans;
    }
    static void swap(int[] arr, int first, int second){
        int temp = arr[first];
        arr[first] = arr[second];
        arr[second] = temp;
    }
}
