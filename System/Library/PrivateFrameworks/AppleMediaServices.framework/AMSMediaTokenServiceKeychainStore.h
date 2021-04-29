/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:56 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AppleMediaServices/AppleMediaServices-Structs.h>
@class NSString;

@interface AMSMediaTokenServiceKeychainStore : NSObject {

	NSString* _clientIdentifier;
	NSString* _keychainAccessGroup;

}

@property (nonatomic,readonly) NSString * clientIdentifier;               //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,retain) NSString * keychainAccessGroup;              //@synthesize keychainAccessGroup=_keychainAccessGroup - In the implementation block
-(NSString *)clientIdentifier;
-(void)setKeychainAccessGroup:(NSString *)arg1 ;
-(NSString *)keychainAccessGroup;
-(BOOL)storeToken:(id)arg1 ;
-(id)initWithClientIdentifier:(id)arg1 keychainAccessGroup:(id)arg2 ;
-(id)retrieveToken;
-(CFDictionaryRef)_copyKeychainQuery;
-(void)_removeTokenFromKeychain;
@end

