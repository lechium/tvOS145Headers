/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSUUID, HMDLogEventDispatcher, NSString;

@interface HMDAppleMediaAccessoriesStateManagerMetricsDispatcher : HMFObject <HMFLogging> {

	NSUUID* _identifier;
	HMDLogEventDispatcher* _logEventDispatcher;

}

@property (copy,readonly) NSUUID * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (readonly) HMDLogEventDispatcher * logEventDispatcher;              //@synthesize logEventDispatcher=_logEventDispatcher - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSUUID *)identifier;
-(id)logIdentifier;
-(void)submitMatchingIdentifierEventWithMatchingCount:(long long)arg1 ;
-(void)submitMatchingIdentifierRemovalEventWithRemovalCount:(long long)arg1 ;
-(HMDLogEventDispatcher *)logEventDispatcher;
-(id)initWithIdentifier:(id)arg1 logEventDispatcher:(id)arg2 ;
@end

