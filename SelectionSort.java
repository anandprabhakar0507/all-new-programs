// Note: Selection sort isn't stable i.e, the relative position of same numbers doesn't remain the same always
// Time O(n^2)

import java.util.Arrays;
class SelectionSort{

    // public static int[] sSort(int[] arr){
    //     int pointer = 0;
    //     int temp = 0;
    //     for(int i=0; i<arr.length-1; i++){
    //         for(int j=i+1; j<arr.length; j++){
    //             if(arr[j] < arr[pointer]){
    //                 temp = arr[pointer];
    //                 arr[pointer] = arr[j];
    //                 arr[j] = temp;
    //             }
    //         }
    //         pointer++;
    //     }
    //     return arr;
    // }

    // Optimised, redusing #swaps
    public static int[] sSort(int[] arr){
        int minIndex = 0;
        int temp = 0;
        for(int i=0; i<arr.length-1; i++){
            minIndex = i;
            for(int j=i+1; j<arr.length; j++){
                if(arr[j] < arr[minIndex]) minIndex = j;
            }
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
        return arr;
    }    

    public static void main(String[] args){
        int[] arr = new int[] {123,15,745,7,325,5};
        System.out.println(Arrays.toString(arr));
        arr = sSort(arr);
        System.out.println(Arrays.toString(arr));
    }
}