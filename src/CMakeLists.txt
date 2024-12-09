add_compile_definitions(DX_GCC_COMPILE DX_NON_INLINE_ASM)
add_executable(main main.cpp game.cpp dxlib_glue_code.cpp)
target_compile_options(main PRIVATE ${CFLAGS} ${WINDOWS_FLAGS})
target_include_directories(main PRIVATE  ${DXLIB_DIR} ${SOL_DIR} ${LUA_DIR}/src)
target_link_directories(main PRIVATE ${DXLIB_DIR} ${LUA_DIR}/lib)
target_link_libraries(main PRIVATE lua DxLib DxUseCLib  DxDrawFunc  jpeg  png  zlib  tiff  theora_static  vorbis_static  vorbisfile_static  ogg_static  bulletdynamics  bulletcollision  bulletmath  opusfile  opus  silk_common  celt)

