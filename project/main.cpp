#include <iostream>
#include <vector>
#include "readFromFile.h"
#include "vertex.h"
#include "edge.h"
#include "listnode.h"


int main() {
	std::cout << "airport:" << std::endl;
	std::vector<Vertex> vectorRepr = read_airport("airport_sample.dat");
	for (auto word : vectorRepr) {
		std::cout << word.city + " " <<to_string(word.id) + " "<<to_string(word.lat)+ " "<< to_string(word.longt)+ " "<< std::endl;	
	}
	std::cout << "route" << std::endl;
	std::vector<Edge> v = read_route("route_sample.dat");
	for (auto word : v) {
		std::cout <<to_string(word.id) + " " <<to_string(word.source)+ " "<< to_string(word.dest) + " "<< std::endl;
	}	

	//test output image
	PNG png;
	png.readFromFile("world_map.png");
	Edge image(1,2,3);
	// Vertex v1 = new Vertex(111, 20, 20, "champaign", 418); //id, lat, long, city, ITAT code
	// Vertex v2 = new Vertex(112, 30, 30, "urbana", 614) // id, lat, long, city, ITAT code
	// image.drawAirline(png, 111,112 );
	// png.writeToFile("output_image_test.png");

}
