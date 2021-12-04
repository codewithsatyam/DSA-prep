class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> b;
        int a = *max_element(candies.begin(), candies.end());
        for(int i : candies)
        {
          if(i + extraCandies >= a) 
              b.push_back(true); 
          else b.push_back(false);
        }
        return b;
    }
  
/***************************************************************************************************************************************  
  class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int max_cand = candies[0];
        for(int i=0; i<candies.size(); i++)
        {
            if(candies[i]>max_cand)
                max_cand = candies[i];
        }
        for(int i=0; i<candies.size(); i++)
        {
            if(candies[i]+extraCandies>=max_cand)
                ans.push_back(true);
            else
                ans.push_back(false);
        }
        return ans;
    }
};

// **************************************************************************************************************************************/
