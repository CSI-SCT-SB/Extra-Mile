import java.util.Arrays;

public class selection_sort {
    public static void main(String[] args) {
        int[] arr = {0,6,4,4,3,1,2,5,5};
        selectionSort(arr);
        System.out.println(Arrays.toString(arr));

    }

    static void selectionSort(int[] arr) {
        for (int i = 0; i < arr.length; i++) {
            // Find the max element and swap it with the correct index.
            int last = arr.length - i - 1; // e.g: if i = 2 and arr.length = 6 then, last = 6 - 2 - 1 = 3
            int maxIndex = getmax(arr, 0, last);
            swap(arr, maxIndex, last);
        }
    }

    static int getmax(int[] arr, int start, int last){
        int max = start;
        for (int i = start; i <= last; i++) {
            if(arr[max]<arr[i]){
                max = i;
            }
        }
        return max;
    }

    static void swap(int[] arr, int first, int second){
        int temp = arr[first];
        arr[first] = arr[second];
        arr[second] = temp;
    }
}
