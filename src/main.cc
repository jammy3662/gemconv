#include <stdio.h>

#include <vector>
#define array(type) std::vector<type>

struct asset
{
	struct Vertex
	{
		struct position {float x,y,z; } position;
		struct normal {float x,y,z; } normal;
		struct color {unsigned char r,g,b,a; } color;
		struct uv0 {float x,y; } uv0;
		struct uv1 {float x,y; } uv1;
		struct tangent {float x,y,z; } tangent;
	};

	struct Face
	{
		// 4-gon max, tris recommended
		unsigned short a, b, c, d;
	};

	struct Mesh
	{
		array (Vertex) vertices = {{}};
		array (Face) faces = {{}};
		
		int materialIdx;
	};

	struct Gem
	{
		array (Mesh) meshes = {{}};
		
	};
}
asset;

int main (int argc, char** argv)
{
		
	return 0;
}