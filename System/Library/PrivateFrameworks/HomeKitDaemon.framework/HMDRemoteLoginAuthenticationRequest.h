/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:13 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKit/HMRemoteLoginMessage.h>

@interface HMDRemoteLoginAuthenticationRequest : HMRemoteLoginMessage {

	unsigned long long _targetedAccountType;

}

@property (assign,nonatomic) unsigned long long targetedAccountType;              //@synthesize targetedAccountType=_targetedAccountType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)messageName;
+(id)objWithDict:(id)arg1 ;
+(id)objWithMessage:(id)arg1 ;
+(id)xpcMessageName;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)messageName;
-(id)messagePayload;
-(id)xpcMessageName;
-(void)setTargetedAccountType:(unsigned long long)arg1 ;
-(unsigned long long)targetedAccountType;
@end
