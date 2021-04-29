/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:43 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriKitInvocation.framework/SiriKitInvocation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDictionary;

@interface SKIDirectInvocationPayload : NSObject {

	NSString* _identifier;
	NSDictionary* _userData;

}

@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSDictionary * userData;                     //@synthesize userData=_userData - In the implementation block
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(void)setUserData:(NSDictionary *)arg1 ;
-(NSDictionary *)userData;
@end
