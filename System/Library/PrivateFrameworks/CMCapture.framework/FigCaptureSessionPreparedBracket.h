/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:11 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CMCapture/CMCapture-Structs.h>
@interface FigCaptureSessionPreparedBracket : NSObject {

	unsigned _outputFormat;
	SCD_Struct_BW2 _outputDimensions;
	unsigned _imageCount;
	int _colorSpaceProperties;

}

@property (assign,nonatomic) unsigned outputFormat;                        //@synthesize outputFormat=_outputFormat - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW2 outputDimensions;              //@synthesize outputDimensions=_outputDimensions - In the implementation block
@property (assign,nonatomic) unsigned imageCount;                          //@synthesize imageCount=_imageCount - In the implementation block
@property (assign,nonatomic) int colorSpaceProperties;                     //@synthesize colorSpaceProperties=_colorSpaceProperties - In the implementation block
-(unsigned)outputFormat;
-(void)setOutputFormat:(unsigned)arg1 ;
-(unsigned)imageCount;
-(void)setImageCount:(unsigned)arg1 ;
-(int)colorSpaceProperties;
-(void)setOutputDimensions:(SCD_Struct_BW2)arg1 ;
-(SCD_Struct_BW2)outputDimensions;
-(void)setColorSpaceProperties:(int)arg1 ;
@end

