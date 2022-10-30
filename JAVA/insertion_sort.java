import java.util.Arrays;

public class insertion_sort {
    public static void main(String[] args) {
        int[] arr = {9,1,1,8,9,-9,5,6,7,2};
        insertion(arr);
        System.out.println(Arrays.toString(arr));

    }

    static void insertion(int[] arr) {
        for (int i = 0; i < arr.length - 1; i++) { // This loop will run n-2 times (n: size of the array)
            for (int j = i + 1; j > 0 ; j--) {
                if(arr[j] < arr[j-1]){
                    swap(arr, j, j-1); // elements will swap if any element is smaller than the previous one
                }
                else{
                    break; // Loop will break if there is no swap occur.
                }
            }
        }
    }
    static void swap(int[] arr, int first, int second){
        int temp = arr[first];
        arr[first] = arr[second];
        arr[second] = temp;
    }
}
