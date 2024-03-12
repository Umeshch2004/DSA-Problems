//Link: https://leetcode.com/problems/find-a-peak-element-ii/description/

class Solution {
public:
    int maxelement(vector<vector<int>>& mat, int n,int m,int col)
    {
        int maxvalue = -1;
        int index = -1;
        for(int i=0;i<n;i++)
        {
            if(mat[i][col]>maxvalue)
            {
                maxvalue = mat[i][col];
                index = i;
            }
        }
        return index;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int low=0;
        int high = m-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            int maxrow = maxelement(mat, n, m ,mid);
            int left = mid-1 >=0 ? mat[maxrow][mid-1] : -1;
            int right = mid +1 < m ? mat[maxrow][mid+1] : -1;
            if(mat[maxrow][mid] > left && mat[maxrow][mid] >right)
            {
                return {maxrow, mid};
            }
            else if (mat[maxrow][mid] < left)
            {
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
        }
        return {-1,-1};
        
    }
};