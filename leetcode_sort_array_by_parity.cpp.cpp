/**
Sort Array By Parity

Source:
  https://leetcode.com/problems/sort-array-by-parity/
*/

/*
  Write all the even elements first, then write all the odd elements.
*/
class Solution_2 {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
      vector<int> B;
      for (auto& num : A)
      {
        if (num % 2 == 0)
        {
          B.emplace(B.begin(), num);
        }
        else
        {
          B.emplace_back(num);
        }
      }
      return B;*
};

/*
  Use a custom comparator when sorting, to sort by parity.
*/
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
       sort(A.begin(), A.end(), [](int a, int b) {
		      if (a % 2 == 0 && b % 2 != 0)
			      return true;
		
		  return false;
	});
        return A;
    }
};
