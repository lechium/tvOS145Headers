/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BWCoreAnalyticsPayload.h>

@class NSString;

@interface BWCinematicFramingSessionAnalyticsPayload : NSObject <BWCoreAnalyticsPayload> {

	unsigned _cinematicFramingMaxPeopleDetected;
	NSString* _cinematicFramingROIHeatMap;
	NSString* _clientApplicationID;
	unsigned _cinematicFramingControlMode;

}

@property (assign,nonatomic) unsigned cinematicFramingMaxPeopleDetected;              //@synthesize cinematicFramingMaxPeopleDetected=_cinematicFramingMaxPeopleDetected - In the implementation block
@property (nonatomic,copy) NSString * cinematicFramingROIHeatMap;                     //@synthesize cinematicFramingROIHeatMap=_cinematicFramingROIHeatMap - In the implementation block
@property (nonatomic,copy) NSString * clientApplicationID;                            //@synthesize clientApplicationID=_clientApplicationID - In the implementation block
@property (assign,nonatomic) unsigned cinematicFramingControlMode;                    //@synthesize cinematicFramingControlMode=_cinematicFramingControlMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)reset;
-(id)eventName;
-(id)eventDictionary;
-(unsigned)cinematicFramingControlMode;
-(void)setCinematicFramingControlMode:(unsigned)arg1 ;
-(NSString *)clientApplicationID;
-(void)setClientApplicationID:(NSString *)arg1 ;
-(unsigned)cinematicFramingMaxPeopleDetected;
-(void)setCinematicFramingMaxPeopleDetected:(unsigned)arg1 ;
-(NSString *)cinematicFramingROIHeatMap;
-(void)setCinematicFramingROIHeatMap:(NSString *)arg1 ;
@end

