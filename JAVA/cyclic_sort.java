import java.util.Arrays;

public class cyclic_sort {
    public static void main(String[] args) {
        int[] arr = {1,1,1,3,3,4,3,2,4,2}; // if array is given from 1 to n (n = positive integer) and of continuous elements then use cyclic sort
        sort(arr);
        System.out.println(Arrays.toString(arr));
    }

    static void sort(int[] arr) {
        int i = 0;
        while(i < arr.length){
            int correct = arr[i] - 1;
            if(arr[i] != arr[correct]){
                swap(arr, i, correct);
            }
            else {
                i++;
            }
        }
    }

    static void swap(int[] arr, int first, int second){
        int temp = arr[first];
        arr[first] = arr[second];
        arr[second] = temp;
    }
}
