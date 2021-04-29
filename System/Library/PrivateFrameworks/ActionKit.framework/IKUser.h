/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:44 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface IKUser : NSObject {

	unsigned long long _userID;
	NSString* _username;
	BOOL _subscribed;

}

@property (assign,nonatomic) unsigned long long userID;                        //@synthesize userID=_userID - In the implementation block
@property (nonatomic,copy) NSString * username;                                //@synthesize username=_username - In the implementation block
@property (assign,getter=isSubscribed,nonatomic) BOOL subscribed;              //@synthesize subscribed=_subscribed - In the implementation block
-(id)description;
-(id)init;
-(void)dealloc;
-(NSString *)username;
-(void)setUsername:(NSString *)arg1 ;
-(unsigned long long)userID;
-(void)setUserID:(unsigned long long)arg1 ;
-(BOOL)isSubscribed;
-(void)setSubscribed:(BOOL)arg1 ;
@end

