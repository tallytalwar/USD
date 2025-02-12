set(PXR_PREFIX pxr/usdImaging)
set(PXR_PACKAGE usdSkelImaging)

pxr_library(usdSkelImaging
    LIBRARIES
        hio
        hd
        usdImaging
        usdSkel

    PUBLIC_CLASSES
        animationAdapter
        animationSchema
        dataSourceAnimationPrim
        package
        skeletonAdapter
        skelRootAdapter
        tokens
        utils

    PUBLIC_HEADERS
        api.h

    RESOURCE_FILES
        plugInfo.json
        shaders/skinning.glslfx
)
