/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface HMDAccessoryFirmwareUpdateConcurrencyLogEventManager : HMFObject {

	os_unfair_lock_s _lock;
	NSMutableArray* _currentActivity;
	NSMutableArray* _peakActivity;
	NSMutableDictionary* _inProgress;

}

@property (nonatomic,retain) NSMutableArray * currentActivity;              //@synthesize currentActivity=_currentActivity - In the implementation block
@property (nonatomic,retain) NSMutableArray * peakActivity;                 //@synthesize peakActivity=_peakActivity - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * inProgress;              //@synthesize inProgress=_inProgress - In the implementation block
-(id)init;
-(NSMutableDictionary *)inProgress;
-(void)setInProgress:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)currentActivity;
-(void)startWithCategory:(unsigned long long)arg1 accessory:(id)arg2 ;
-(void)stopWithCategory:(unsigned long long)arg1 accessory:(id)arg2 ;
-(void)stopStagingWithAccessory:(id)arg1 ;
-(NSMutableArray *)peakActivity;
-(void)submitLogEvent;
-(unsigned long long)differenceFromCounterWithCategory:(unsigned long long)arg1 ;
-(void)startStagingWithAccessory:(id)arg1 ;
-(void)startApplyWithAccessory:(id)arg1 ;
-(void)stopApplyWithAccessory:(id)arg1 ;
-(void)setCurrentActivity:(NSMutableArray *)arg1 ;
-(void)setPeakActivity:(NSMutableArray *)arg1 ;
@end

