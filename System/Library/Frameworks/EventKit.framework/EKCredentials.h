/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:32 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface EKCredentials : NSObject {

	NSString* _username;
	NSString* _password;

}

@property (nonatomic,readonly) NSString * username;              //@synthesize username=_username - In the implementation block
@property (nonatomic,readonly) NSString * password;              //@synthesize password=_password - In the implementation block
+(id)credentialsWithUsername:(id)arg1 password:(id)arg2 ;
-(id)description;
-(NSString *)password;
-(NSString *)username;
@end

