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

	CGraph(int vertexes)
		: _vertexes(vertexes), _edges(0)
	{
		initMatrix();
	}
	~CGraph()
	{
		delete[] _matrix;
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

	void readMatrix()
	{
		for (int i = 0; i < _vertexes; ++i)
		{
			for (int j = 0; j < _vertexes; ++j)
			{
				std::cin >> _matrix[i][j];
			}
		}
	}

	void printMatrix()
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

	int Distance_3point(int num1, int num2, int num3)
	{
		return _matrix[num1][num2] + _matrix[num2][num3] + _matrix[num3][num1];
	}
	int lengthOfMarshrut()
	{
		int MinDistance = Distance_3point(0, 1, 2);
		for (int i = 0; i < _vertexes; ++i)
		{
			for (int j = i + 1; j < _vertexes; ++j)
			{
				for (int k = j + 1; k < _vertexes; ++k)
				{
					if (Distance_3point(i, j, k) <= MinDistance)
					{
						MinDistance = Distance_3point(i, j, k);
					}
				}
			}
		}
		return MinDistance;
	}
};

int main(int argc, char* argv[])
{
	int vertexes = 0;
	std::cin >> vertexes;
	CGraph graph(vertexes);
	graph.readMatrix();
	std::cout << graph.lengthOfMarshrut();

	return EXIT_SUCCESS;
}