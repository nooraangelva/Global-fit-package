/*****************************************************************************
 * Project: RooFit                                                           *
 *                                                                           *
  * This code was autogenerated by RooClassFactory                            * 
 *****************************************************************************/

#ifndef EXPGAUSSEXP
#define EXPGAUSSEXP

#include "RooAbsPdf.h"
#include "RooRealProxy.h"
#include "RooCategoryProxy.h"
#include "RooAbsReal.h"
#include "RooAbsCategory.h"
 
class ExpGaussExp : public RooAbsPdf {
public:
  ExpGaussExp() {} ; 
  ExpGaussExp(const char *name, const char *title,
	      RooAbsReal& _x,
	      RooAbsReal& _mean,
	      RooAbsReal& _sigma,
	      RooAbsReal& _k_L,
	      RooAbsReal& _k_H);
  ExpGaussExp(const ExpGaussExp& other, const char* name=0) ;
  virtual TObject* clone(const char* newname) const { return new ExpGaussExp(*this,newname); }
  inline virtual ~ExpGaussExp() { }

protected:

  RooRealProxy x ;
  RooRealProxy mean ;
  RooRealProxy sigma ;
  RooRealProxy k_L ;
  RooRealProxy k_H ;
  
  Double_t evaluate() const ;

private:

  ClassDef(ExpGaussExp,1) // Your description goes here...
};
 
#endif