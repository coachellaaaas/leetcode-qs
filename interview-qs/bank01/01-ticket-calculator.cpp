/*
    Rules: 
        - 1 week requires 1 ticket
        - this program creates to calculate how many ticket a client needs to buy based on their entry records

    Example output: 
        - ['Mon', 'Mon', 'Mon'] must return 3 tickets 
        - ['Mon', 'Tue', 'Fri', 'Wed', 'Sun', 'Tue', 'Tue'] must return 4 
        - ['Tue', 'Sun', 'Wed', 'Thu', 'Mon', 'Fri', 'Sat', 'Sun'] must return 3 

*/

# include <iostream>
# include <vector>
# include <string>


// for testing 
int main () {
    // test case
    std::vector<std::string> A = {"Mon", "Mon", "Mon"}; 

    // test logic
    std::cout << "Testing with A = ";
    for (const auto& day : A) {
        std::cout << day << " "; 
    }
    std::cout << std::endl;

    // end the function
    return 0;
}
