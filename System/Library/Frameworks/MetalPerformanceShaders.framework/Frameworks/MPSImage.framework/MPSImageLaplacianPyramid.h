/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:11 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSImage/MPSImage-Structs.h>
#import <MPSImage/MPSImagePyramid.h>

@class NSDictionary;

@interface MPSImageLaplacianPyramid : MPSImagePyramid {

	AutotuningState _autotuningState;
	HighlevelState _state;
	DerivedState _derivedState;

}

@property (assign,setter=setIsPyramidAdd:,getter=getIsPyramidAdd,nonatomic) BOOL isPyramidAdd; 
@property (getter=getCopyConfigs,nonatomic,readonly) NSDictionary * copyConfigs; 
@property (getter=getUpsampleConfigs,nonatomic,readonly) NSDictionary * upsampleConfigs; 
@property (assign,setter=setAutotuningEnabled:,getter=getAutotuningEnabled,nonatomic) BOOL autotuningEnabled; 
@property (assign,setter=setCopyConfigID:,getter=getCopyConfigID,nonatomic) unsigned long long copyConfigID; 
@property (assign,setter=setUpsampleConfigID:,getter=getUpsampleConfigID,nonatomic) unsigned long long upsampleConfigID; 
@property (assign,setter=setLaplacianBias:,getter=getLaplacianBias,nonatomic) float laplacianBias; 
@property (assign,setter=setLaplacianScale:,getter=getLaplacianScale,nonatomic) float laplacianScale; 
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setOffset:(SCD_Struct_MP6)arg1 ;
-(void)setClipRect:(SCD_Struct_MP8)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 kernelWidth:(unsigned long long)arg2 kernelHeight:(unsigned long long)arg3 weights:(const float*)arg4 ;
-(void)cleanUpAll;
-(void)zeroInitAll;
-(MPSRegion)sourceRegionForDestinationSize:(SCD_Struct_MP7)arg1 ;
-(BOOL)getIsPyramidAdd;
-(float)getLaplacianBias;
-(float)getLaplacianScale;
-(void)setIsPyramidAdd:(BOOL)arg1 ;
-(void)setLaplacianBias:(float)arg1 ;
-(void)setLaplacianScale:(float)arg1 ;
-(BOOL)getAutotuningEnabled;
-(id)getCopyConfigs;
-(id)getUpsampleConfigs;
-(unsigned long long)getCopyConfigID;
-(unsigned long long)getUpsampleConfigID;
-(void)setAutotuningEnabled:(BOOL)arg1 ;
-(void)setCopyConfigID:(unsigned long long)arg1 ;
-(void)setUpsampleConfigID:(unsigned long long)arg1 ;
-(BOOL)isValidDstPixelFormat:(unsigned long long)arg1 srcPixelFormat:(unsigned long long)arg2 ;
-(BOOL)isReducedPrecisionAllowedForDstPixelFormat:(unsigned long long)arg1 srcPixelFormat:(unsigned long long)arg2 ;
@end

