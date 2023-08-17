project(xrRenderPC_R1)

set(CMAKE_CXX_FLAGS "-fpermissive")

set(SRC_FILES
        "../../Include/xrRender/animation_blend.h"
        "../../Include/xrRender/animation_motion.h"
        "../../Include/xrRender/DebugRender.h"
        "../../Include/xrRender/DebugShader.h"
        "../../Include/xrRender/DrawUtils.h"
        "../../Include/xrRender/EnvironmentRender.h"
        "../../Include/xrRender/FactoryPtr.h"
        "../../Include/xrRender/FontRender.h"
        "../../Include/xrRender/ImGuiRender.h"
        "../../Include/xrRender/Kinematics.h"
        "../../Include/xrRender/KinematicsAnimated.h"
        "../../Include/xrRender/LensFlareRender.h"
        "../../Include/xrRender/ObjectSpaceRender.h"
        "../../Include/xrRender/ParticleCustom.h"
        "../../Include/xrRender/RainRender.h"
        "../../Include/xrRender/RenderDetailModel.h"
        "../../Include/xrRender/RenderFactory.h"
        "../../Include/xrRender/RenderVisual.h"
        "../../Include/xrRender/StatGraphRender.h"
        "../../Include/xrRender/ThunderboltDescRender.h"
        "../../Include/xrRender/ThunderboltRender.h"
        "../../Include/xrRender/UIRender.h"
        "../../Include/xrRender/UISequenceVideoItem.h"
        "../../Include/xrRender/UIShader.h"
        "../../Include/xrRender/WallMarkArray.h"
        "../xrRenderDX9/CommonTypes.h"
        "../xrRenderDX9/dx9HW.h"
        "../xrRenderDX9/dx9R_Backend_Runtime.h"
        "../xrRenderDX9/dx9r_constants_cache.h"
        "../xrRender/Animation.h"
        "../xrRender/AnimationKeyCalculate.h"
        "../xrRender/Blender.h"
        "../xrRender/Blender_CLSID.h"
        "../xrRender/Blender_Recorder.h"
        "../xrRender/blenders/Blender_BmmD.h"
        "../xrRender/blenders/Blender_detail_still.h"
        "../xrRender/blenders/Blender_Editor_Selection.h"
        "../xrRender/blenders/Blender_Editor_Wire.h"
        "../xrRender/blenders/Blender_Lm(EbB).h"
        "../xrRender/blenders/Blender_Model_EbB.h"
        "../xrRender/blenders/Blender_Particle.h"
        "../xrRender/blenders/Blender_Screen_SET.h"
        "../xrRender/blenders/Blender_tree.h"
        "../xrRender/BufferUtils.h"
        "../xrRender/ColorMapManager.h"
        "../xrRender/D3DUtils.h"
        "../xrRender/Debug/dxPixEventWrapper.h"
        "../xrRender/DetailFormat.h"
        "../xrRender/DetailManager.h"
        "../xrRender/DetailModel.h"
        "../xrRender/du_box.h"
        "../xrRender/du_cone.h"
        "../xrRender/du_cylinder.h"
        "../xrRender/du_sphere.h"
        "../xrRender/du_sphere_part.h"
        "../xrRender/dxDebugRender.h"
        "../xrRender/dxEnvironmentRender.h"
        "../xrRender/dxFontRender.h"
        "../xrRender/dxImGuiRender.h"
        "../xrRender/dxLensFlareRender.h"
        "../xrRender/dxObjectSpaceRender.h"
        "../xrRender/dxParticleCustom.h"
        "../xrRender/dxRainRender.h"
        "../xrRender/dxRenderFactory.h"
        "../xrRender/dxStatGraphRender.h"
        "../xrRender/dxThunderboltDescRender.h"
        "../xrRender/dxThunderboltRender.h"
        "../xrRender/dxUIRender.h"
        "../xrRender/dxUISequenceVideoItem.h"
        "../xrRender/dxUIShader.h"
        "../xrRender/dxWallMarkArray.h"
        "../xrRender/ETextureParams.h"
        "../xrRender/FBasicVisual.h"
        "../xrRender/FHierrarhyVisual.h"
        "../xrRender/FLOD.h"
        "../xrRender/FProgressive.h"
        "../xrRender/FSkinned.h"
        "../xrRender/FSkinnedTypes.h"
        "../xrRender/FTreeVisual.h"
        "../xrRender/FVF.h"
        "../xrRender/FVisual.h"
        "../xrRender/HOM.h"
        "../xrRender/HWCaps.h"
        "../xrRender/IRenderDetailModel.h"
        "../xrRender/KinematicAnimatedDefs.h"
        "../xrRender/KinematicsAddBoneTransform.hpp"
        "../xrRender/light.h"
        "../xrRender/LightTrack.h"
        "../xrRender/Light_DB.h"
        "../xrRender/Light_Package.h"
        "../xrRender/ModelPool.h"
        "../xrRender/NvTriStrip.h"
        "../xrRender/NvTriStripObjects.h"
        "../xrRender/occRasterizer.h"
        "../xrRender/ParticleEffect.h"
        "../xrRender/ParticleEffectDef.h"
        "../xrRender/ParticleGroup.h"
        "../xrRender/PSLibrary.h"
        "../xrRender/ResourceManager.h"
        "../xrRender/R_Backend.h"
        "../xrRender/R_Backend_hemi.h"
        "../xrRender/R_Backend_Runtime.h"
        "../xrRender/R_Backend_tree.h"
        "../xrRender/R_Backend_xform.h"
        "../xrRender/r_constants.h"
        "../xrRender/r_constants_cache.h"
        "../xrRender/R_DStreams.h"
        "../xrRender/D3DXRenderBase.h"
        "../xrRender/r__dsgraph_structure.h"
        "../xrRender/r__dsgraph_types.h"
        "../xrRender/r__sector.h"
        "../xrRender/Shader.h"
        "../xrRender/ShaderResourceTraits.h"
        "../xrRender/SH_Atomic.h"
        "../xrRender/SH_Constant.h"
        "../xrRender/SH_Matrix.h"
        "../xrRender/SH_RT.h"
        "../xrRender/SH_Texture.h"
        "../xrRender/SkeletonAnimated.h"
        "../xrRender/SkeletonCustom.h"
        "../xrRender/SkeletonX.h"
        "../xrRender/SkeletonXSkinXW.h"
        "../xrRender/SkeletonXVertRender.h"
        "../xrRender/stats_manager.h"
        "../xrRender/TextureDescrManager.h"
        "../xrRender/tss.h"
        "../xrRender/tss_def.h"
        "../xrRender/VertexCache.h"
        "../xrRender/WallmarksEngine.h"
        "../xrRender/xrRender_console.h"
        "../xrRender/xrStripify.h"
        "../xrRender/xr_effgamma.h"
        "../xrRender/blenders/BlenderDefault.h"
        "../xrRender/blenders/Blender_Blur.h"
        "../xrRender/blenders/Blender_default_aref.h"
        "../xrRender/blenders/Blender_LaEmB.h"
        "../xrRender/blenders/Blender_Model.h"
        "../xrRender/blenders/Blender_Screen_GRAY.h"
        "../xrRender/blenders/Blender_Shadow_World.h"
        "../xrRender/blenders/Blender_Vertex.h"
        "../xrRender/blenders/Blender_Vertex_aref.h"

        "../xrRenderDX9/BufferUtils.cpp"
        "../xrRenderDX9/dx9HW.cpp"
        "../xrRenderDX9/dx9HWCaps.cpp"
        "../xrRenderDX9/dx9ResourceManager_Resources.cpp"
        "../xrRenderDX9/dx9r_constants_cache.cpp"
        "../xrRenderDX9/dx9SH_RT.cpp"
        "../xrRender/Animation.cpp"
        "../xrRender/Blender.cpp"
        "../xrRender/Blender_Recorder.cpp"
        "../xrRender/blenders/Blender_BmmD.cpp"
        "../xrRender/blenders/Blender_detail_still.cpp"
        "../xrRender/blenders/Blender_Editor_Selection.cpp"
        "../xrRender/blenders/Blender_Editor_Wire.cpp"
        "../xrRender/blenders/Blender_Lm(EbB).cpp"
        "../xrRender/blenders/Blender_Model_EbB.cpp"
        "../xrRender/blenders/Blender_Particle.cpp"
        "../xrRender/Blender_Recorder_R2.cpp"
        "../xrRender/Blender_Recorder_StandartBinding.cpp"
        "../xrRender/blenders/Blender_Screen_SET.cpp"
        "../xrRender/blenders/Blender_tree.cpp"
        "../xrRender/ColorMapManager.cpp"
        "../xrRender/D3DUtils.cpp"
        "../xrRender/D3DXRenderBase.cpp"
        "../xrRender/DetailManager.cpp"
        "../xrRender/DetailManager_CACHE.cpp"
        "../xrRender/DetailManager_Decompress.cpp"
        "../xrRender/DetailManager_soft.cpp"
        "../xrRender/DetailManager_VS.cpp"
        "../xrRender/DetailModel.cpp"
        "../xrRender/du_box.cpp"
        "../xrRender/du_cone.cpp"
        "../xrRender/du_cylinder.cpp"
        "../xrRender/du_sphere.cpp"
        "../xrRender/du_sphere_part.cpp"
        "../xrRender/dxDebugRender.cpp"
        "../xrRender/dxEnvironmentRender.cpp"
        "../xrRender/dxFontRender.cpp"
        "../xrRender/dxImGuiRender.cpp"
        "../xrRender/dxLensFlareRender.cpp"
        "../xrRender/dxObjectSpaceRender.cpp"
        "../xrRender/dxParticleCustom.cpp"
        "../xrRender/dxRainRender.cpp"
        "../xrRender/dxRenderFactory.cpp"
        "../xrRender/dxStatGraphRender.cpp"
        "../xrRender/dxThunderboltDescRender.cpp"
        "../xrRender/dxThunderboltRender.cpp"
        "../xrRender/dxUIRender.cpp"
        "../xrRender/dxUISequenceVideoItem.cpp"
        "../xrRender/dxUIShader.cpp"
        "../xrRender/dxWallMarkArray.cpp"
        "../xrRender/ETextureParams.cpp"
        "../xrRender/FBasicVisual.cpp"
        "../xrRender/FHierrarhyVisual.cpp"
        "../xrRender/FLOD.cpp"
        "../xrRender/FProgressive.cpp"
        "../xrRender/FSkinned.cpp"
        "../xrRender/FTreeVisual.cpp"
        "../xrRender/FVisual.cpp"
        "../xrRender/HOM.cpp"
        "../xrRender/light.cpp"
        "../xrRender/LightTrack.cpp"
        "../xrRender/Light_DB.cpp"
        "../xrRender/Light_Package.cpp"
        "../xrRender/ModelPool.cpp"
        "../xrRender/NvTriStrip.cpp"
        "../xrRender/NvTriStripObjects.cpp"
        "../xrRender/occRasterizer.cpp"
        "../xrRender/occRasterizer_core.cpp"
        "../xrRender/ParticleEffect.cpp"
        "../xrRender/ParticleEffectDef.cpp"
        "../xrRender/ParticleGroup.cpp"
        "../xrRender/PSLibrary.cpp"
        "../xrRender/ResourceManager.cpp"
        "../xrRender/ResourceManager_Loader.cpp"
        "../xrRender/ResourceManager_Reset.cpp"
        "../xrRender/ResourceManager_Resources.cpp"
        "../xrRender/ResourceManager_Scripting.cpp"
        "../xrRender/R_Backend.cpp"
        "../xrRender/R_Backend_DBG.cpp"
        "../xrRender/R_Backend_hemi.cpp"
        "../xrRender/R_Backend_Runtime.cpp"
        "../xrRender/R_Backend_tree.cpp"
        "../xrRender/R_Backend_xform.cpp"
        "../xrRender/r_constants.cpp"
        "../xrRender/R_DStreams.cpp"
        "../xrRender/r__dsgraph_build.cpp"
        "../xrRender/r__dsgraph_render.cpp"
        "../xrRender/r__dsgraph_render_lods.cpp"
        "../xrRender/r__screenshot.cpp"
        "../xrRender/r__sector.cpp"
        "../xrRender/r__sector_detect.cpp"
        "../xrRender/r__sector_traversal.cpp"
        "../xrRender/Shader.cpp"
        "../xrRender/SH_Atomic.cpp"
        "../xrRender/SH_Constant.cpp"
        "../xrRender/SH_Matrix.cpp"
        "../xrRender/SH_Texture.cpp"
        "../xrRender/SkeletonAnimated.cpp"
        "../xrRender/SkeletonCustom.cpp"
        "../xrRender/SkeletonRigid.cpp"
        "../xrRender/SkeletonX.cpp"
        "../xrRender/SkeletonXSkinXW_CPP.cpp"
        "../xrRender/SkeletonXSkinXW_SSE.cpp"
        "../xrRender/stats_manager.cpp"
        "../xrRender/Texture.cpp"
        "../xrRender/TextureDescrManager.cpp"
        "../xrRender/tss_def.cpp"
        "../xrRender/VertexCache.cpp"
        "../xrRender/WallmarksEngine.cpp"
        "../xrRender/xrRender_console.cpp"
        "../xrRender/xrStripify.cpp"
        "../xrRender/xr_effgamma.cpp"
        "../xrRender/blenders/BlenderDefault.cpp"
        "../xrRender/blenders/Blender_Blur.cpp"
        "../xrRender/blenders/Blender_default_aref.cpp"
        "../xrRender/blenders/Blender_LaEmB.cpp"
        "../xrRender/blenders/Blender_Model.cpp"
        "../xrRender/blenders/Blender_Screen_GRAY.cpp"
        "../xrRender/blenders/Blender_Shadow_World.cpp"
        "../xrRender/blenders/Blender_Vertex.cpp"
        "../xrRender/blenders/Blender_Vertex_aref.cpp"
    "FStaticRender_Blenders.cpp"
    "FStaticRender.cpp"
    "FStaticRender.h"
    "FStaticRender_Loader.cpp"
    "FStaticRender_RenderTarget.cpp"
    "FStaticRender_RenderTarget.h"
    "FStaticRender_Shaders.cpp"
    "FStaticRender_Types.h"
    "GlowManager.cpp"
    "GlowManager.h"
    "LightPPA.cpp"
    "LightPPA.h"
    "LightProjector.cpp"
    "LightProjector.h"
    "LightShadows.cpp"
    "LightShadows.h"
    "stdafx.cpp"
    "stdafx.h"
    "xrRender_R1.cpp"
)

