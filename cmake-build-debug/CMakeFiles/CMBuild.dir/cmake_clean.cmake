file(REMOVE_RECURSE
  "../build/LabVjezbe1.ino.elf"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/CMBuild.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
