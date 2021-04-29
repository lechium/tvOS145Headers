/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CMCapture/CMCapture-Structs.h>
@interface FigCaptureSourceCompanionFormat : NSObject {

	int _formatIndex;
	SCD_Struct_BW2 _fesDimensions;
	SCD_Struct_BW2 _fesInputCropDimensions;
	SCD_Struct_BW2 _outputCropDimensionsWhenFesIsEnabled;
	SCD_Struct_BW2 _sensorCropDimensions;
	SCD_Struct_BW2 _highQualitySensorDimensions;
	SCD_Struct_BW2 _postGDCCropDimensions;
	SCD_Struct_BW2 _geometricDistortionCorrectedNativeDimensions;
	BOOL _sifrEnabled;

}

@property (readonly) int formatIndex;                                                          //@synthesize formatIndex=_formatIndex - In the implementation block
@property (readonly) SCD_Struct_BW2 fesDimensions;                                             //@synthesize fesDimensions=_fesDimensions - In the implementation block
@property (readonly) SCD_Struct_BW2 fesInputCropDimensions;                                    //@synthesize fesInputCropDimensions=_fesInputCropDimensions - In the implementation block
@property (readonly) SCD_Struct_BW2 outputCropDimensionsWhenFesIsEnabled;                      //@synthesize outputCropDimensionsWhenFesIsEnabled=_outputCropDimensionsWhenFesIsEnabled - In the implementation block
@property (readonly) SCD_Struct_BW2 sensorCropDimensions;                                      //@synthesize sensorCropDimensions=_sensorCropDimensions - In the implementation block
@property (readonly) SCD_Struct_BW2 postGDCCropDimensions;                                     //@synthesize postGDCCropDimensions=_postGDCCropDimensions - In the implementation block
@property (readonly) SCD_Struct_BW2 highQualitySensorDimensions;                               //@synthesize highQualitySensorDimensions=_highQualitySensorDimensions - In the implementation block
@property (readonly) SCD_Struct_BW2 geometricDistortionCorrectedNativeDimensions;              //@synthesize geometricDistortionCorrectedNativeDimensions=_geometricDistortionCorrectedNativeDimensions - In the implementation block
@property (readonly) BOOL sifrEnabled;                                                         //@synthesize sifrEnabled=_sifrEnabled - In the implementation block
-(id)description;
-(void)dealloc;
-(int)formatIndex;
-(SCD_Struct_BW2)sensorCropDimensions;
-(id)initWithCompanionFormatDictionary:(id)arg1 ;
-(SCD_Struct_BW2)fesDimensions;
-(SCD_Struct_BW2)geometricDistortionCorrectedNativeDimensions;
-(SCD_Struct_BW2)postGDCCropDimensions;
-(SCD_Struct_BW2)fesInputCropDimensions;
-(SCD_Struct_BW2)outputCropDimensionsWhenFesIsEnabled;
-(BOOL)sifrEnabled;
-(SCD_Struct_BW2)highQualitySensorDimensions;
@end
