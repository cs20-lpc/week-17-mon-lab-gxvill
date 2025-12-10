#include "GraphMatrix.hpp"

GraphMatrix::GraphMatrix(int numV, GType type) {
    // TODO
	adjMatrix = new bool*[numV];
	for(int i = 0; i < numV; i++){
		adjMatrix[i] = new bool[numV];
	}
	graphType = type;
	v = numV;
}

GraphMatrix::~GraphMatrix() {
    // TODO
	for(int i = 0; i < v; i ++){
		delete[] adjMatrix[i];
	}
	
}

bool GraphMatrix::isEdge(int i, int j) const {
    // TODO
	return adjMatrix[i][j];
}

ostream& GraphMatrix::print(ostream& os) const {
    os << "    ";
    for (int i = 0; i < v; i++) {
        os << i << ' ';
    }
    os << endl;

    os << "---";
    for (int i = 0; i < v; i++) {
        os << "--";
    }
    os << endl;

    for (int i = 0; i < v; i++) {
        os << i << " | ";
        for (int j = 0; j < v; j++) {
            os << adjMatrix[i][j] << ' ';
        }
        os << endl;
    }

    return os;
}

void GraphMatrix::toggleEdge(int i, int j) {
    // TODO
	(adjMatrix[i][j]) ? e-- : e++;
	adjMatrix[i][j] = !adjMatrix[i][j];
}
