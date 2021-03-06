/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKit/HMHomeInvitationData.h>

@class NSString, NSUUID;

@interface HMOutgoingHomeInvitationData : HMHomeInvitationData {

	NSString* _inviteeUserID;
	NSString* _inviteeName;
	NSUUID* _inviteeUUID;

}

@property (nonatomic,copy) NSString * inviteeName;                         //@synthesize inviteeName=_inviteeName - In the implementation block
@property (nonatomic,copy,readonly) NSString * inviteeUserID;              //@synthesize inviteeUserID=_inviteeUserID - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * inviteeUUID;                  //@synthesize inviteeUUID=_inviteeUUID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)inviteeUserID;
-(NSString *)inviteeName;
-(NSUUID *)inviteeUUID;
-(id)initWithUUID:(id)arg1 inviteeUserID:(id)arg2 inviteeName:(id)arg3 invitationState:(long long)arg4 expiryDate:(id)arg5 ;
-(void)setInviteeName:(NSString *)arg1 ;
@end

