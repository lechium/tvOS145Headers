/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:51 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/PushKit.framework/PushKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSData;

@interface PKPushCredentials : NSObject {

	NSString* _type;
	NSData* _token;

}

@property (copy) NSString * type;              //@synthesize type=_type - In the implementation block
@property (copy) NSData * token;               //@synthesize token=_token - In the implementation block
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(NSData *)token;
-(void)setToken:(NSData *)arg1 ;
@end

