/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHAP/HAPRelayActivationClient.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class HMDAccessory, NSObject, NSString;

@interface HMDRelayActivationClient : HAPRelayActivationClient <HMFLogging> {

	HMDAccessory* _accessory;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSString* _challengeIdentifier;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSString * challengeIdentifier;                        //@synthesize challengeIdentifier=_challengeIdentifier - In the implementation block
@property (nonatomic,__weak,readonly) HMDAccessory * accessory;                     //@synthesize accessory=_accessory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)open;
-(void)close;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(HMDAccessory *)accessory;
-(id)initWithAccessory:(id)arg1 ;
-(void)_closeWithError:(id)arg1 ;
-(void)requestChallenge;
-(void)requestCertificateWithPublicKey:(id)arg1 challengeCertificate:(id)arg2 challengeResponse:(id)arg3 ;
-(void)setChallengeIdentifier:(NSString *)arg1 ;
-(NSString *)challengeIdentifier;
@end

