#include "Fraction.h"
#include<iostream>
using namespace std;
Fraction :: Fraction() {
}
Fraction:: Fraction(int mricx, int mnish, int mricx2, int mnish2){
	this->mricx = mricx;
	this->mnish = mnish;
	this->mricx2 = mricx2;
	this->mnish2 = mnish2;
}
void Fraction :: Addition() {
	cout << ((mricx * mnish2) + (mricx2 * mnish)) << " / " << mnish * mnish2 << " ------- --------  ";
	for (int i = (mricx * mnish2) + (mricx2 * mnish); i >= 0; i--) {
		if (((mricx * mnish2) + (mricx2 * mnish)) % i == 0 && (mnish * mnish2) % i == 0) {
			cout << ((mricx * mnish2) + (mricx2 * mnish))/i << " / " << (mnish * mnish2)/i << endl;
			break;
		}
	}
	cout << endl;
}
void Fraction :: Subtraction() {
	cout << ((mricx * mnish2) - (mricx2 * mnish)) << " / " << mnish * mnish2 <<" ------ -------  ";
	for (int i = (mricx * mnish2) - (mricx2 * mnish); i >= 0; i--) {
		if (((mricx * mnish2) - (mricx2 * mnish)) % i == 0 && (mnish * mnish2) % i == 0) {
			cout << ((mricx * mnish2) - (mricx2 * mnish)) / i << " / " << (mnish * mnish2) / i << endl;
			break;
		}
	}
	cout << endl << endl;;
}
void Fraction :: Multiplication() {
	cout << (mricx * mricx2) << " / " << (mnish * mnish2) << " ----- -------  ";
	for (int i = (mricx * mricx2); i >= 0; i--) {
		if ((mricx * mricx2) % i == 0 && (mnish * mnish2) % i == 0) {
			cout << (mricx * mricx2) / i << " / " << (mnish * mnish2) / i << endl;
			break;
		}
	}
	cout << endl;
}
void Fraction :: Division() {
	cout << (mricx * mnish2) << " / " << (mricx2 * mnish) << " ----- -------  ";
	for (int i = (mricx * mnish2); i >= 0; i--) {
		if ((mricx * mnish2) % i == 0 && (mricx2 * mnish) % i == 0) {
			cout << (mricx * mnish2) / i << " / " << (mricx2 * mnish) / i << endl;
			break;
		}
	}
	cout << endl;
}