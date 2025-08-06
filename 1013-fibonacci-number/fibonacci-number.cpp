class Solution {
public:
    int fib(int n) {
        if (n <= 1) return n;
        int a = 0, b = 1;
        return fib(n - 1) + fib(n - 2);
    }
};