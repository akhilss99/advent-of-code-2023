#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    // Part 1
    {
        fstream file;
        string line;
        int sum;
        file.open("input.txt", ios::in);
        while (std::getline(file, line))
        {
            for (int i = 0; i < line.length(); i++)
            {
                char ch = line[i];
                if (std::isdigit(ch))
                {
                    sum += 10 * (ch - '0');
                    break;
                }
            }

            for (int j = line.length() - 1; j >= 0; j--)
            {
                char ch = line[j];
                if (std::isdigit(ch))
                {
                    sum += (ch - '0');
                    break;
                }
            }
        }

        cout << sum;
    }

    // Part 2
    {
        
    }

    return EXIT_SUCCESS;
}