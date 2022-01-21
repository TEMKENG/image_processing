/* 
    Author: Thibaut Temkeng
    Email: Temkengthibaut@gmail.com
    Created: 2022-01-21 02:40
 */

#include <iostream>
#include <filesystem>

using std::cout; using std::endl;
using std::system; using std::string;
namespace fs = std::filesystem;

int main() {
    string directory_name("tmp_dir");

    fs::create_directory(directory_name)?
    cout << "created directory - " << directory_name << endl :
    cout << "create_directory() failed" << endl;

    return EXIT_SUCCESS;
}