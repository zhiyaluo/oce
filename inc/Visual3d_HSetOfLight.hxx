// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Visual3d_HSetOfLight_HeaderFile
#define _Visual3d_HSetOfLight_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Visual3d_HSetOfLight_HeaderFile
#include <Handle_Visual3d_HSetOfLight.hxx>
#endif

#ifndef _Visual3d_SetOfLight_HeaderFile
#include <Visual3d_SetOfLight.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_Visual3d_Light_HeaderFile
#include <Handle_Visual3d_Light.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Visual3d_Light;
class Visual3d_SetOfLight;



class Visual3d_HSetOfLight : public MMgt_TShared {

public:

  
  Standard_EXPORT   Visual3d_HSetOfLight();
  
        Standard_Integer Extent() const;
  
        Standard_Boolean IsEmpty() const;
  
        void Clear() ;
  
        Standard_Boolean Add(const Handle(Visual3d_Light)& T) ;
  
        Standard_Boolean Remove(const Handle(Visual3d_Light)& T) ;
  
  Standard_EXPORT     Handle_Visual3d_HSetOfLight Union(const Handle(Visual3d_HSetOfLight)& B) const;
  
  Standard_EXPORT     Handle_Visual3d_HSetOfLight Intersection(const Handle(Visual3d_HSetOfLight)& B) const;
  
  Standard_EXPORT     Handle_Visual3d_HSetOfLight Difference(const Handle(Visual3d_HSetOfLight)& B) const;
  
        Standard_Boolean Contains(const Handle(Visual3d_Light)& T) const;
  
        Standard_Boolean IsASubset(const Handle(Visual3d_HSetOfLight)& S) const;
  
        Standard_Boolean IsAProperSubset(const Handle(Visual3d_HSetOfLight)& S) const;
  
  Standard_EXPORT     Handle_Visual3d_HSetOfLight ShallowCopy() const;
  
       const Visual3d_SetOfLight& Set() const;
  
        Visual3d_SetOfLight& ChangeSet() ;




  DEFINE_STANDARD_RTTI(Visual3d_HSetOfLight)

protected:




private: 


Visual3d_SetOfLight mySet;


};

#define Item Handle_Visual3d_Light
#define Item_hxx <Visual3d_Light.hxx>
#define TheSet Visual3d_SetOfLight
#define TheSet_hxx <Visual3d_SetOfLight.hxx>
#define TCollection_HSet Visual3d_HSetOfLight
#define TCollection_HSet_hxx <Visual3d_HSetOfLight.hxx>
#define Handle_TCollection_HSet Handle_Visual3d_HSetOfLight
#define TCollection_HSet_Type_() Visual3d_HSetOfLight_Type_()

#include <TCollection_HSet.lxx>

#undef Item
#undef Item_hxx
#undef TheSet
#undef TheSet_hxx
#undef TCollection_HSet
#undef TCollection_HSet_hxx
#undef Handle_TCollection_HSet
#undef TCollection_HSet_Type_


// other Inline functions and methods (like "C++: function call" methods)
inline Handle_Visual3d_HSetOfLight ShallowCopy(const Handle_Visual3d_HSetOfLight& me) {
 return me->ShallowCopy();
}



#endif