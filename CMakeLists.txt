project(mds_lock)
AUX_SOURCE_DIRECTORY(./src SRCS)
add_executable(mds_lock   ${SRCS})
target_link_libraries(mds_lock nanomsg)
