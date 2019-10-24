# -----------------------------------------------------------------------
# all "packages" do these two things - sort-of boilerplate:
#   1) add sources
#   2) include the pkg directory

target_sources(binutils
    PRIVATE
        binutils.c
        binutils.h
)
target_include_directories(binutils PRIVATE ${CMAKE_CURRENT_LIST_DIR}/..)

# -----------------------------------------------------------------------

# This target has nothing further to do
# ...
