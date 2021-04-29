/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:52 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PDSAgent.framework/PDSAgent
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PDSAgent/PDSAgent-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, PDSProtoUserAuth;

@interface PDSProtoUserPushToken : PBCodable <NSCopying> {

	NSString* _pushToken;
	PDSProtoUserAuth* _userAuth;
	NSString* _userId;

}

@property (nonatomic,retain) NSString * userId;                        //@synthesize userId=_userId - In the implementation block
@property (nonatomic,readonly) BOOL hasUserAuth; 
@property (nonatomic,retain) PDSProtoUserAuth * userAuth;              //@synthesize userAuth=_userAuth - In the implementation block
@property (nonatomic,retain) NSString * pushToken;                     //@synthesize pushToken=_pushToken - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)pushToken;
-(void)setPushToken:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)userId;
-(void)setUserId:(NSString *)arg1 ;
-(void)setUserAuth:(PDSProtoUserAuth *)arg1 ;
-(BOOL)hasUserAuth;
-(PDSProtoUserAuth *)userAuth;
@end

