/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDNetworkRouterFirewallRuleManagerBackingStoreFetchHelper.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSSet, CKServerChangeToken, HMBMirrorInput, NSString;

@interface HMDNetworkRouterFirewallRuleCloudZoneFetchInfo : HMDNetworkRouterFirewallRuleManagerBackingStoreFetchHelper <HMFLogging> {

	NSSet* _interestedRecordIDs;
	CKServerChangeToken* _changeToken;
	CKServerChangeToken* _originalChangeToken;
	HMBMirrorInput* _mirrorInput;

}

@property (nonatomic,readonly) NSSet * interestedRecordIDs;                            //@synthesize interestedRecordIDs=_interestedRecordIDs - In the implementation block
@property (nonatomic,retain) CKServerChangeToken * changeToken;                        //@synthesize changeToken=_changeToken - In the implementation block
@property (nonatomic,readonly) CKServerChangeToken * originalChangeToken;              //@synthesize originalChangeToken=_originalChangeToken - In the implementation block
@property (nonatomic,retain) HMBMirrorInput * mirrorInput;                             //@synthesize mirrorInput=_mirrorInput - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)finishWithError:(id)arg1 ;
-(CKServerChangeToken *)changeToken;
-(void)setChangeToken:(CKServerChangeToken *)arg1 ;
-(HMBMirrorInput *)mirrorInput;
-(id)initWithOptions:(id)arg1 changeToken:(id)arg2 promise:(id)arg3 database:(id)arg4 useAnonymousRequests:(BOOL)arg5 interestedRecordIDs:(id)arg6 mirrorInput:(id)arg7 ;
-(NSSet *)interestedRecordIDs;
-(CKServerChangeToken *)originalChangeToken;
-(void)setMirrorInput:(HMBMirrorInput *)arg1 ;
@end

