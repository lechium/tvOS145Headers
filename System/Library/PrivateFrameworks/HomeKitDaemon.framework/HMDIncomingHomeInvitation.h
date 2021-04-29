/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDHomeInvitation.h>

@class HMDAccount, HMFPairingIdentity, NSDictionary, NSString, NSUUID;

@interface HMDIncomingHomeInvitation : HMDHomeInvitation {

	HMDAccount* _inviterAccount;
	HMFPairingIdentity* _inviterIdentity;

}

@property (nonatomic,readonly) NSDictionary * bulletinContext; 
@property (nonatomic,copy,readonly) NSString * homeName; 
@property (nonatomic,copy,readonly) NSUUID * homeUUID; 
@property (readonly) HMDAccount * inviterAccount;                            //@synthesize inviterAccount=_inviterAccount - In the implementation block
@property (copy,readonly) HMFPairingIdentity * inviterIdentity;              //@synthesize inviterIdentity=_inviterIdentity - In the implementation block
@property (nonatomic,copy,readonly) NSString * inviterUserID; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)homeUUID;
-(NSString *)homeName;
-(NSDictionary *)bulletinContext;
-(NSString *)inviterUserID;
-(BOOL)refreshDisplayName;
-(id)describeWithFormat;
-(HMDAccount *)inviterAccount;
-(HMFPairingIdentity *)inviterIdentity;
-(id)initWithInviterAccount:(id)arg1 invitationIdentifier:(id)arg2 invitationState:(long long)arg3 homeName:(id)arg4 homeUUID:(id)arg5 inviterIdentity:(id)arg6 expiryDate:(id)arg7 ;
@end

