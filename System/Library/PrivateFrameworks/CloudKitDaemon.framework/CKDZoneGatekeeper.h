/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:55 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSMutableArray;

@interface CKDZoneGatekeeper : NSObject {

	NSMutableDictionary* _zoneIDsToGateHolders;
	NSMutableArray* _waiterWrappers;

}

@property (nonatomic,retain) NSMutableDictionary * zoneIDsToGateHolders;              //@synthesize zoneIDsToGateHolders=_zoneIDsToGateHolders - In the implementation block
@property (nonatomic,retain) NSMutableArray * waiterWrappers;                         //@synthesize waiterWrappers=_waiterWrappers - In the implementation block
-(id)init;
-(id)CKStatusReportArray;
-(BOOL)hasStatusToReport;
-(NSMutableDictionary *)zoneIDsToGateHolders;
-(NSMutableArray *)waiterWrappers;
-(void)relinquishLocksForWaiter:(id)arg1 deferRelinquish:(BOOL)arg2 ;
-(void)registerWaiter:(id)arg1 forZoneIDs:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setZoneIDsToGateHolders:(NSMutableDictionary *)arg1 ;
-(void)setWaiterWrappers:(NSMutableArray *)arg1 ;
@end

