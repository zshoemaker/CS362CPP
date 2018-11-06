#include <iostream>

using namespace std;

int main()
{
    string input;
    string food;

    cout<< "Enter each food and we'll add chips to them. Type \"done\" to quit." << endl;

    while (getline(cin, food)) 
    {
        if (food == "done")
            break;
        
         if (food[0] != 'q')
            food = food + " and chips";

        input += '\n' + food;
    }

 cout<< input;
 
}