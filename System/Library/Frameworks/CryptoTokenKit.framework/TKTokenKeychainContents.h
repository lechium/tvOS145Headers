/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, TKTokenConfiguration, NSString, NSDictionary;

@interface TKTokenKeychainContents : NSObject {

	NSArray* _items;
	TKTokenConfiguration* _configuration;
	NSString* _tokenID;

}

@property (readonly) TKTokenConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (readonly) NSString * tokenID;                                //@synthesize tokenID=_tokenID - In the implementation block
@property (copy,readonly) NSDictionary * keys; 
@property (copy,readonly) NSDictionary * certificates; 
@property (copy,readonly) NSArray * items; 
-(NSDictionary *)keys;
-(NSDictionary *)certificates;
-(TKTokenConfiguration *)configuration;
-(id)initWithTokenID:(id)arg1 ;
-(NSString *)tokenID;
-(id)keyForObjectID:(id)arg1 error:(id*)arg2 ;
-(id)initWithConfiguration:(id)arg1 ;
-(NSArray *)items;
-(id)certificateForObjectID:(id)arg1 error:(id*)arg2 ;
-(void)fillWithItems:(id)arg1 ;
-(id)certificateForKey:(id)arg1 ;
@end

