class Solution {
public:
    void merge(vector<int> &arr,int l,int mid,int r){
    
        int n1 = mid-l+1;
        int n2 = r-mid;

        int arr1[n1],arr2[n2];

        for(int i=0;i<n1;i++){
            arr1[i]=arr[l+i];
        }
        for(int i=0;i<n2;i++){
            arr2[i]=arr[mid+i+1];
        }
        // i for arr1
        // j for arr2
        // k for arr
        int i=0,j=0,k=l;

        // comparing smaller element from arr1 and arr2 and inserting in arr
        while(i < n1 && j < n2){
            if(arr1[i] <= arr2[j]){
                arr[k] = arr1[i];
                i++;
                k++;
            }
            else{
                arr[k]=arr2[j];
                j++;
                k++;
            }
        }

        // if arr2 runs out before completing arr
        while(i<n1){
            arr[k]=arr1[i];
            i++;
            k++;
        }
        // if arr1 runs out before completing arr
        while(j<n2){
            arr[k]=arr2[j];
            j++;
            k++;
        }
    }

    void sort(vector<int> &arr,int l,int r){
        if(r<=l) return;

        int mid = l + (r-l)/2;
        sort(arr,l,mid);
        sort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }

    vector<int> sortArray(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        sort(nums,0,nums.size()-1);
        return nums;
    }
};
