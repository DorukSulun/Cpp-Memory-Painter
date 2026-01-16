#include<iostream>
#include<string>

int main()
{
	//Variable Declaration
	char symbol;
	int width;

	std::cout << "========================================" << std::endl;
    std::cout << "   CPP MEMORY PAINTER & ASCII ART TOOL  " << std::endl;
    std::cout << "========================================" << std::endl;

    std::cout << "[INPUT] Enter a symbol to draw with (e.g, *, #, @):  ";
    std::cin >> symbol;

    std::cout << "[INPUT] Enter the width of the square (integer): ";
    std::cin >> width;

    if(width <= 0)
    {
    	std::cout << "[ERROR] Width must be a positive integer!" << std::endl;
        return 1; // Exit with error code
    }

    std::cout << "\n--- TECHNICAL SPECS ---" << std::endl;
    std::cout << "Selected Symbol: " << "'" << symbol << "'" << std::endl;

    std::cout << "[MEMORY] 'char' variable consumes: " << sizeof(symbol) << " byte(s)\n";
    std::cout << "[MEMORY] 'int' variable consumes:  " << sizeof(width) << " byte(s)\n";

    int area = width * width; 
    std::cout << "[MATH] Mathematical Area: " << area << " units^2" << std::endl;

    std::cout << "\n--- RENDERING OUTPUT ---\n";

    for(int i = 0; i < width; ++i)
    {
    	for(int j = 0; j < width; ++j)
    	{
    		std::cout << symbol << " ";
    	}
    	std::cout << "\n";
    }

    std::cout << "[INFO] Render Complete.\n\n";


	return 0;
}