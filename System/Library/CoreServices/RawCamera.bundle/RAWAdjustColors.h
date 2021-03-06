/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RawCamera/RAWFilter.h>

@class CIImage, NSNumber;

@interface RAWAdjustColors : RAWFilter {

	CIImage* inputImage;
	NSNumber* inputVersion;
	NSNumber* inputM00;
	NSNumber* inputM01;
	NSNumber* inputM02;
	NSNumber* inputM10;
	NSNumber* inputM11;
	NSNumber* inputM12;
	NSNumber* inputM20;
	NSNumber* inputM21;
	NSNumber* inputM22;
	NSNumber* inputTRCs0;
	NSNumber* inputTRCy1;
	NSNumber* inputTRCs1;
	NSNumber* inputTRCy2;
	NSNumber* inputTRCs2;
	NSNumber* inputTRCy3;
	NSNumber* inputTRCs3;
	NSNumber* inputTRCs4;
	NSNumber* inputBoostKind;
	NSNumber* inputBoostAmount;
	NSNumber* inputBoostLuminanceAmount;
	NSNumber* inputBoostTransitionPoint;
	NSNumber* inputBoostTransitionWidth;

}
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)customAttributes;
-(id)customAttributes;
-(id)outputImage;
-(void)setInputBoostAmount:(id)arg1 ;
@end

