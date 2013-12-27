if (OCE_DATAEXCHANGE)
	set(brep_file_1 ${CMAKE_SOURCE_DIR}/test/data/brep/15_cylinder_head.brep)
	set(brep_file_2 ${CMAKE_SOURCE_DIR}/test/data/brep/18_F1.brep)
	
	configure_file( ${CMAKE_CURRENT_SOURCE_DIR}/MultiThread_test_config.h.cmake ${CMAKE_BINARY_DIR}/test_inc/MultiThread_test_config.h )
	include_directories(${CMAKE_BINARY_DIR}/test_inc)

	add_oce_test(MultiThread_test "TKernel;TKSTEP;TKBRep;TKMath;TKTopAlgo;TKPrim;TKMesh")
endif (OCE_DATAEXCHANGE)
