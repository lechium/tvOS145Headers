/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:09 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSMutableDictionary, NSDictionary;

@interface BWVariableFrameRateParameters : NSObject {

	NSString* _portType;
	int _motionThreshold;
	NSMutableDictionary* _aeMaxGain;

}

@property (nonatomic,readonly) NSString * portType;                   //@synthesize portType=_portType - In the implementation block
@property (nonatomic,readonly) int motionThreshold;                   //@synthesize motionThreshold=_motionThreshold - In the implementation block
@property (nonatomic,readonly) NSDictionary * aeMaxGain;              //@synthesize aeMaxGain=_aeMaxGain - In the implementation block
-(id)description;
-(void)dealloc;
-(NSString *)portType;
-(id)initWithPortType:(id)arg1 sensorIDDictionary:(id)arg2 ;
-(NSDictionary *)aeMaxGain;
-(int)motionThreshold;
@end
