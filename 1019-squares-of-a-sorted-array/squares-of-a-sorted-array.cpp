class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int siz = nums.size();
        vector<int>pos;
        vector<int>neg;
for(int i =0;i<siz;i++){
        if(nums[i]<0){
            neg.push_back(nums[i]);
        }
        else{
            pos.push_back(nums[i]);
        }
}


int i=0;
int j=0;
int id = 0;
int n = pos.size();
int m = neg.size();
vector<int>arr(n+m);
for(int i =0;i<m;i++){
    neg[i]=neg[i]*neg[i];
    
}
reverse(neg.begin(),neg.end());
for(int i =0;i<n;i++){
    pos[i]=pos[i]*pos[i];
}
while(i<m && j<n){
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
while(i<m){
    arr[id]=neg[i];
    i++;
    id++;

}
while(j<n){
    arr[id]=pos[j];
    j++;
    id++;
}
return arr;




}
};