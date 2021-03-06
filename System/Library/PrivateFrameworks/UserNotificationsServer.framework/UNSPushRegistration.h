/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:45 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UserNotificationsServer/UserNotificationsServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface UNSPushRegistration : NSObject <NSCopying> {

	NSString* _environment;
	NSData* _token;
	NSString* _tokenIdentifier;

}

@property (nonatomic,copy,readonly) NSString * environment;                  //@synthesize environment=_environment - In the implementation block
@property (nonatomic,copy,readonly) NSData * token;                          //@synthesize token=_token - In the implementation block
@property (nonatomic,copy,readonly) NSString * tokenIdentifier;              //@synthesize tokenIdentifier=_tokenIdentifier - In the implementation block
+(id)pushRegistrationWithEnvironment:(id)arg1 tokenIdentifier:(id)arg2 token:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSData *)token;
-(id)dictionaryRepresentation;
-(NSString *)environment;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSString *)tokenIdentifier;
-(id)initWithEnvironment:(id)arg1 tokenIdentifier:(id)arg2 token:(id)arg3 ;
@end

