# -----------------------------------------------------------------------
# all "packages" do these two things - sort-of boilerplate:
#   1) add sources
#   2) include the pkg directory

target_sources(otherlib
    PRIVATE
        otherlib.c
        otherlib.h
)
target_include_directories(otherlib PRIVATE ${CMAKE_CURRENT_LIST_DIR}/..)

# -----------------------------------------------------------------------

# since pkg/CMakeLists creates all the libraries before adding subdirectories, we can link against other libraries
target_link_libraries(otherlib PUBLIC binutils)
