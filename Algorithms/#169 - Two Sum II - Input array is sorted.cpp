vector<int> twoSum(vector<int>& numbers, int target) {
    //both approaches work
        // Testcases
        // [2,7,11,15]
        // 9
        // [2,3,4]
        // 6
        // [-1,0]
        // -1
        // [0,0,3,4]
        // 0
        // [5,25,75]
        // 100
//         vector<int> ans;
//         int l = 0, r = numbers.size() - 1;
//         while(l<r) {
//             if(numbers[l] + numbers [r] == target) {
//                 ans.push_back(l+1);
//                 ans.push_back(r+1);
//                 return ans;
//             } else if(numbers[l] + numbers[r] < target) {
//                 l++;
//             } else {
//                 r--;
//             }
//         }
        
//         return ans;
//     }
    
    vector<int> ans;
    unordered_map<int, int> mp;
    
    for(int i=0; i<numbers.size(); i++) {
        mp[numbers[i]] = i;
    }

    int sum;

    for(int i=0; i<numbers.size(); i++) {
        sum = target - numbers[i];
        
        if(mp.count(sum) != 0) {
            ans.push_back(i+1);
            ans.push_back(mp.at(sum) + 1);
            break;
        }
    }

    return ans;
}