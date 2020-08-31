/*

https://leetcode.com/problems/destination-city/

1436. Destination City

You are given the array paths, where paths[i] = [cityAi, cityBi] means there exists a direct path going from cityAi to cityBi. Return the destination city, that is, the city without any path outgoing to another city.

It is guaranteed that the graph of paths forms a line without any loop, therefore, there will be exactly one destination city.

 

Example 1:

Input: paths = [["London","New York"],["New York","Lima"],["Lima","Sao Paulo"]]
Output: "Sao Paulo" 
Explanation: Starting at "London" city you will reach "Sao Paulo" city which is the destination city. Your trip consist of: "London" -> "New York" -> "Lima" -> "Sao Paulo".


Runtime: 28 ms, faster than 62.55% of C++ online submissions for Destination City.
Memory Usage: 11 MB, less than 54.18% of C++ online submissions for Destination City.

*/
class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
  	if (paths.size() == 1)
	{
		return paths[0][1];
	}

	set<string> cities;
	set<string> startPts;

	for (auto& it : paths)
	{
		startPts.insert(it.at(0));
	}
		
	for (auto& it : paths)
	{
		auto find = startPts.find(it.at(1));
		if (find == startPts.end())
		{
			cities.insert(it.at(1));
		}
	}

	return *cities.begin();
  }
};
