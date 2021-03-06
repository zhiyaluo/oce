// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepVisual_PresentationStyleAssignment_HeaderFile
#define _StepVisual_PresentationStyleAssignment_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepVisual_PresentationStyleAssignment.hxx>

#include <Handle_StepVisual_HArray1OfPresentationStyleSelect.hxx>
#include <MMgt_TShared.hxx>
#include <Standard_Integer.hxx>
class StepVisual_HArray1OfPresentationStyleSelect;
class StepVisual_PresentationStyleSelect;



class StepVisual_PresentationStyleAssignment : public MMgt_TShared
{

public:

  
  //! Returns a PresentationStyleAssignment
  Standard_EXPORT StepVisual_PresentationStyleAssignment();
  
  Standard_EXPORT virtual   void Init (const Handle(StepVisual_HArray1OfPresentationStyleSelect)& aStyles) ;
  
  Standard_EXPORT   void SetStyles (const Handle(StepVisual_HArray1OfPresentationStyleSelect)& aStyles) ;
  
  Standard_EXPORT   Handle(StepVisual_HArray1OfPresentationStyleSelect) Styles()  const;
  
  Standard_EXPORT   StepVisual_PresentationStyleSelect StylesValue (const Standard_Integer num)  const;
  
  Standard_EXPORT   Standard_Integer NbStyles()  const;




  DEFINE_STANDARD_RTTI(StepVisual_PresentationStyleAssignment)

protected:




private: 


  Handle(StepVisual_HArray1OfPresentationStyleSelect) styles;


};







#endif // _StepVisual_PresentationStyleAssignment_HeaderFile
