
#include "IniFileParser.hpp"
#include <iostream>

int main()
{
    IniFileParser inifileparser("./test.ini");

    std::string values;

    inifileparser.GetValuesToString("test_1", "table_type", values);
    std::cout << " test_1  table_type " << values << std::endl;

    inifileparser.GetValuesToString("test_1", "table_context", values);
    std::cout << " test_1  table_context " << values << std::endl;

    inifileparser.GetValuesToString("test_2", "roi", values);
    std::cout << " test_2  roi " << values << std::endl;

    inifileparser.GetValuesToString("test_2", "height", values);
    std::cout << " test_2  height " << values << std::endl;

    int tmp=0;
    inifileparser.GetValueToInt("test_2", "roi", tmp, 7);
    std::cout << "int::: " << tmp << std::endl;

    float float_tmp=0;
    inifileparser.GetValueToFloat("test_2", "height", float_tmp);
    std::cout << "float::: " << float_tmp << std::endl;

    std::vector<int> int_vec;
    inifileparser.GetValuesToIntVec("test_2", "roi", int_vec);
    for(auto it : int_vec)
        std::cout << it << " ";
    std::cout << std::endl;

    std::vector<float> float_vec;
    inifileparser.GetValuesToFloatVec("const_val", "floatval", float_vec);
    for(auto it : float_vec)
        std::cout << it << " ";
    std::cout << std::endl;

    return 0;
}

