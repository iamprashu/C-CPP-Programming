public class FindingPiviotSeries{

    static int GetPiviot(int arr[],int n){
        // Created 2 pointers to use binary search here
        int left_p = 0, right_p = n-1;
        
        while(left_p <= right_p){
            // case 1 if element is single element
            if(left_p == right_p){
                return right_p;
            }
            // calculating mid with integer overflow condition
            int mid = left_p + (right_p - left_p) / 2;

            // if mid came to that piviot and piviot always greater then piviot + 1 element
            if(arr[mid] > arr[mid+1]){
                return mid;
            }
            if(arr[mid] < arr[left_p]){
                right_p = mid-1;
            }else{
                left_p = mid+1;
            }
        }

        return -1;
    }
    public static void main(String args[]){
        int arr[] = { 4,5,6,7,0,1,2};
        // given array here
        int n = arr.length;

        System.out.println("Piviot Element in array  is :> " + GetPiviot(arr,n));
    }
}