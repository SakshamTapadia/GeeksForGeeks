class Solution{
public:
    int evenlyDivides(int N){
        //code here
        int count = 0;  
        for (int i = N; i > 0; i /= 10) {  
            int ld = i % 10;  
            if (ld != 0 && N % ld == 0) {  
            count++;  
            }
        }
            return count;
            }
};
