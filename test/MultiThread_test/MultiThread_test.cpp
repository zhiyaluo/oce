#include <TopoDS_Shape.hxx>
#include <BRepTools.hxx>
#include <BRep_Builder.hxx>
#include <BRepMesh_IncrementalMesh.hxx>

#include <gtest/gtest.h>

#include "MultiThread_test_config.h"

TEST(MultiThreadTestSuite, testMeshCylinderHeadSingleThread)
{
    Standard_CString aFileName = (Standard_CString) brep_file_1;
    BRep_Builder aBuilder;
    TopoDS_Shape aShape;
	Standard_Boolean result = BRepTools::Read(aShape,aFileName,aBuilder);
    ASSERT_TRUE(result);
    ASSERT_FALSE(aShape.IsNull());
    BRepMesh_IncrementalMesh m(aShape, 1E-3, true);
    m.SetParallel(false);
    m.Perform();
    ASSERT_TRUE(m.IsDone());
}

TEST(MultiThreadTestSuite, testMeshCylinderHeadMultiThread)
{
    Standard_CString aFileName = (Standard_CString) brep_file_1;
    BRep_Builder aBuilder;
    TopoDS_Shape aShape;
    Standard_Boolean result = BRepTools::Read(aShape,aFileName,aBuilder);
    ASSERT_TRUE(result);
    ASSERT_FALSE(aShape.IsNull());
    BRepMesh_IncrementalMesh m(aShape, 1E-3, true);
    m.SetParallel(true);
    m.Perform();
    ASSERT_TRUE(m.IsDone());
}

TEST(MultiThreadTestSuite, testMeshF1SingleThread)
{
    Standard_CString aFileName = (Standard_CString) brep_file_2;
    BRep_Builder aBuilder;
    TopoDS_Shape aShape;
    Standard_Boolean result = BRepTools::Read(aShape,aFileName,aBuilder);
    ASSERT_TRUE(result);
    ASSERT_FALSE(aShape.IsNull());
    BRepMesh_IncrementalMesh m(aShape, 1E-3, true);
    m.SetParallel(false);
    m.Perform();
    ASSERT_TRUE(m.IsDone());
}

TEST(MultiThreadTestSuite, testMeshF1MultiThread)
{
    Standard_CString aFileName = (Standard_CString) brep_file_2;
    BRep_Builder aBuilder;
    TopoDS_Shape aShape;
    Standard_Boolean result = BRepTools::Read(aShape,aFileName,aBuilder);
    ASSERT_TRUE(result);
    ASSERT_FALSE(aShape.IsNull());
    BRepMesh_IncrementalMesh m(aShape, 1E-3, true);
    m.Perform();
    ASSERT_TRUE(m.IsDone());
}


int main(int argc, char **argv){
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
