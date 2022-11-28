class NumBST {
public:
    int numTrees(int n) {
        vector<int> t(n+1) ;
        for(int i=0; i<=n; i++) {
            if(i==0 || i==1) {
                t[i] = 1;
            }
            else {
                for(int k=0; k<i; k++) {
                    t[i] += t[k]*t[i-k-1];
                }
            } 
        }
        return t[n];
    }
};
