// https://leetcode.com/problems/find-the-duplicate-number/

import java.util.Arrays;

public class DuplicateNum {
    public static void main(String[] args) {
        int[] arr = {2,5,1,3,6,7,4,8,12,11,9,8,10};
        DuplicateNum(arr);
        System.out.println(Arrays.toString(arr));
        System.out.println(DuplicateNum(arr));
    }
    static int DuplicateNum(int[] arr){
        int i = 0;
        while(i < arr.length){
            int correct = arr[i]-1;
            if (arr[i] != arr[correct]){
                swap(arr, i , correct);
            }
            else{
                i++;
            }
        }
        return arr[arr.length-1];
//        //Search duplicate number
//        for (int j = 0; j < arr.length; j++) {
//            if (arr[j] == )
//        }
    }
    static void swap(int[] arr, int first, int second){
        int temp = arr[first];
        arr[first] = arr[second];
        arr[second] = temp;
    }
}
