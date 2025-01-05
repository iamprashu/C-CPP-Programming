public class SearchSpaceQuotient {
    static int GetQuotient(int divident,int divisor){
            
            int start = 0;
            int end = Math.abs(divident);
            int FinalDivisor = Math.abs(divisor);
            int answer = 0;
    
            while(start<=end){
                int mid = start + ((end-start)>>1);
                int Asumption = mid * FinalDivisor;
    
                if(Asumption <= divident){
                    // return mid;
                    answer = mid;
                }
    
                if(Asumption > divident){
                    end = mid - 1;
                }else{
                    start = mid+1;
                }
            }
            if(divident<0 || divisor<0){
                answer *= -1;
            }
            return answer;
        }
        public static void main(String[] args) {
            
            System.out.println("The Quotiant is :  " + GetQuotient(10,-3));
    }
}
