#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    fstream file;
    string line;
    int sum = 0;
    file.open("calibration_doc.txt", ios::in);
    bool isPresent = false;
    while (file)
    {
        std::getline(file, line);
        int first, last;
        for (int i = 0; i < line.length(); i++)
        {
            char ch = line[i];
            if (std::isdigit(ch))
            {
                sum = sum + 10 * (ch - '0');
                break;
            }
        }

        for (int j = line.length() - 1; j > 0; j--)
        {
            char ch = line[j];
            if (std::isdigit(ch))
            {
                sum = sum + (ch - '0');
                break;
            }
        }
        // cout << sum << "\n"
        //      << line << "\n";
    }

    cout << sum;

    return EXIT_SUCCESS;
}