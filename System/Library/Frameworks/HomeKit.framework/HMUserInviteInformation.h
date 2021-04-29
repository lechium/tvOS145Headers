/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface HMUserInviteInformation : NSObject {

	BOOL _administrator;
	BOOL _remoteAccessAllowed;
	BOOL _announceAccessAllowed;
	NSString* _userID;
	unsigned long long _camerasAccessLevel;

}

@property (nonatomic,copy,readonly) NSString * userID;                                                 //@synthesize userID=_userID - In the implementation block
@property (getter=isAdministrator,nonatomic,readonly) BOOL administrator;                              //@synthesize administrator=_administrator - In the implementation block
@property (getter=isRemoteAccessAllowed,nonatomic,readonly) BOOL remoteAccessAllowed;                  //@synthesize remoteAccessAllowed=_remoteAccessAllowed - In the implementation block
@property (nonatomic,readonly) unsigned long long camerasAccessLevel;                                  //@synthesize camerasAccessLevel=_camerasAccessLevel - In the implementation block
@property (getter=isAnnounceAccessAllowed,nonatomic,readonly) BOOL announceAccessAllowed;              //@synthesize announceAccessAllowed=_announceAccessAllowed - In the implementation block
-(id)init;
-(NSString *)userID;
-(BOOL)isAdministrator;
-(BOOL)isRemoteAccessAllowed;
-(BOOL)isAnnounceAccessAllowed;
-(unsigned long long)camerasAccessLevel;
-(id)initWithUser:(id)arg1 administrator:(BOOL)arg2 remoteAccess:(BOOL)arg3 announceAccess:(BOOL)arg4 camerasAccessLevel:(unsigned long long)arg5 ;
-(id)initWithUser:(id)arg1 administrator:(BOOL)arg2 remoteAccess:(BOOL)arg3 ;
@end

