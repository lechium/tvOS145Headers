/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreImage/CIFilter.h>

@class CIImage;

@interface HMIDeltaEFilter : CIFilter {

	CIImage* _inputImage;
	CIImage* _referenceImage;
	double _threshold;

}

@property (readonly) CIImage * inputImage;                  //@synthesize inputImage=_inputImage - In the implementation block
@property (readonly) CIImage * referenceImage;              //@synthesize referenceImage=_referenceImage - In the implementation block
@property (readonly) double threshold;                      //@synthesize threshold=_threshold - In the implementation block
-(double)threshold;
-(id)outputImage;
-(CIImage *)inputImage;
-(CIImage *)referenceImage;
-(id)initWithInputImage:(id)arg1 referenceImage:(id)arg2 threshold:(double)arg3 ;
@end

