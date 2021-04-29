/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitBackingStore/HMBModel.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSSet, NSData, NSString;

@interface HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorInternalStateModel : HMBModel <HMFLogging> {

	NSSet* _lastSynchronizedRecordIDs;

}

@property (nonatomic,retain) NSData * archivedLastSynchronizedRecordIDs; 
@property (nonatomic,retain) NSSet * lastSynchronizedRecordIDs;                       //@synthesize lastSynchronizedRecordIDs=_lastSynchronizedRecordIDs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)modelID;
+(id)logCategory;
+(id)hmbProperties;
+(id)parentModelID;
-(id)init;
-(NSSet *)lastSynchronizedRecordIDs;
-(void)setLastSynchronizedRecordIDs:(NSSet *)arg1 ;
@end

