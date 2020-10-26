#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

/*
	Problem:
  You have const char * with equal length lines. You need to order the lines appropriately and reverse the order of the strings in every line.
  
  Tasks:
		- Swap each pair of lines
		- Revert the characters inside the line
    
   Constraints:
    Can use STL or whatever you want, except any kind of order algorithms.
    
*/

char* simplifyMyString(const char* text)
{
	char* ret = new char[ sizeof(text) + 1 ];
	ret[0] = '\0';

	std::string tmpString(text);
	
	std::stringstream ss(tmpString);
	std::vector<std::string> linesV;

	while ( ss >> tmpString )
	{
		std::cout << tmpString << std::endl;
		linesV.push_back(tmpString);
	}

	for (int i = 1; i < linesV.size(); i = i +2)
	{
		std::reverse(linesV[i-1].begin(), linesV[i-1].end());
		std::reverse(linesV[i].begin(), linesV[i].end());
		std::swap(linesV[i - 1], linesV[i]);
		
		if (i == 1)
		{
			strcpy(ret, linesV[i - 1].c_str());
			strcat(ret, "\n");
			strcat(ret, linesV[i].c_str());
			strcat(ret, "\n");
		}
		else
		{
			strcat(ret, linesV[i - 1].c_str());
			strcat(ret, "\n");
			strcat(ret, linesV[i].c_str());
			strcat(ret, "\n");
		}
	}

	return ret;
}

int main()
{
	// driver code
	const char* input = "qxnxghedub1\n"
						"zmlxqbjviv0\n"
						"bkapdrwtcz3\n"
						"rikoyjtsdj2\n"
						"jpzflybksl5\n"
						"dhkwhjbryu4\n"
						"ymfxegmtpf7\n"
						"dsnwhenknw6\n"
						"dtmukoyhwp9\n"
						"uzpqpljufj8\n\0";

	std::cout << simplifyMyString(input) << std::endl;

	return 0;
}
