// Copyright (c) 1999-2012 OPEN CASCADE SAS
//
// The content of this file is subject to the Open CASCADE Technology Public
// License Version 6.5 (the "License"). You may not use the content of this file
// except in compliance with the License. Please obtain a copy of the License
// at http://www.opencascade.org and read it completely before using this file.
//
// The Initial Developer of the Original Code is Open CASCADE S.A.S., having its
// main offices at: 1, place des Freres Montgolfier, 78280 Guyancourt, France.
//
// The Original Code and all software distributed under the License is
// distributed on an "AS IS" basis, without warranty of any kind, and the
// Initial Developer hereby disclaims all such warranties, including without
// limitation, any warranties of merchantability, fitness for a particular
// purpose or non-infringement. Please see the License for the specific terms
// and conditions governing the rights and limitations under the License.

//gka 05.03.99 S4134 upgrade from CD to DIS
#include <RWStepRepr_RWShapeAspect.ixx>
#include <StepRepr_ProductDefinitionShape.hxx>
#include <StepData_Logical.hxx>


#include <Interface_EntityIterator.hxx>


#include <StepRepr_ShapeAspect.hxx>


RWStepRepr_RWShapeAspect::RWStepRepr_RWShapeAspect () {}

void RWStepRepr_RWShapeAspect::ReadStep
	(const Handle(StepData_StepReaderData)& data,
	 const Standard_Integer num,
	 Handle(Interface_Check)& ach,
	 const Handle(StepRepr_ShapeAspect)& ent) const
{


	// --- Number of Parameter Control ---

	if (!data->CheckNbParams(num,4,ach,"shape_aspect")) return;

	// --- own field : name ---

	Handle(TCollection_HAsciiString) aName;
	//szv#4:S4163:12Mar99 `Standard_Boolean stat1 =` not needed
	data->ReadString (num,1,"name",ach,aName);

	// --- own field : description ---

	Handle(TCollection_HAsciiString) aDescription;
	if (data->IsParamDefined (num,2)) { //gka 05.03.99 S4134 upgrade from CD to DIS
	  //szv#4:S4163:12Mar99 `Standard_Boolean stat2 =` not needed
	  data->ReadString (num,2,"description",ach,aDescription);
	}
	// --- own field : ofShape ---

	Handle(StepRepr_ProductDefinitionShape) aOfShape;
	//szv#4:S4163:12Mar99 `Standard_Boolean stat3 =` not needed
	data->ReadEntity(num, 3,"of_shape", ach, STANDARD_TYPE(StepRepr_ProductDefinitionShape), aOfShape);

	// --- own field : productDefinitional ---

	StepData_Logical aProductDefinitional;
	//szv#4:S4163:12Mar99 `Standard_Boolean stat4 =` not needed
	data->ReadLogical (num,4,"product_definitional",ach,aProductDefinitional);

	//--- Initialisation of the read entity ---


	ent->Init(aName, aDescription, aOfShape, aProductDefinitional);
}


void RWStepRepr_RWShapeAspect::WriteStep
	(StepData_StepWriter& SW,
	 const Handle(StepRepr_ShapeAspect)& ent) const
{

	// --- own field : name ---

	SW.Send(ent->Name());

	// --- own field : description ---

	SW.Send(ent->Description());

	// --- own field : ofShape ---

	SW.Send(ent->OfShape());

	// --- own field : productDefinitional ---

	SW.SendLogical(ent->ProductDefinitional());
}


void RWStepRepr_RWShapeAspect::Share(const Handle(StepRepr_ShapeAspect)& ent, Interface_EntityIterator& iter) const
{

	iter.GetOneItem(ent->OfShape());
}
