//
// Created by shazmaan on 7/10/2019.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>


//{6, 7, 1, 3, 8, 2, 4}
//{5, 3, 4, 11, 2}

using namespace std;

class Solution{
public:
    int rob(vector<int>& nums){
        int size= nums.size();
        if (size == 0){return 0;}

        int ind1 = nums.at(0);
        if (size == 1){return ind1;}

        int ind2 = max(nums.at(0), nums.at(1));
        if (size == 2){return ind2;}

        int maxVal;

        // Fill remaining positions
        for (int i=2; i<size; i++)
        {
            maxVal = max(nums.at(i)+ind1, ind2);
            ind1 = ind2;
            ind2 = maxVal;
        }

        return maxVal;
    }
//    int prob(vector<int>& nums){
//        int index = 2; int sum=nums[0]; vector<int> allNum;
//        while(index<nums.size()){
//            if(index+2<nums.size()){
//                if(nums[index+1]>nums[index]){
//                    if(nums[index+1]<nums[index+2]){
//                        sum+=nums[index]; allNum.push_back(nums[index]);
//                    }else{sum+=nums[index+1]; allNum.push_back(nums[index+1]);}
//                }else{sum+=nums[index];allNum.push_back(nums[index]);}
//            }else if(index+1<nums.size()){
//                if(nums[index+1]>nums[index]){
//                    sum+=nums[index+1]; allNum.push_back(nums[index+1]);
//                }else{sum+=nums[index];allNum.push_back(nums[index]);}
//            }else{
//                if(index-1>=0 && nums[index-1]>nums[index] && find(allNum.begin(),allNum.end(),nums[index-1])==allNum.end()){
//                    sum+=nums[index];
//                }else if(index-2>=0 && find(allNum.begin(),allNum.end(),nums[index-2])!=allNum.end()){
//                        sum+=nums[index];
//                }
////                }
//            }
//            cout<<nums[index]<<" "<<sum<<endl;
//            index+=2;
//        }
//        return sum;
//    }
};

int main(){
    Solution s;
    vector<int> vec{5, 3, 4, 11, 2};
    vector<int> vec2{6, 7, 1, 3, 8, 2, 4};
    vector<int> vec3{1,2,3,1};
    vector<int> vec4{2,7,9,3,1};
    vector<int> vec5{1,3,1};
    cout<<s.rob(vec5)<<endl;
    return 0;
}