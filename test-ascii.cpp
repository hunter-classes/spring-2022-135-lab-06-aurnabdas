#include <iostream>
#include <string>

int main()
{
    std::string s = "Cat :3 Dog";
    for(int i=0; i<= s.size(); i++)
    {
        std::cout << s[i] << " "<< (int)s[i] << std::endl;
    }

    return 0;
}