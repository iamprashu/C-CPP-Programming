public class FindinRotatedSortedArray {
    public static int BinarySearchItMan(int arr[],int target, int start, int end){
        while(start<=end){
            int mid = start + (end-start) / 2;

            if(arr[mid] == target){
                return mid;
            }

            if(target > arr[mid]){
                start = mid+1;
            }
            
            else{
                end = mid-1;
            }
        }
        return -1;
    }
    public static void main(String[] args) {
        int arr[] = {1,2,3,4,5,6,0,1,2,3};
        int target = 0;

        int PiviotIndex = FindingPiviotSeries.GetPiviot(arr, arr.length);
        System.out.println("Piviot is " + PiviotIndex);
        //FindingPiviotSeries is a code in same dir so i am using that function
        // as that is a static function so i am calling it with Classname Only        
        int answer = -1;
        if(target >= arr[0] && target <= arr[PiviotIndex]){
            // applying binary search on that part
            answer = BinarySearchItMan(arr,target,0,PiviotIndex);
        }else{
            answer = BinarySearchItMan(arr, target, PiviotIndex+1,arr.length-1);
        }
        System.out.println("Target "+target+" Is at " + answer + "th Index..." );
    }
}
