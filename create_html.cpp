
#include <iostream>
#include <vector>

int main(){
    
    std::ofstream html("mesh.html");

    if(!html.good()){
	
	std::cerr << "Can't open mesh.html to write. " << std::endl;
    }



}
