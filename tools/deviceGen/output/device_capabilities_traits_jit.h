std::string jit_traits = R"===(
// Limits JIT Members
// VK 1.0
NBL_CONSTEXPR_STATIC_INLINE uint32_t maxImageDimension1D = )===" + CJITIncludeLoader::to_string(limits.maxImageDimension1D) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint32_t maxImageDimension2D = )===" + CJITIncludeLoader::to_string(limits.maxImageDimension2D) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint32_t maxImageDimension3D = )===" + CJITIncludeLoader::to_string(limits.maxImageDimension3D) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint32_t maxImageDimensionCube = )===" + CJITIncludeLoader::to_string(limits.maxImageDimensionCube) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint32_t maxImageArrayLayers = )===" + CJITIncludeLoader::to_string(limits.maxImageArrayLayers) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint32_t maxBufferViewTexels = )===" + CJITIncludeLoader::to_string(limits.maxBufferViewTexels) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint32_t maxUBOSize = )===" + CJITIncludeLoader::to_string(limits.maxUBOSize) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint32_t maxSSBOSize = )===" + CJITIncludeLoader::to_string(limits.maxSSBOSize) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint16_t maxPushConstantsSize = )===" + CJITIncludeLoader::to_string(limits.maxPushConstantsSize) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint32_t maxMemoryAllocationCount = )===" + CJITIncludeLoader::to_string(limits.maxMemoryAllocationCount) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint32_t maxSamplerAllocationCount = )===" + CJITIncludeLoader::to_string(limits.maxSamplerAllocationCount) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint32_t bufferImageGranularity = )===" + CJITIncludeLoader::to_string(limits.bufferImageGranularity) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint64_t sparseAddressSpaceSize = )===" + CJITIncludeLoader::to_string(limits.sparseAddressSpaceSize) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint32_t maxBoundDescriptorSets = )===" + CJITIncludeLoader::to_string(limits.maxBoundDescriptorSets) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint32_t maxPerStageDescriptorSamplers = )===" + CJITIncludeLoader::to_string(limits.maxPerStageDescriptorSamplers) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint32_t maxPerStageDescriptorUBOs = )===" + CJITIncludeLoader::to_string(limits.maxPerStageDescriptorUBOs) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint32_t maxPerStageDescriptorSSBOs = )===" + CJITIncludeLoader::to_string(limits.maxPerStageDescriptorSSBOs) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint32_t maxPerStageDescriptorImages = )===" + CJITIncludeLoader::to_string(limits.maxPerStageDescriptorImages) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint32_t maxPerStageDescriptorStorageImages = )===" + CJITIncludeLoader::to_string(limits.maxPerStageDescriptorStorageImages) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint32_t maxPerStageDescriptorInputAttachments = )===" + CJITIncludeLoader::to_string(limits.maxPerStageDescriptorInputAttachments) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint32_t maxPerStageResources = )===" + CJITIncludeLoader::to_string(limits.maxPerStageResources) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint32_t maxDescriptorSetSamplers = )===" + CJITIncludeLoader::to_string(limits.maxDescriptorSetSamplers) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint32_t maxDescriptorSetUBOs = )===" + CJITIncludeLoader::to_string(limits.maxDescriptorSetUBOs) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint32_t maxDescriptorSetDynamicOffsetUBOs = )===" + CJITIncludeLoader::to_string(limits.maxDescriptorSetDynamicOffsetUBOs) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint32_t maxDescriptorSetSSBOs = )===" + CJITIncludeLoader::to_string(limits.maxDescriptorSetSSBOs) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint32_t maxDescriptorSetDynamicOffsetSSBOs = )===" + CJITIncludeLoader::to_string(limits.maxDescriptorSetDynamicOffsetSSBOs) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint32_t maxDescriptorSetImages = )===" + CJITIncludeLoader::to_string(limits.maxDescriptorSetImages) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint32_t maxDescriptorSetStorageImages = )===" + CJITIncludeLoader::to_string(limits.maxDescriptorSetStorageImages) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint32_t maxDescriptorSetInputAttachments = )===" + CJITIncludeLoader::to_string(limits.maxDescriptorSetInputAttachments) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint8_t maxVertexInputAttributes = )===" + CJITIncludeLoader::to_string(limits.maxVertexInputAttributes) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint8_t maxVertexInputBindings = )===" + CJITIncludeLoader::to_string(limits.maxVertexInputBindings) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint16_t maxVertexInputAttributeOffset = )===" + CJITIncludeLoader::to_string(limits.maxVertexInputAttributeOffset) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint16_t maxVertexInputBindingStride = )===" + CJITIncludeLoader::to_string(limits.maxVertexInputBindingStride) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint16_t maxVertexOutputComponents = )===" + CJITIncludeLoader::to_string(limits.maxVertexOutputComponents) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint16_t maxWorkgroupSize[3] = )===" + CJITIncludeLoader::to_string(limits.maxWorkgroupSize[3]) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint8_t subPixelPrecisionBits = )===" + CJITIncludeLoader::to_string(limits.subPixelPrecisionBits) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint8_t subTexelPrecisionBits = )===" + CJITIncludeLoader::to_string(limits.subTexelPrecisionBits) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint8_t mipmapPrecisionBits = )===" + CJITIncludeLoader::to_string(limits.mipmapPrecisionBits) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint32_t maxDrawIndexedIndexValue = )===" + CJITIncludeLoader::to_string(limits.maxDrawIndexedIndexValue) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint32_t maxDrawIndirectCount = )===" + CJITIncludeLoader::to_string(limits.maxDrawIndirectCount) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE float maxSamplerLodBias = )===" + CJITIncludeLoader::to_string(limits.maxSamplerLodBias) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint8_t maxSamplerAnisotropyLog2 = )===" + CJITIncludeLoader::to_string(limits.maxSamplerAnisotropyLog2) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint8_t maxViewports = )===" + CJITIncludeLoader::to_string(limits.maxViewports) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint16_t maxViewportDims[2] = )===" + CJITIncludeLoader::to_string(limits.maxViewportDims[2]) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE float viewportBoundsRange[2] = )===" + CJITIncludeLoader::to_string(limits.viewportBoundsRange[2]) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint32_t viewportSubPixelBits = )===" + CJITIncludeLoader::to_string(limits.viewportSubPixelBits) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint16_t minMemoryMapAlignment = )===" + CJITIncludeLoader::to_string(limits.minMemoryMapAlignment) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint16_t bufferViewAlignment = )===" + CJITIncludeLoader::to_string(limits.bufferViewAlignment) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint16_t minUBOAlignment = )===" + CJITIncludeLoader::to_string(limits.minUBOAlignment) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint16_t minSSBOAlignment = )===" + CJITIncludeLoader::to_string(limits.minSSBOAlignment) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE int8_t minTexelOffset = )===" + CJITIncludeLoader::to_string(limits.minTexelOffset) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint8_t maxTexelOffset = )===" + CJITIncludeLoader::to_string(limits.maxTexelOffset) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE int8_t minTexelGatherOffset = )===" + CJITIncludeLoader::to_string(limits.minTexelGatherOffset) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint8_t maxTexelGatherOffset = )===" + CJITIncludeLoader::to_string(limits.maxTexelGatherOffset) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE float minInterpolationOffset = )===" + CJITIncludeLoader::to_string(limits.minInterpolationOffset) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE float maxInterpolationOffset = )===" + CJITIncludeLoader::to_string(limits.maxInterpolationOffset) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint8_t subPixelInterpolationOffsetBits = )===" + CJITIncludeLoader::to_string(limits.subPixelInterpolationOffsetBits) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint32_t maxFramebufferWidth = )===" + CJITIncludeLoader::to_string(limits.maxFramebufferWidth) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint32_t maxFramebufferHeight = )===" + CJITIncludeLoader::to_string(limits.maxFramebufferHeight) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint32_t maxFramebufferLayers = )===" + CJITIncludeLoader::to_string(limits.maxFramebufferLayers) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint8_t maxSampleMaskWords = )===" + CJITIncludeLoader::to_string(limits.maxSampleMaskWords) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint8_t maxClipDistances = )===" + CJITIncludeLoader::to_string(limits.maxClipDistances) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint8_t maxCullDistances = )===" + CJITIncludeLoader::to_string(limits.maxCullDistances) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint8_t maxCombinedClipAndCullDistances = )===" + CJITIncludeLoader::to_string(limits.maxCombinedClipAndCullDistances) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint32_t discreteQueuePriorities = )===" + CJITIncludeLoader::to_string(limits.discreteQueuePriorities) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE float pointSizeRange[2] = )===" + CJITIncludeLoader::to_string(limits.pointSizeRange[2]) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE float lineWidthRange[2] = )===" + CJITIncludeLoader::to_string(limits.lineWidthRange[2]) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE float pointSizeGranularity = )===" + CJITIncludeLoader::to_string(limits.pointSizeGranularity) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE float lineWidthGranularity = )===" + CJITIncludeLoader::to_string(limits.lineWidthGranularity) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool strictLines = )===" + CJITIncludeLoader::to_string(limits.strictLines) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool standardSampleLocations = )===" + CJITIncludeLoader::to_string(limits.standardSampleLocations) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint16_t optimalBufferCopyOffsetAlignment = )===" + CJITIncludeLoader::to_string(limits.optimalBufferCopyOffsetAlignment) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint16_t optimalBufferCopyRowPitchAlignment = )===" + CJITIncludeLoader::to_string(limits.optimalBufferCopyRowPitchAlignment) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint16_t nonCoherentAtomSize = )===" + CJITIncludeLoader::to_string(limits.nonCoherentAtomSize) + R"===(;
// VK 1.1
NBL_CONSTEXPR_STATIC_INLINE uint16_t subgroupSize = )===" + CJITIncludeLoader::to_string(limits.subgroupSize) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE shaderStage subgroupOpsShaderStages = )===" + CJITIncludeLoader::to_string(limits.subgroupOpsShaderStages) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool shaderSubgroupClustered = )===" + CJITIncludeLoader::to_string(limits.shaderSubgroupClustered) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool shaderSubgroupArithmetic = )===" + CJITIncludeLoader::to_string(limits.shaderSubgroupArithmetic) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool shaderSubgroupQuad = )===" + CJITIncludeLoader::to_string(limits.shaderSubgroupQuad) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool shaderSubgroupQuadAllStages = )===" + CJITIncludeLoader::to_string(limits.shaderSubgroupQuadAllStages) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE E_POINT_CLIPPING_BEHAVIOR pointClippingBehavior = )===" + CJITIncludeLoader::to_string(limits.pointClippingBehavior) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint8_t maxMultiviewViewCount = )===" + CJITIncludeLoader::to_string(limits.maxMultiviewViewCount) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint32_t maxMultiviewInstanceIndex = )===" + CJITIncludeLoader::to_string(limits.maxMultiviewInstanceIndex) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool protectedNoFault = )===" + CJITIncludeLoader::to_string(limits.protectedNoFault) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint32_t maxPerSetDescriptors = )===" + CJITIncludeLoader::to_string(limits.maxPerSetDescriptors) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint64_t maxMemoryAllocationSize = )===" + CJITIncludeLoader::to_string(limits.maxMemoryAllocationSize) + R"===(;
// VK 1.2
NBL_CONSTEXPR_STATIC_INLINE VkShaderFloatControlsIndependence denormBehaviorIndependence = )===" + CJITIncludeLoader::to_string(limits.denormBehaviorIndependence) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE VkShaderFloatControlsIndependence roundingModeIndependence = )===" + CJITIncludeLoader::to_string(limits.roundingModeIndependence) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool shaderSignedZeroInfNanPreserveFloat16 = )===" + CJITIncludeLoader::to_string(limits.shaderSignedZeroInfNanPreserveFloat16) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool shaderSignedZeroInfNanPreserveFloat32 = )===" + CJITIncludeLoader::to_string(limits.shaderSignedZeroInfNanPreserveFloat32) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool shaderSignedZeroInfNanPreserveFloat64 = )===" + CJITIncludeLoader::to_string(limits.shaderSignedZeroInfNanPreserveFloat64) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool shaderDenormPreserveFloat16 = )===" + CJITIncludeLoader::to_string(limits.shaderDenormPreserveFloat16) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool shaderDenormPreserveFloat32 = )===" + CJITIncludeLoader::to_string(limits.shaderDenormPreserveFloat32) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool shaderDenormPreserveFloat64 = )===" + CJITIncludeLoader::to_string(limits.shaderDenormPreserveFloat64) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool shaderDenormFlushToZeroFloat16 = )===" + CJITIncludeLoader::to_string(limits.shaderDenormFlushToZeroFloat16) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool shaderDenormFlushToZeroFloat32 = )===" + CJITIncludeLoader::to_string(limits.shaderDenormFlushToZeroFloat32) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool shaderDenormFlushToZeroFloat64 = )===" + CJITIncludeLoader::to_string(limits.shaderDenormFlushToZeroFloat64) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool shaderRoundingModeRTEFloat16 = )===" + CJITIncludeLoader::to_string(limits.shaderRoundingModeRTEFloat16) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool shaderRoundingModeRTEFloat32 = )===" + CJITIncludeLoader::to_string(limits.shaderRoundingModeRTEFloat32) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool shaderRoundingModeRTEFloat64 = )===" + CJITIncludeLoader::to_string(limits.shaderRoundingModeRTEFloat64) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool shaderRoundingModeRTZFloat16 = )===" + CJITIncludeLoader::to_string(limits.shaderRoundingModeRTZFloat16) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool shaderRoundingModeRTZFloat32 = )===" + CJITIncludeLoader::to_string(limits.shaderRoundingModeRTZFloat32) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool shaderRoundingModeRTZFloat64 = )===" + CJITIncludeLoader::to_string(limits.shaderRoundingModeRTZFloat64) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint32_t maxUpdateAfterBindDescriptorsInAllPools = )===" + CJITIncludeLoader::to_string(limits.maxUpdateAfterBindDescriptorsInAllPools) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool shaderUniformBufferArrayNonUniformIndexingNative = )===" + CJITIncludeLoader::to_string(limits.shaderUniformBufferArrayNonUniformIndexingNative) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool shaderSampledImageArrayNonUniformIndexingNative = )===" + CJITIncludeLoader::to_string(limits.shaderSampledImageArrayNonUniformIndexingNative) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool shaderStorageBufferArrayNonUniformIndexingNative = )===" + CJITIncludeLoader::to_string(limits.shaderStorageBufferArrayNonUniformIndexingNative) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool shaderStorageImageArrayNonUniformIndexingNative = )===" + CJITIncludeLoader::to_string(limits.shaderStorageImageArrayNonUniformIndexingNative) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool shaderInputAttachmentArrayNonUniformIndexingNative = )===" + CJITIncludeLoader::to_string(limits.shaderInputAttachmentArrayNonUniformIndexingNative) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool robustBufferAccessUpdateAfterBind = )===" + CJITIncludeLoader::to_string(limits.robustBufferAccessUpdateAfterBind) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool quadDivergentImplicitLod = )===" + CJITIncludeLoader::to_string(limits.quadDivergentImplicitLod) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint32_t maxPerStageDescriptorUpdateAfterBindSamplers = )===" + CJITIncludeLoader::to_string(limits.maxPerStageDescriptorUpdateAfterBindSamplers) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint32_t maxPerStageDescriptorUpdateAfterBindUBOs = )===" + CJITIncludeLoader::to_string(limits.maxPerStageDescriptorUpdateAfterBindUBOs) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint32_t maxPerStageDescriptorUpdateAfterBindSSBOs = )===" + CJITIncludeLoader::to_string(limits.maxPerStageDescriptorUpdateAfterBindSSBOs) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint32_t maxPerStageDescriptorUpdateAfterBindImages = )===" + CJITIncludeLoader::to_string(limits.maxPerStageDescriptorUpdateAfterBindImages) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint32_t maxPerStageDescriptorUpdateAfterBindStorageImages = )===" + CJITIncludeLoader::to_string(limits.maxPerStageDescriptorUpdateAfterBindStorageImages) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint32_t maxPerStageDescriptorUpdateAfterBindInputAttachments = )===" + CJITIncludeLoader::to_string(limits.maxPerStageDescriptorUpdateAfterBindInputAttachments) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint32_t maxPerStageUpdateAfterBindResources = )===" + CJITIncludeLoader::to_string(limits.maxPerStageUpdateAfterBindResources) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint32_t maxDescriptorSetUpdateAfterBindSamplers = )===" + CJITIncludeLoader::to_string(limits.maxDescriptorSetUpdateAfterBindSamplers) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint32_t maxDescriptorSetUpdateAfterBindUBOs = )===" + CJITIncludeLoader::to_string(limits.maxDescriptorSetUpdateAfterBindUBOs) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint32_t maxDescriptorSetUpdateAfterBindDynamicOffsetUBOs = )===" + CJITIncludeLoader::to_string(limits.maxDescriptorSetUpdateAfterBindDynamicOffsetUBOs) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint32_t maxDescriptorSetUpdateAfterBindSSBOs = )===" + CJITIncludeLoader::to_string(limits.maxDescriptorSetUpdateAfterBindSSBOs) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint32_t maxDescriptorSetUpdateAfterBindDynamicOffsetSSBOs = )===" + CJITIncludeLoader::to_string(limits.maxDescriptorSetUpdateAfterBindDynamicOffsetSSBOs) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint32_t maxDescriptorSetUpdateAfterBindImages = )===" + CJITIncludeLoader::to_string(limits.maxDescriptorSetUpdateAfterBindImages) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint32_t maxDescriptorSetUpdateAfterBindStorageImages = )===" + CJITIncludeLoader::to_string(limits.maxDescriptorSetUpdateAfterBindStorageImages) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint32_t maxDescriptorSetUpdateAfterBindInputAttachments = )===" + CJITIncludeLoader::to_string(limits.maxDescriptorSetUpdateAfterBindInputAttachments) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE modeFlags supportedDepthResolveModes = )===" + CJITIncludeLoader::to_string(limits.supportedDepthResolveModes) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE modeFlags supportedStencilResolveModes = )===" + CJITIncludeLoader::to_string(limits.supportedStencilResolveModes) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool independentResolveNone = )===" + CJITIncludeLoader::to_string(limits.independentResolveNone) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool independentResolve = )===" + CJITIncludeLoader::to_string(limits.independentResolve) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint64_t maxTimelineSemaphoreValueDifference = )===" + CJITIncludeLoader::to_string(limits.maxTimelineSemaphoreValueDifference) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE core::bitflag<asset::IImage::E_SAMPLE_COUNT_FLAGS> framebufferIntegerColorSampleCounts = )===" + CJITIncludeLoader::to_string(limits.framebufferIntegerColorSampleCounts) + R"===(;
// VK 1.3
NBL_CONSTEXPR_STATIC_INLINE uint8_t minSubgroupSize = )===" + CJITIncludeLoader::to_string(limits.minSubgroupSize) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint8_t maxSubgroupSize = )===" + CJITIncludeLoader::to_string(limits.maxSubgroupSize) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint32_t maxComputeWorkgroupSubgroups = )===" + CJITIncludeLoader::to_string(limits.maxComputeWorkgroupSubgroups) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE shaderStage requiredSubgroupSizeStages = )===" + CJITIncludeLoader::to_string(limits.requiredSubgroupSizeStages) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool integerDotProduct8BitUnsignedAccelerated = )===" + CJITIncludeLoader::to_string(limits.integerDotProduct8BitUnsignedAccelerated) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool integerDotProduct8BitSignedAccelerated = )===" + CJITIncludeLoader::to_string(limits.integerDotProduct8BitSignedAccelerated) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool integerDotProduct8BitMixedSignednessAccelerated = )===" + CJITIncludeLoader::to_string(limits.integerDotProduct8BitMixedSignednessAccelerated) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool integerDotProduct4x8BitPackedUnsignedAccelerated = )===" + CJITIncludeLoader::to_string(limits.integerDotProduct4x8BitPackedUnsignedAccelerated) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool integerDotProduct4x8BitPackedSignedAccelerated = )===" + CJITIncludeLoader::to_string(limits.integerDotProduct4x8BitPackedSignedAccelerated) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool integerDotProduct4x8BitPackedMixedSignednessAccelerated = )===" + CJITIncludeLoader::to_string(limits.integerDotProduct4x8BitPackedMixedSignednessAccelerated) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool integerDotProduct16BitUnsignedAccelerated = )===" + CJITIncludeLoader::to_string(limits.integerDotProduct16BitUnsignedAccelerated) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool integerDotProduct16BitSignedAccelerated = )===" + CJITIncludeLoader::to_string(limits.integerDotProduct16BitSignedAccelerated) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool integerDotProduct16BitMixedSignednessAccelerated = )===" + CJITIncludeLoader::to_string(limits.integerDotProduct16BitMixedSignednessAccelerated) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool integerDotProduct32BitUnsignedAccelerated = )===" + CJITIncludeLoader::to_string(limits.integerDotProduct32BitUnsignedAccelerated) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool integerDotProduct32BitSignedAccelerated = )===" + CJITIncludeLoader::to_string(limits.integerDotProduct32BitSignedAccelerated) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool integerDotProduct32BitMixedSignednessAccelerated = )===" + CJITIncludeLoader::to_string(limits.integerDotProduct32BitMixedSignednessAccelerated) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool integerDotProduct64BitUnsignedAccelerated = )===" + CJITIncludeLoader::to_string(limits.integerDotProduct64BitUnsignedAccelerated) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool integerDotProduct64BitSignedAccelerated = )===" + CJITIncludeLoader::to_string(limits.integerDotProduct64BitSignedAccelerated) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool integerDotProduct64BitMixedSignednessAccelerated = )===" + CJITIncludeLoader::to_string(limits.integerDotProduct64BitMixedSignednessAccelerated) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool integerDotProductAccumulatingSaturating8BitUnsignedAccelerated = )===" + CJITIncludeLoader::to_string(limits.integerDotProductAccumulatingSaturating8BitUnsignedAccelerated) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool integerDotProductAccumulatingSaturating8BitSignedAccelerated = )===" + CJITIncludeLoader::to_string(limits.integerDotProductAccumulatingSaturating8BitSignedAccelerated) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated = )===" + CJITIncludeLoader::to_string(limits.integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated = )===" + CJITIncludeLoader::to_string(limits.integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated = )===" + CJITIncludeLoader::to_string(limits.integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated = )===" + CJITIncludeLoader::to_string(limits.integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool integerDotProductAccumulatingSaturating16BitUnsignedAccelerated = )===" + CJITIncludeLoader::to_string(limits.integerDotProductAccumulatingSaturating16BitUnsignedAccelerated) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool integerDotProductAccumulatingSaturating16BitSignedAccelerated = )===" + CJITIncludeLoader::to_string(limits.integerDotProductAccumulatingSaturating16BitSignedAccelerated) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated = )===" + CJITIncludeLoader::to_string(limits.integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool integerDotProductAccumulatingSaturating32BitUnsignedAccelerated = )===" + CJITIncludeLoader::to_string(limits.integerDotProductAccumulatingSaturating32BitUnsignedAccelerated) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool integerDotProductAccumulatingSaturating32BitSignedAccelerated = )===" + CJITIncludeLoader::to_string(limits.integerDotProductAccumulatingSaturating32BitSignedAccelerated) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated = )===" + CJITIncludeLoader::to_string(limits.integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool integerDotProductAccumulatingSaturating64BitUnsignedAccelerated = )===" + CJITIncludeLoader::to_string(limits.integerDotProductAccumulatingSaturating64BitUnsignedAccelerated) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool integerDotProductAccumulatingSaturating64BitSignedAccelerated = )===" + CJITIncludeLoader::to_string(limits.integerDotProductAccumulatingSaturating64BitSignedAccelerated) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated = )===" + CJITIncludeLoader::to_string(limits.integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint64_t maxBufferSize = )===" + CJITIncludeLoader::to_string(limits.maxBufferSize) + R"===(;
// Nabla Core Extensions
// Extensions
NBL_CONSTEXPR_STATIC_INLINE bool shaderTrinaryMinmax = )===" + CJITIncludeLoader::to_string(limits.shaderTrinaryMinmax) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool shaderExplicitVertexParameter = )===" + CJITIncludeLoader::to_string(limits.shaderExplicitVertexParameter) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool gpuShaderHalfFloatAMD = )===" + CJITIncludeLoader::to_string(limits.gpuShaderHalfFloatAMD) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool shaderImageLoadStoreLod = )===" + CJITIncludeLoader::to_string(limits.shaderImageLoadStoreLod) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool queueFamilyForeign = )===" + CJITIncludeLoader::to_string(limits.queueFamilyForeign) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool shaderStencilExport = )===" + CJITIncludeLoader::to_string(limits.shaderStencilExport) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool postDepthCoverage = )===" + CJITIncludeLoader::to_string(limits.postDepthCoverage) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool decorateString = )===" + CJITIncludeLoader::to_string(limits.decorateString) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool shaderNonSemanticInfo = )===" + CJITIncludeLoader::to_string(limits.shaderNonSemanticInfo) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool shaderEarlyAndLateFragmentTests = )===" + CJITIncludeLoader::to_string(limits.shaderEarlyAndLateFragmentTests) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool fragmentShaderBarycentric = )===" + CJITIncludeLoader::to_string(limits.fragmentShaderBarycentric) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool logicOp = )===" + CJITIncludeLoader::to_string(limits.logicOp) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool vertexPipelineStoresAndAtomics = )===" + CJITIncludeLoader::to_string(limits.vertexPipelineStoresAndAtomics) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool fragmentStoresAndAtomics = )===" + CJITIncludeLoader::to_string(limits.fragmentStoresAndAtomics) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool shaderTessellationAndGeometryPointSize = )===" + CJITIncludeLoader::to_string(limits.shaderTessellationAndGeometryPointSize) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool shaderStorageImageMultisample = )===" + CJITIncludeLoader::to_string(limits.shaderStorageImageMultisample) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool shaderStorageImageReadWithoutFormat = )===" + CJITIncludeLoader::to_string(limits.shaderStorageImageReadWithoutFormat) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool shaderStorageImageArrayDynamicIndexing = )===" + CJITIncludeLoader::to_string(limits.shaderStorageImageArrayDynamicIndexing) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool shaderFloat64 = )===" + CJITIncludeLoader::to_string(limits.shaderFloat64) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool variableMultisampleRate = )===" + CJITIncludeLoader::to_string(limits.variableMultisampleRate) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool drawIndirectCount = )===" + CJITIncludeLoader::to_string(limits.drawIndirectCount) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool storagePushConstant8 = )===" + CJITIncludeLoader::to_string(limits.storagePushConstant8) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool shaderFloat16 = )===" + CJITIncludeLoader::to_string(limits.shaderFloat16) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool samplerFilterMinmax = )===" + CJITIncludeLoader::to_string(limits.samplerFilterMinmax) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool vulkanMemoryModelAvailabilityVisibilityChains = )===" + CJITIncludeLoader::to_string(limits.vulkanMemoryModelAvailabilityVisibilityChains) + R"===(;
// Nabla
NBL_CONSTEXPR_STATIC_INLINE uint32_t computeUnits = )===" + CJITIncludeLoader::to_string(limits.computeUnits) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool dispatchBase = )===" + CJITIncludeLoader::to_string(limits.dispatchBase) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool allowCommandBufferQueryCopies = )===" + CJITIncludeLoader::to_string(limits.allowCommandBufferQueryCopies) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint32_t maxOptimallyResidentWorkgroupInvocations = )===" + CJITIncludeLoader::to_string(limits.maxOptimallyResidentWorkgroupInvocations) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE uint32_t maxResidentInvocations = )===" + CJITIncludeLoader::to_string(limits.maxResidentInvocations) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE asset::CGLSLCompiler::E_SPIRV_VERSION spirvVersion = )===" + CJITIncludeLoader::to_string(limits.spirvVersion) + R"===(;

