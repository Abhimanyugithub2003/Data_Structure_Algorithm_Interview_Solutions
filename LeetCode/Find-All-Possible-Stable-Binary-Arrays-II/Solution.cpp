class Solution {
    // you can paste raw values, or programmatically precompute.
    static final long[] fact = { /*removed due to text limit*/ };
    static final long[] inv = { /*removed due to text limit*/ };
    final long mod = 1000000007L;

    public int numberOfStableArrays(int zero, int one, int limit) {
        long res = 0;
        for (int i = 1; i < Math.min(zero, one) + 2; i++) {
            long b = ways(one, i, limit); // valid distributions for the [1s] elements
            if (b == 0)
                continue; //

            long a = (ways(zero, i - 1, limit) + // [1s] ... [0s] ... [1s]
                      ways(zero, i, limit) * 2L + // [0s] ... [1s] OR [1s] ... [0s]
                      ways(zero, i + 1, limit)) % mod; // [0s] ... [1s] ... [0s]

            res = (res + b * a) % mod; //  b × a 
        }

        return (int) res;
    }

    long ways(int n, int k, int l) {
        if (n == k)
            return 1; // exactly 1 element assigned per group
        long sum = 0;
        int rem = n;
        for (int i = 0; i < k + 1 && k <= rem; i++) { // bound iterations to remaining element capacity O(n/l)
            long t = (nCr(k, i) * nCr(rem - 1, k - 1)) % mod; // inclusion-exclusion group distribution
            sum = (sum + ((i & 1) == 0 ? t : mod - t)) % mod; // apply alternating addition and subtraction
            rem -= l; // subtract capacity limit
        }
        return sum;
    }

    long nCr(int n, int r) {
        if (r < 0 || r > n)
            return 0;
        return (((fact[n] * inv[r]) % mod) * inv[n - r]) % mod;
    }
}