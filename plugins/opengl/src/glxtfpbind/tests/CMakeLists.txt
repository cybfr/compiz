add_executable (compiz_test_opengl_glx_tfp_bind
                ${CMAKE_CURRENT_SOURCE_DIR}/test-opengl-glx-tfp-bind.cpp)

target_link_libraries (compiz_test_opengl_glx_tfp_bind
                       compiz_opengl_glx_tfp_bind
                       ${GTEST_BOTH_LIBRARIES}
		       ${GMOCK_LIBRARY}
		       ${GMOCK_MAIN_LIBRARY})

compiz_discover_tests (compiz_test_opengl_glx_tfp_bind COVERAGE compiz_opengl_glx_tfp_bind)
