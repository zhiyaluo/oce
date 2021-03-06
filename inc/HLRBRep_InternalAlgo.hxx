// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRBRep_InternalAlgo_HeaderFile
#define _HLRBRep_InternalAlgo_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_HLRBRep_InternalAlgo.hxx>

#include <Handle_HLRBRep_Data.hxx>
#include <HLRAlgo_Projector.hxx>
#include <HLRBRep_SeqOfShapeBounds.hxx>
#include <BRepTopAdaptor_MapOfShapeTool.hxx>
#include <Standard_Boolean.hxx>
#include <MMgt_TShared.hxx>
#include <Handle_HLRTopoBRep_OutLiner.hxx>
#include <Handle_MMgt_TShared.hxx>
#include <Standard_Integer.hxx>
class HLRBRep_Data;
class Standard_OutOfRange;
class HLRAlgo_Projector;
class HLRTopoBRep_OutLiner;
class MMgt_TShared;
class HLRBRep_SeqOfShapeBounds;
class HLRBRep_ShapeBounds;



class HLRBRep_InternalAlgo : public MMgt_TShared
{

public:

  
  Standard_EXPORT HLRBRep_InternalAlgo();
  
  Standard_EXPORT HLRBRep_InternalAlgo(const Handle(HLRBRep_InternalAlgo)& A);
  
  //! set the projector.
  Standard_EXPORT   void Projector (const HLRAlgo_Projector& P) ;
  
  //! set the projector.
  Standard_EXPORT   HLRAlgo_Projector& Projector() ;
  
  //! update the DataStructure.
  Standard_EXPORT   void Update() ;
  
  //! add the shape <S>.
  Standard_EXPORT   void Load (const Handle(HLRTopoBRep_OutLiner)& S, const Handle(MMgt_TShared)& SData, const Standard_Integer nbIso = 0) ;
  
  //! add the shape <S>.
  Standard_EXPORT   void Load (const Handle(HLRTopoBRep_OutLiner)& S, const Standard_Integer nbIso = 0) ;
  
  //! return the index of the Shape <S> and  return 0 if
  //! the Shape <S> is not found.
  Standard_EXPORT   Standard_Integer Index (const Handle(HLRTopoBRep_OutLiner)& S)  const;
  
  //! remove the Shape of Index <I>.
  Standard_EXPORT   void Remove (const Standard_Integer I) ;
  
  //! Change the Shape Data of the Shape of index <I>.
  Standard_EXPORT   void ShapeData (const Standard_Integer I, const Handle(MMgt_TShared)& SData) ;
  
  Standard_EXPORT   HLRBRep_SeqOfShapeBounds& SeqOfShapeBounds() ;
  
  Standard_EXPORT   Standard_Integer NbShapes()  const;
  
  Standard_EXPORT   HLRBRep_ShapeBounds& ShapeBounds (const Standard_Integer I) ;
  
  //! init the status of the selected edges depending of
  //! the back faces of a closed shell.
  Standard_EXPORT   void InitEdgeStatus() ;
  
  //! select all the DataStructure.
  Standard_EXPORT   void Select() ;
  
  //! select  only   the Shape of index <I>.
  Standard_EXPORT   void Select (const Standard_Integer I) ;
  
  //! select only the edges of the Shape <S>.
  Standard_EXPORT   void SelectEdge (const Standard_Integer I) ;
  
  //! select only the faces of the Shape <S>.
  Standard_EXPORT   void SelectFace (const Standard_Integer I) ;
  
  //! set to visible all the edges.
  Standard_EXPORT   void ShowAll() ;
  
  //! set to visible all the edges of the Shape <S>.
  Standard_EXPORT   void ShowAll (const Standard_Integer I) ;
  
  //! set to hide all the edges.
  Standard_EXPORT   void HideAll() ;
  
  //! set to  hide all the  edges of the  Shape <S>.
  Standard_EXPORT   void HideAll (const Standard_Integer I) ;
  
  //! own hiding  of all the shapes of the DataStructure
  //! without hiding by each other.
  Standard_EXPORT   void PartialHide() ;
  
  //! hide all the DataStructure.
  Standard_EXPORT   void Hide() ;
  
  //! hide the Shape <S> by itself.
  Standard_EXPORT   void Hide (const Standard_Integer I) ;
  
  //! hide the Shape <S1> by the shape <S2>.
  Standard_EXPORT   void Hide (const Standard_Integer I, const Standard_Integer J) ;
  
  Standard_EXPORT   void Debug (const Standard_Boolean deb) ;
  
  Standard_EXPORT   Standard_Boolean Debug()  const;
  
  Standard_EXPORT   Handle(HLRBRep_Data) DataStructure()  const;




  DEFINE_STANDARD_RTTI(HLRBRep_InternalAlgo)

protected:




private: 

  
  //! first if <SideFace> own hiding  of the side faces.
  //! After hiding  of    the  selected  parts  of   the
  //! DataStructure.
  Standard_EXPORT   void HideSelected (const Standard_Integer I, const Standard_Boolean SideFace) ;

  Handle(HLRBRep_Data) myDS;
  HLRAlgo_Projector myProj;
  HLRBRep_SeqOfShapeBounds myShapes;
  BRepTopAdaptor_MapOfShapeTool myMapOfShapeTool;
  Standard_Boolean myDebug;


};







#endif // _HLRBRep_InternalAlgo_HeaderFile
