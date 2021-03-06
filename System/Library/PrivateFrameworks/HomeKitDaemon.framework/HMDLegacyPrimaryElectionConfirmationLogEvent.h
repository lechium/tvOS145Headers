/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:12 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDCoreAnalyticsLogging.h>

@class NSString;

@interface HMDLegacyPrimaryElectionConfirmationLogEvent : HMDLogEvent <HMDCoreAnalyticsLogging> {

	BOOL _changedPrimary;
	unsigned long long _availableResidentCount;
	unsigned long long _residentsRespondedCount;
	NSString* _criteria;

}

@property (assign) unsigned long long availableResidentCount;               //@synthesize availableResidentCount=_availableResidentCount - In the implementation block
@property (assign) unsigned long long residentsRespondedCount;              //@synthesize residentsRespondedCount=_residentsRespondedCount - In the implementation block
@property (copy) NSString * criteria;                                       //@synthesize criteria=_criteria - In the implementation block
@property (assign) BOOL changedPrimary;                                     //@synthesize changedPrimary=_changedPrimary - In the implementation block
-(id)init;
-(id)eventName;
-(NSString *)criteria;
-(void)setCriteria:(NSString *)arg1 ;
-(id)serializedEvent;
-(unsigned long long)availableResidentCount;
-(void)setAvailableResidentCount:(unsigned long long)arg1 ;
-(unsigned long long)residentsRespondedCount;
-(void)setResidentsRespondedCount:(unsigned long long)arg1 ;
-(BOOL)changedPrimary;
-(void)setChangedPrimary:(BOOL)arg1 ;
@end

