class Solution {
public:
    int fib(int n) {
        double phi = (sqrt(5) + 1) / 2;     
        return round(pow(phi, n) / sqrt(5));
    }
};

/*int fib(int N) {
        if(N == 0)  return 0;
        if(N == 1)  return 1;
        return fib(N-1) + fib(N-2);
    }
    */