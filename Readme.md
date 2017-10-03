
IniFileParser.cpp is a tiny .ini file parser library.

You can use the following function to use:

```
bool Open(const std::string& filePath);
bool GetValuesToString(const std::string& sections, const std::string& keys, std::string& values);
bool GetValueToInt(const std::string& sections, const std::string& keys, int& value, const int index=0);
bool GetValueToFloat(const std::string& sections, const std::string& keys, float& value, const int index=0);
bool GetValuesToIntVec(const std::string& sections, const std::string& keys, std::vector<int>& values);
bool GetValuesToFloatVec(const std::string& sections, const std::string& keys, std::vector<float>& values);
```
From these function names you can probably guess what these functions are for;

For example:
you can use 
```
bool GetValueToFloat(const std::string& sections, const std::string& keys, float& value, const int index=0);
```
get a float values based on section, keywords, and index values;

For detailed use cases, see the test folder.