// Features JIT Members
// VK 1.0
NBL_CONSTEXPR_STATIC_INLINE bool robustBufferAccess = )===" + CJITIncludeLoader::to_string(features.robustBufferAccess) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool sampleRateShading = )===" + CJITIncludeLoader::to_string(features.sampleRateShading) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool dualSrcBlend = )===" + CJITIncludeLoader::to_string(features.dualSrcBlend) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool logicOp = )===" + CJITIncludeLoader::to_string(features.logicOp) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool fillModeNonSolid = )===" + CJITIncludeLoader::to_string(features.fillModeNonSolid) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool depthBounds = )===" + CJITIncludeLoader::to_string(features.depthBounds) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool wideLines = )===" + CJITIncludeLoader::to_string(features.wideLines) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool largePoints = )===" + CJITIncludeLoader::to_string(features.largePoints) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool alphaToOne = )===" + CJITIncludeLoader::to_string(features.alphaToOne) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool multiViewport = )===" + CJITIncludeLoader::to_string(features.multiViewport) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool samplerAnisotropy = )===" + CJITIncludeLoader::to_string(features.samplerAnisotropy) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool occlusionQueryPrecise = )===" + CJITIncludeLoader::to_string(features.occlusionQueryPrecise) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool pipelineStatisticsQuery = )===" + CJITIncludeLoader::to_string(features.pipelineStatisticsQuery) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool shaderImageGatherExtended = )===" + CJITIncludeLoader::to_string(features.shaderImageGatherExtended) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool shaderStorageImageExtendedFormats = )===" + CJITIncludeLoader::to_string(features.shaderStorageImageExtendedFormats) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool shaderStorageImageMultisample = )===" + CJITIncludeLoader::to_string(features.shaderStorageImageMultisample) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool shaderStorageImageWriteWithoutFormat = )===" + CJITIncludeLoader::to_string(features.shaderStorageImageWriteWithoutFormat) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool shaderStorageImageArrayDynamicIndexing = )===" + CJITIncludeLoader::to_string(features.shaderStorageImageArrayDynamicIndexing) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool shaderClipDistance = )===" + CJITIncludeLoader::to_string(features.shaderClipDistance) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool shaderCullDistance = )===" + CJITIncludeLoader::to_string(features.shaderCullDistance) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool shaderFloat64 = )===" + CJITIncludeLoader::to_string(features.shaderFloat64) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool shaderInt64 = )===" + CJITIncludeLoader::to_string(features.shaderInt64) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool shaderInt16 = )===" + CJITIncludeLoader::to_string(features.shaderInt16) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool variableMultisampleRate = )===" + CJITIncludeLoader::to_string(features.variableMultisampleRate) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool inheritedQueries = )===" + CJITIncludeLoader::to_string(features.inheritedQueries) + R"===(;
// VK 1.1
NBL_CONSTEXPR_STATIC_INLINE bool storageBuffer16BitAccess = )===" + CJITIncludeLoader::to_string(features.storageBuffer16BitAccess) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool uniformAndStorageBuffer16BitAccess = )===" + CJITIncludeLoader::to_string(features.uniformAndStorageBuffer16BitAccess) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool multiview = )===" + CJITIncludeLoader::to_string(features.multiview) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool protectedMemory = )===" + CJITIncludeLoader::to_string(features.protectedMemory) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool samplerYcbcrConversion = )===" + CJITIncludeLoader::to_string(features.samplerYcbcrConversion) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool shaderDrawParameters = )===" + CJITIncludeLoader::to_string(features.shaderDrawParameters) + R"===(;
// VK 1.2
NBL_CONSTEXPR_STATIC_INLINE bool uniformAndStorageBuffer8BitAccess = )===" + CJITIncludeLoader::to_string(features.uniformAndStorageBuffer8BitAccess) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool storagePushConstant8 = )===" + CJITIncludeLoader::to_string(features.storagePushConstant8) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool shaderInt8 = )===" + CJITIncludeLoader::to_string(features.shaderInt8) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool descriptorIndexing = )===" + CJITIncludeLoader::to_string(features.descriptorIndexing) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool shaderInputAttachmentArrayDynamicIndexing = )===" + CJITIncludeLoader::to_string(features.shaderInputAttachmentArrayDynamicIndexing) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool shaderUniformBufferArrayNonUniformIndexing = )===" + CJITIncludeLoader::to_string(features.shaderUniformBufferArrayNonUniformIndexing) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool shaderStorageImageArrayNonUniformIndexing = )===" + CJITIncludeLoader::to_string(features.shaderStorageImageArrayNonUniformIndexing) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool shaderInputAttachmentArrayNonUniformIndexing = )===" + CJITIncludeLoader::to_string(features.shaderInputAttachmentArrayNonUniformIndexing) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool shaderUniformTexelBufferArrayNonUniformIndexing = )===" + CJITIncludeLoader::to_string(features.shaderUniformTexelBufferArrayNonUniformIndexing) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool shaderStorageTexelBufferArrayNonUniformIndexing = )===" + CJITIncludeLoader::to_string(features.shaderStorageTexelBufferArrayNonUniformIndexing) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool bufferDeviceAddressCaptureReplay = )===" + CJITIncludeLoader::to_string(features.bufferDeviceAddressCaptureReplay) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool bufferDeviceAddressMultiDevice = )===" + CJITIncludeLoader::to_string(features.bufferDeviceAddressMultiDevice) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool vulkanMemoryModelAvailabilityVisibilityChains = )===" + CJITIncludeLoader::to_string(features.vulkanMemoryModelAvailabilityVisibilityChains) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool subgroupBroadcastDynamicId = )===" + CJITIncludeLoader::to_string(features.subgroupBroadcastDynamicId) + R"===(;
// VK 1.3
NBL_CONSTEXPR_STATIC_INLINE bool descriptorBindingInlineUniformBlockUpdateAfterBind = )===" + CJITIncludeLoader::to_string(features.descriptorBindingInlineUniformBlockUpdateAfterBind) + R"===(;
// Nabla Core Extensions
NBL_CONSTEXPR_STATIC_INLINE bool robustBufferAccess2 = )===" + CJITIncludeLoader::to_string(features.robustBufferAccess2) + R"===(;
NBL_CONSTEXPR_STATIC_INLINE bool robustImageAccess2 = )===" + CJITIncludeLoader::to_string(features.robustImageAccess2) + R"===(;
// Extensions
// Nabla
)===";
