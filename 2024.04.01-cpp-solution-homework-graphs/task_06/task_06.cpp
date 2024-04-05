#include <iostream>

class CGraph
{
private:
	int _vertexes;
	int _edges;
	int** _matrix;
public:
	CGraph()
		: _vertexes(0), _edges(0), _matrix(nullptr) {}

	CGraph(int vertexes, int edges = 0)
		: _vertexes(vertexes), _edges(edges), _matrix(nullptr)
	{
		initMatrix();
	}
	~CGraph()
	{
		delete[] _matrix;
		delete[] DegVertex();
	}
	void setVertexes(int vertexes) { _vertexes = vertexes; }
	int getVertexes() { return _vertexes; }

	void setEdges(int edges) { _edges = edges; }
	int getEdges() { return _edges; }

	void initMatrix()
	{
		if (_vertexes == 0)
		{
			return;
		}
		_matrix = new int* [_vertexes];
		for (int i = 0; i < _vertexes; ++i)
		{
			_matrix[i] = new int[_vertexes] { 0 };
		}
	}

	void MakeMatrix()
	{
		for (int i = 0; i < _vertexes - 1; ++i)
		{
			int str = 0;
			int stlb = 0;
			std::cin >> str;
			std::cin >> stlb;
			_matrix[str - 1][stlb - 1] = 1;
			_matrix[stlb - 1][str - 1] = 1;
		}
	}

	void PrintMatrix()
	{
		if (_matrix == nullptr)
		{
			if (_vertexes == 0)
			{
				std::cout << "Graph empty" << std::endl;
			}
		}
		for (int i = 0; i < _vertexes; ++i)
		{
			for (int j = 0; j < _vertexes; ++j)
			{
				std::cout << _matrix[i][j] << " ";
			}
			std::cout << std::endl;
		}
	}

	int* DegVertex()
	{
		int* degVertex = new int [_vertexes] {0};
		for (int i = 0; i < _vertexes; ++i)
		{
			int deg = 0;
			for (int j = 0; j < _vertexes; ++j)
			{
				if (_matrix[i][j] == 1)
				{
					deg++;
				}
			}
			degVertex[i] = deg;
		}
		return degVertex;
	}

	int CountKeyVertexes()
	{
		int CountKeyVertexes = 0;
		for (int i = 0; i < _vertexes; ++i)
		{
			if (DegVertex()[i] > 1)
			{
				CountKeyVertexes++;
			}
		}
		return CountKeyVertexes;
	}

};

int main(int argc, char* argv[])
{
	int vertexes = 0;
	std::cin >> vertexes;

	CGraph graph(vertexes);
	graph.MakeMatrix();
	std::cout << graph.CountKeyVertexes();

	return EXIT_SUCCESS;
}