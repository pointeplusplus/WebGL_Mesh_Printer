
//#include <cstdio>
#include <iostream>
#include <fstream>
#include <vector>

void print_mesh(/*Mesh mesh,*/ std::string file_name);
std::ofstream& print_opening_html(std::ofstream& html);
std::ofstream& print_closing_html(std::ofstream& html);

int main(int argc, char* argv[]){

	print_mesh("mesh.html");

    return 0;
    
}

void print_mesh(/*Mesh mesh,*/ std::string file_name){
	std::ofstream html(file_name.c_str());
    if(!html.good()){
		std::cerr << "Can't open " << file_name << " to write. " << std::endl;
    }

    print_opening_html(html);
    print_closing_html(html);
}

std::ofstream& print_opening_html(std::ofstream& html){
    
    html << "<!-- 00<!DOCTYPE html> -->" << std::endl 
			<< "<html lang=\"en\">" << std::endl
			<< "	<head>" << std::endl 
			<< "		<title>Homework 9 -- Mesh</title>" << std::endl 
			<< "		<meta charset=\"utf-8\">" << std::endl
			<< "		<meta name=\"viewport\" content=\"width=device-width, user-scalable=no, minimum-scale=1.0, maximum-scale=1.0\">" << std::endl
			<< "		<style>" << std::endl
			<< "			body {" << std::endl
			<< "				font-family: Monospace;" << std::endl
			<< "				background-color: #f0f0f0;" << std::endl
			<< "				margin: 0px;" << std::endl
			<< "				overflow: hidden;" << std::endl
			<< "			}" << std::endl
			<< "		</style>" << std::endl
			<< "	</head>" << std::endl
			<< "	<body>" <<std::endl
			<< "		<script src=\"../build/three.min.js\"></script>" << std::endl
			<< "		<script src=\"../js/libs/stats.min.js\"></script>" << std::endl
			<< "		<script src=\"../js/THREEx.KeyboardState.js\"></script>" << std::endl
			<< "		<script>" <<std::endl;
	
	return html;
}

std::ofstream& print_closing_html(std::ofstream& html){
	html << "		</script>" << std::endl
			<< "	</body>" << std::endl
			<< "</html>" <<std::endl;

	return html;
}
