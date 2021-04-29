/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HomeKitDaemon/HMDXPCMessageSendPolicyParameters.h>

@interface HMDAccessoryBrowserXPCMessageSendPolicyParameters : HMDXPCMessageSendPolicyParameters {

	BOOL _browsing;

}

@property (assign,getter=isBrowsing,nonatomic) BOOL browsing;              //@synthesize browsing=_browsing - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)signature;
-(void)setBrowsing:(BOOL)arg1 ;
-(BOOL)isBrowsing;
-(id)initWithEntitlements:(unsigned long long)arg1 browsing:(BOOL)arg2 ;
@end
