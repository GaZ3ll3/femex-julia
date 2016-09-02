#include "Mesh.h"

int main() {

	double a[6] = {0., 0., 1., 0., 1., 1.};
	double b[6] = {0., 0., 1., 0., 1., 1.};
	int  n = 3;
	int  m = 3;
	double area = 0.0001;
	Mesh mesh(a, n, b,m, area);
	mesh.Info();
}