group_sources(SRC_FILES)

add_library(${PROJECT_NAME} SHARED ${SRC_FILES})

message("Using DXVK Native for D3D9 API")

include(ExternalProject)
ExternalProject_Add(dxvk-native
        GIT_REPOSITORY    https://github.com/GermanAizek/dxvk-native
        GIT_TAG           master
        GIT_SHALLOW       ON
        BUILD_ALWAYS      OFF
        CONFIGURE_HANDLED_BY_BUILD ON
        CONFIGURE_COMMAND meson setup ../dxvk-native --buildtype=release -Denable_d3d11=false -Denable_d3d10=false -Denable_dxgi=false
        BUILD_COMMAND     ninja
        BUILD_BYPRODUCTS  <BINARY_DIR>/src/d3d9/libdxvk_d3d9.so
        INSTALL_COMMAND   ""
        )
ExternalProject_Get_property(dxvk-native SOURCE_DIR BINARY_DIR)
set(DXVK_NATIVE_INCLUDE_DIRS
        "${SOURCE_DIR}/include/native/directx"
        "${SOURCE_DIR}/include/native/windows"
        "${SOURCE_DIR}/include/native/wsi"
        )
set(NATIVE_D3D9_LIBS ${BINARY_DIR}/src/d3d9/libdxvk_d3d9.so)

