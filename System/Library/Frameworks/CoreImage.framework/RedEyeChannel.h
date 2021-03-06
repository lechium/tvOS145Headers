/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:21 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface RedEyeChannel : CIFilter {

	CIImage* inputImage;
	NSNumber* inputChannel;
	NSNumber* inputParam1;
	NSNumber* inputParam2;
	NSNumber* inputParam3;
	NSNumber* inputParam4;

}
-(id)outputImage;
-(id)filterNameForChannel:(int)arg1 ;
-(id)parameterNamesForChannel:(int)arg1 ;
@end

