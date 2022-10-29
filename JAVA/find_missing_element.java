// problems: https://leetcode.com/problems/missing-number/

public class find_missing_element{
    public static void main(String[] args) {
        int[] arr = {4,6,1,8,5,7,2,3};
        System.out.println(missingNum(arr));
    }

    static int missingNum(int[] arr) {
        int i = 0;
        // sorting the given array
        while(i < arr.length){
            int correct = arr[i];
            if(arr[i] < arr.length && arr[i] != arr[correct]){
                swap(arr, i, correct);
            }else {
                i++;
            }
        }
        // search in the given array
        for (int j = 0; j < arr.length; j++) {
            if(arr[j] != j){
                return j;
            }
        }
        // case 2: when there is no missing element found in the array.
        return arr.length;
    }

    static void swap(int[] arr, int first, int second){
        int temp = arr[first];
        arr[first] = arr[second];
        arr[second] = temp;
    }
}
