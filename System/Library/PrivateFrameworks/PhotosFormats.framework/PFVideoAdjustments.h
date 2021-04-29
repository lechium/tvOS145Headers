/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosFormats/PhotosFormats-Structs.h>
#import <PhotosFormats/PFAssetAdjustments.h>

@interface PFVideoAdjustments : PFAssetAdjustments {

	float _slowMotionRate;
	SCD_Struct_PF4 _slowMotionTimeRange;

}

@property (nonatomic,readonly) SCD_Struct_PF4 slowMotionRampIn; 
@property (nonatomic,readonly) SCD_Struct_PF4 slowMotionRampOut; 
@property (nonatomic,readonly) float slowMotionRate; 
@property (nonatomic,readonly) SCD_Struct_PF4 slowMotionTimeRange; 
@property (assign,nonatomic) float slowMotionRate;                              //@synthesize slowMotionRate=_slowMotionRate - In the implementation block
@property (assign,nonatomic) SCD_Struct_PF4 slowMotionTimeRange;                //@synthesize slowMotionTimeRange=_slowMotionTimeRange - In the implementation block
+(BOOL)isRecognizedSlowMotionFormatWithIdentifier:(id)arg1 version:(id)arg2 ;
+(id)defaultVideoAdjustmentsURLForVideoURL:(id)arg1 ;
+(SCD_Struct_PF4)defaultSlowMotionTimeRangeForDuration:(SCD_Struct_PF3)arg1 ;
+(float)defaultSlowMotionRateForNominalFrameRate:(float)arg1 ;
+(id)defaultSlowMotionAdjustmentsForAsset:(id)arg1 ;
-(id)description;
-(id)initWithPropertyListDictionary:(id)arg1 ;
-(BOOL)isRecognizedFormat;
-(void)_updateDerivedPropertiesFromVersionedData;
-(BOOL)_parseLegacySLMDictionary:(id)arg1 forSlowMotionTimeRange:(SCD_Struct_PF4*)arg2 rate:(float*)arg3 ;
-(BOOL)_parseVersionedDataForSlowMotionTimeRange:(SCD_Struct_PF4*)arg1 rate:(float*)arg2 ;
-(BOOL)_parseAppleVideoDataBlobDictionary:(id)arg1 forSlowMotionTimeRange:(SCD_Struct_PF4*)arg2 rate:(float*)arg3 ;
-(id)_dictionaryFromSlowMotionTimeRange:(SCD_Struct_PF4)arg1 rate:(float)arg2 ;
-(id)_adjustmentsObjectFromNSKeyedArchiverData:(id)arg1 ;
-(float)slowMotionRate;
-(void)setSlowMotionRate:(float)arg1 ;
-(SCD_Struct_PF4)slowMotionTimeRange;
-(void)setSlowMotionTimeRange:(SCD_Struct_PF4)arg1 ;
-(id)initWithSlowMotionTimeRange:(SCD_Struct_PF4)arg1 rate:(float)arg2 ;
-(BOOL)_isValidSlowMotionTimeRange:(SCD_Struct_PF4)arg1 rate:(float)arg2 ;
-(BOOL)hasSlowMotionAdjustments;
-(SCD_Struct_PF4)slowMotionRampIn;
-(SCD_Struct_PF4)slowMotionRampOut;
-(SCD_Struct_PF3)convertToScaledTimeFromOriginalTime:(SCD_Struct_PF3)arg1 forExport:(BOOL)arg2 ;
-(SCD_Struct_PF3)convertToOriginalTimeFromScaledTime:(SCD_Struct_PF3)arg1 forExport:(BOOL)arg2 ;
@end

