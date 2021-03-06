/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:24 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface GCDeviceAdaptiveTriggersPayload : NSObject <NSSecureCoding> {

	NSNumber* _mode;
	NSNumber* _startPosition;
	NSNumber* _endPosition;
	NSNumber* _strength;
	NSNumber* _amplitude;
	NSNumber* _frequency;

}

@property (nonatomic,readonly) NSNumber * mode;                       //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) NSNumber * startPosition;              //@synthesize startPosition=_startPosition - In the implementation block
@property (nonatomic,readonly) NSNumber * endPosition;                //@synthesize endPosition=_endPosition - In the implementation block
@property (nonatomic,readonly) NSNumber * strength;                   //@synthesize strength=_strength - In the implementation block
@property (nonatomic,readonly) NSNumber * amplitude;                  //@synthesize amplitude=_amplitude - In the implementation block
@property (nonatomic,readonly) NSNumber * frequency;                  //@synthesize frequency=_frequency - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)mode;
-(NSNumber *)startPosition;
-(NSNumber *)endPosition;
-(NSNumber *)frequency;
-(NSNumber *)strength;
-(NSNumber *)amplitude;
-(id)initFeedbackWithStartPosition:(float)arg1 resistiveStrength:(float)arg2 ;
-(id)initWeaponWithStartPosition:(float)arg1 endPosition:(float)arg2 resistiveStrength:(float)arg3 ;
-(id)initVibrationWithStartPosition:(float)arg1 amplitude:(float)arg2 frequency:(float)arg3 ;
-(id)initOff;
@end