add_dependencies(${PROJECT_NAME} dxvk-native)

target_include_directories(${PROJECT_NAME}
    PRIVATE
    ${CMAKE_SOURCE_DIR}/src
    #${CMAKE_SOURCE_DIR}/src/Include
    ${CMAKE_SOURCE_DIR}/Externals/imgui
    ${CMAKE_SOURCE_DIR}/OpenAutomate/inc
    ${CMAKE_SOURCE_DIR}/Externals/luabind
    "${DXVK_NATIVE_INCLUDE_DIRS}"
    ${CMAKE_SOURCE_DIR}/sdk/include/nvapi
    ${SDL2_INCLUDE_DIRS}
)

#target_link_directories(${PROJECT_NAME}
#    PRIVATE
#    ${CMAKE_SOURCE_DIR}/Externals/dxvk-native/src/d3d9
#    ${CMAKE_SOURCE_DIR}/Externals/dxvk-native/src/d3gi
#)

target_link_libraries(${PROJECT_NAME}
    PRIVATE
    xrCore
    xrLuabind
    xrCDB
    xrEngine
    xrParticles
    xrScriptEngine
    xrAPI
    xrMiscMath
    ${NATIVE_D3D9_LIBS}
    ${SDL2_LIBRARIES}
)

target_compile_definitions(${PROJECT_NAME}
    PRIVATE
    -DXRRENDER_R1_EXPORTS
    -DUSE_DX9
    #-D_MAYA_EXPORT
)

set_target_properties(${PROJECT_NAME} PROPERTIES
    PREFIX ""
)

target_precompile_headers(${PROJECT_NAME}
    PRIVATE
    "stdafx.h"
)

install(TARGETS ${PROJECT_NAME} LIBRARY
    DESTINATION ${CMAKE_INSTALL_LIBDIR}
    PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ
)
