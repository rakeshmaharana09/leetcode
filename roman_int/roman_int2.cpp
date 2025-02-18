class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> values{{"I", 1}, {"IV", 4},{"V", 5},
		                        {"IX", 9}, {"X", 10}, {"XL", 40} ,{"L", 50},
					{"XC", 90}, {"C", 100}, {"CD", 400}, {"D", 500},
					{"CM", 900}, {'M', 1000}};
	int sum = 0;
	int i = 0;
	while(i < s.size())
	{
		if(i < s.size()-1)
		{
			string doublestr = s.substr(i, 2);
			if(values.count(doublestr))
			{
				value = values[doublestr];
				sum += value;
				i = i + 2;
				continue;
			}

		}
		int value = values[s[i]];
		sum += value;
		i++;
	}
        return sum;
    }
};

