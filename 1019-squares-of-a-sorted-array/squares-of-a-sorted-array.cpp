class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector <int> pos;
        vector <int>neg;
        int siz = nums.size();
        for(int i=0;i<siz;i++){
            if(nums[i]<0){
                neg.push_back(nums[i]);
            }
            else{
                pos.push_back(nums[i]);
            }
        }
        int i=0;
        int j =0;
        int id=0;
        int n = neg.size();
        int m = pos.size();
        vector<int>arr(n+m);
        for(int i =0;i<n;i++){
            neg[i]=neg[i]*neg[i];

        }
        reverse(neg.begin(),neg.end());
        for(int j=0;j<m;j++){
            pos[j]=pos[j]*pos[j];
        }

        while(i<n && j<m){
            if(neg[i]<pos[j]){
                arr[id]=neg[i];
                i++;
                id++;
            }
            else{
                arr[id]=pos[j];
                j++;
                id++;
            }

        }
        while(i<n){
            arr[id]=neg[i];
                i++;
                id++;

        }
        while(j<m){
            arr[id]=pos[j];
                j++;
                id++;
  
        }
        return arr;


        
    }
};