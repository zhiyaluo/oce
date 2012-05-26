// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_SecurityClassificationLevel_HeaderFile
#define _StepBasic_SecurityClassificationLevel_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepBasic_SecurityClassificationLevel_HeaderFile
#include <Handle_StepBasic_SecurityClassificationLevel.hxx>
#endif

#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
class TCollection_HAsciiString;



class StepBasic_SecurityClassificationLevel : public MMgt_TShared {

public:

  //! Returns a SecurityClassificationLevel <br>
  Standard_EXPORT   StepBasic_SecurityClassificationLevel();
  
  Standard_EXPORT   virtual  void Init(const Handle(TCollection_HAsciiString)& aName) ;
  
  Standard_EXPORT     void SetName(const Handle(TCollection_HAsciiString)& aName) ;
  
  Standard_EXPORT     Handle_TCollection_HAsciiString Name() const;




  DEFINE_STANDARD_RTTI(StepBasic_SecurityClassificationLevel)

protected:




private: 


Handle_TCollection_HAsciiString name;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif