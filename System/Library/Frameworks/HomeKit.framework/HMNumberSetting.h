/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKit/HMSetting.h>

@class NSNumber;

@interface HMNumberSetting : HMSetting {

	NSNumber* _minimumValue;
	NSNumber* _maximumValue;
	NSNumber* _stepValue;

}

@property (readonly) NSNumber * minimumValue;              //@synthesize minimumValue=_minimumValue - In the implementation block
@property (readonly) NSNumber * maximumValue;              //@synthesize maximumValue=_maximumValue - In the implementation block
@property (readonly) NSNumber * stepValue;                 //@synthesize stepValue=_stepValue - In the implementation block
-(BOOL)isKindOfClass:(Class)arg1 ;
-(NSNumber *)minimumValue;
-(NSNumber *)maximumValue;
-(NSNumber *)stepValue;
-(id)valueForUpdate:(id)arg1 ;
-(id)internalValue;
@end

