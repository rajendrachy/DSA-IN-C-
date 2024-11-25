// _____________Majority Element_______________
// Brute- Better- Best Approach -> Time Complexicity -> O(n^2)

// ____________CRITERIA-> _______________
//1.Return pair in sorted array with a targeted sum ___________________________

// Pair sum -> 2, 7, 11, 15
// Let us suppose the TARGET -> 9
// Then, find the pair whose sum => 9 using an Array ===>>> 7+2=9, or .......


// _____SOLUTION_____________
// 1. FIrst find all the possible Pairs 

// ROUGH CODE_______________

// for(int i=0; i<n; i++) {
//   for(int j=i+1; j<n; j++){}
// if(arr[i]+arr[j] == target )
// vecor.push_back(i);
// vector.push_back(j)
// then return vector or ans





// ___________________CODE______________
// ---ANS---- Using Bruth better best approach

// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> pairSum(vector<int> nums, int target) {
//     vector<int> ans;
//     int n = nums.size();

//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (nums[i] + nums[j] == target) {
//                 ans.push_back(nums[i]); // Store the Actual Values
//                 ans.push_back(nums[j]);
//                 return ans;
//             }
//         }
//     }
//     return ans;
// }

// int main() {
//     vector<int> nums = {2, 7, 11, 15};
//     int target = 9;

//     vector<int> ans = pairSum(nums, target);

//     if (!ans.empty()) {
//         cout << "Pair: " << ans[0] << ", " << ans[1] << endl;
//     } else {
//         cout << "No pair found." << endl;
//     }

//     return 0;
// }











// _______________Same Qn Using A 2-Pointer Approach____________________

// Steps-> first take i and j =>> i->  Point to first index value in array
 // & j -> point last index value in the array
// Take pairsum and target and compait it ==>>  pairsum >, < or == target

// if(pairsum >target) then , j--;
// if(pairsum < target) then , i++;
// if(parisum == target) then, return ans; => (i, j)
// i = 0, j=n-1
// while(i<j) {}


// _______________CODE______________________

#include <iostream>
#include <vector>
using namespace std; // O(n)

vector<int> pairSum(vector<int> nums, int target) {
    vector<int> ans;
    int n = nums.size();

    int i=0, j=n-1;

    while(i<j) {
    int psum = nums[i] + nums[j];

    if(psum > target) {
        j--;
    }  else if(psum < target) {
        i++;
    } else {
        ans.push_back(nums[i]); // or  only ==>> i, j to print a index
        ans.push_back(nums[j]); 
        return ans;
    }


    }
    return ans;
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 26;

    vector<int> ans = pairSum(nums, target);

    if (!ans.empty()) {
        cout << "Pair: " << ans[0] << ", " << ans[1] << endl;
    } else {
        cout << "No pair found." << endl;
    }

    return 0;
}


// Continue -> 15:02 -> part 11