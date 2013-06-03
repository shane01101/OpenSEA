#ifndef REACTICEFORCEMATRIX_H
#define REACTICEFORCEMATRIX_H
#include <complex>
#include "armadillo"
#include "forcederivative.h"

using namespace arma;
using namespace std;
//const int MAX_ORDER_DERIVATIVE = 3;

typedef complex<double> complexDouble;

/**
 * This class holds data for reactive force matrix whch includes force coefficients.
 */

class ReactiveForceMatrix
{
public:
	ReactiveForceMatrix(); /**< The default constructor. */

	/**
	 * The constructor, converts input coefficients to force coefficients.
	 * @param forceListIn The list of forces.
	 */
	ReactiveForceMatrix(vector<Derivative>);
	~ReactiveForceMatrix(); /**< The default destructor, nothing happens here. */
	vector<cx_mat> derivativeMatrix;/**< Derivative matrix in force coefficient form. */
	int getSize();/**< Return the size of the max derivative. */
};
#endif