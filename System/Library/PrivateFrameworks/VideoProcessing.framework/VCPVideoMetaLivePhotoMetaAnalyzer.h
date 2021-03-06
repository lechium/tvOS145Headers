/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPVideoMetaAnalyzer.h>

@class NSMutableData, VCPVideoMetaFocusAnalyzer, VCPVideoMetaMotionAnalyzer, NSMutableArray, VCPVideoMetaLensSwitchAnalyzer;

@interface VCPVideoMetaLivePhotoMetaAnalyzer : VCPVideoMetaAnalyzer {

	CGVector _prevEstimatedCenterMv;
	NSMutableData* _deSerializedMetaBuffer;
	VCPVideoMetaFocusAnalyzer* _metaFocusAnalyzer;
	VCPVideoMetaMotionAnalyzer* _metaMotionAnalyzer;
	unsigned long long _requestAnalyses;
	NSMutableArray* _metadataStabilizationArray;
	NSMutableArray* _frameTimestampArray;
	NSMutableArray* _originalFrameTimestampArray;
	VCPVideoMetaLensSwitchAnalyzer* _metaLensSwitchAnalzer;
	BOOL _gyroHomographyIsValid;
	CGSize _gyroHomographyDimension;

}
+(id)referenceSoftwareStackVersion;
+(id)defaultDesiredKeys;
-(id)init;
-(id)privateResults;
-(int)processMetadataGroup:(id)arg1 flags:(unsigned long long*)arg2 ;
-(int)finalizeAnalysis;
-(id)initWithRequestAnalyses:(unsigned long long)arg1 formatDescription:(opaqueCMFormatDescriptionRef)arg2 ;
-(CGSize)readGyroHomographyDimension:(opaqueCMFormatDescriptionRef)arg1 ;
-(BOOL)gyroHomographyVersionIsValid:(opaqueCMFormatDescriptionRef)arg1 ;
-(id)readSoftwareStackVersion:(opaqueCMFormatDescriptionRef)arg1 ;
-(float)compareSoftwareStackVersion:(id)arg1 withReferenceVersion:(id)arg2 ;
-(CFDataRef)getSetupDataFrom:(opaqueCMFormatDescriptionRef)arg1 ;
-(CFDataRef)getFirstAtomWithFourCharCode:(unsigned)arg1 fromSetupData:(CFDataRef)arg2 ;
-(float)compareNumericVersion:(id)arg1 withReferenceVersion:(id)arg2 ;
-(int)convertLivePhotoStruct:(FigLivePhotoMetadata*)arg1 toDictionary:(id)arg2 ;
-(int)convertLivePhotoBinary:(id)arg1 toDictionary:(id)arg2 ;
@end

