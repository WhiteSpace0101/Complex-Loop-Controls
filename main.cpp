#include <iostream>
#include <format>


//Multiple initializations in a for-loop
int main()
{
    unsigned int limit = 0;
    std::cout << "This prgram calculates n! and the sum of the intergers "
            << "up to n for values 1 to limit. \n";
    std::cout << "What upper limit for n would you like? ";
    std::cin >> limit;
    std::cout << "\n\n";
    
    // The format string for all rows of the table.
    constexpr const auto table_format = "{:>8} {:>8} {:>20}\n"; // format the table using left align, :>8 space for 8 characters, :>20 space for 20 characters

    // Output column headings
    std::cout << std::format(table_format, "integer", "sum", "factorial");

    for(unsigned long long n = 1, sum = 0, factorial =1; n <= limit; n++)
    {
        sum += n;
        factorial *= n;
        std::cout << std::format(table_format, n, sum, factorial);
    }

    std::cout <<"hello" <<std::endl;

    return 0;
}