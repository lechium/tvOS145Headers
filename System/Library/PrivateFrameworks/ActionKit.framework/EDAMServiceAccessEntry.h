/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMServiceAccessEntry : FATObject {

	NSNumber* _accessTime;
	NSString* _serviceName;
	NSNumber* _userId;
	NSNumber* _authenticatedClientUserId;
	NSNumber* _apiKeyId;
	NSNumber* _businessAdmin;

}

@property (nonatomic,retain) NSNumber * accessTime;                             //@synthesize accessTime=_accessTime - In the implementation block
@property (nonatomic,retain) NSString * serviceName;                            //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,retain) NSNumber * userId;                                 //@synthesize userId=_userId - In the implementation block
@property (nonatomic,retain) NSNumber * authenticatedClientUserId;              //@synthesize authenticatedClientUserId=_authenticatedClientUserId - In the implementation block
@property (nonatomic,retain) NSNumber * apiKeyId;                               //@synthesize apiKeyId=_apiKeyId - In the implementation block
@property (nonatomic,retain) NSNumber * businessAdmin;                          //@synthesize businessAdmin=_businessAdmin - In the implementation block
+(id)structName;
+(id)structFields;
-(NSString *)serviceName;
-(void)setServiceName:(NSString *)arg1 ;
-(NSNumber *)userId;
-(void)setUserId:(NSNumber *)arg1 ;
-(NSNumber *)accessTime;
-(void)setAccessTime:(NSNumber *)arg1 ;
-(NSNumber *)apiKeyId;
-(void)setApiKeyId:(NSNumber *)arg1 ;
-(NSNumber *)authenticatedClientUserId;
-(void)setAuthenticatedClientUserId:(NSNumber *)arg1 ;
-(NSNumber *)businessAdmin;
-(void)setBusinessAdmin:(NSNumber *)arg1 ;
@end

