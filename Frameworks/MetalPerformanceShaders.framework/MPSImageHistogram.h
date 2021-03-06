/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/MetalPerformanceShaders
 */

@interface MPSImageHistogram : MPSKernel {
    struct { 
        struct { 
            unsigned int x; 
            unsigned int y; 
            unsigned int z; 
        } origin; 
        struct { 
            unsigned int width; 
            unsigned int height; 
            unsigned int depth; 
        } size; 
    }  _clipRectSource;
    BOOL  _zeroHistogram;
    BOOL  histogramAlpha;
    unsigned int  histogramEntries;
    void maxPixelValue;
    void minPixelValue;
    BOOL  useMinMaxHistogramKernel;
}

@property (nonatomic) struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; } x2; } clipRectSource;
@property (nonatomic, readonly) struct { unsigned int x1; BOOL x2; } histogramInfo;
@property (nonatomic) BOOL zeroHistogram;

+ (const struct MPSLibraryInfo { int x1; unsigned int x2; char *x3; struct MPSKernelInfo {} *x4; struct MPSKernelInfo {} *x5; struct MPSKernelInfo {} *x6; struct MPSKernelInfo {} *x7; struct MPSKernelInfo {} *x8; struct MPSKernelInfo {} *x9; struct MPSKernelInfo {} *x10; struct MPSKernelInfo {} *x11; struct MPSKernelInfo {} *x12; struct MPSKernelInfo {} *x13; struct MPSKernelInfo {} *x14; }*)libraryInfo;

- (struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; } x2; })clipRectSource;
- (id)copyWithZone:(struct _NSZone { }*)arg1 device:(id)arg2;
- (id)debugDescription;
- (void)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 histogram:(id)arg3 histogramOffset:(unsigned int)arg4;
- (struct { unsigned int x1; BOOL x2; })histogramInfo;
- (unsigned long)histogramSizeForSourceFormat:(unsigned int)arg1;
- (id)initWithDevice:(id)arg1;
- (id)initWithDevice:(id)arg1 histogramInfo:(const struct { unsigned int x1; BOOL x2; }*)arg2;
- (void)setClipRectSource:(struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; } x2; })arg1;
- (void)setZeroHistogram:(BOOL)arg1;
- (BOOL)zeroHistogram;

@end
