/*****************************************************************************
 * Project: RooFit                                                           *
 *                                                                           *
 * This code was autogenerated by RooClassFactory                            *
 *****************************************************************************/

#ifndef RooGausDExp_hpp
#define RooGausDExp_hpp

#include "RooAbsPdf.h"
#include "RooRealProxy.h"
#include "RooCategoryProxy.h"
#include "RooAbsReal.h"

#define _AN_INT_

using namespace RooFit;

class RooGausDExp : public RooAbsPdf {
public:
  RooGausDExp() {} ;
  RooGausDExp(const char *name, const char *title,
             RooAbsReal& _x,
             RooAbsReal& _mu,
             RooAbsReal& _sig,
             RooAbsReal& _tau0,
             RooAbsReal& _tau1);
  RooGausDExp(const RooGausDExp& other, const char* name=0) ;
  virtual TObject* clone(const char* newname) const { return new RooGausDExp(*this,newname); }
#ifdef _AN_INT_
  virtual Int_t getAnalyticalIntegral(RooArgSet& allVars, RooArgSet& analVars, const char* rangeName=0) const;
  virtual Double_t analyticalIntegral(Int_t code,const char* rangeName=0) const;
#endif
  inline virtual ~RooGausDExp() { }
  
protected:
  double IntExp(double x,double tau) const;
  double IntGaus(double x) const;
  
  RooRealProxy x ;
  RooRealProxy mu ;
  RooRealProxy sig ;
  RooRealProxy tau0 ;
  RooRealProxy tau1 ;
  
  Double_t evaluate() const ;
  
private:
  
  ClassDef(RooGausDExp,1) // Your description goes here...
};

#endif /* RooDSCB_hpp */
