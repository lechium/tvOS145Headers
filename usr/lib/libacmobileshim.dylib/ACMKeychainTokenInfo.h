/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/libacmobileshim.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libacmobileshim.dylib/ACFKeychainItemInfo.h>

@class NSString, ACFPrincipal, NSData;

@interface ACMKeychainTokenInfo : ACFKeychainItemInfo

@property (retain) NSString * indicator; 
@property (retain) ACFPrincipal * principal; 
@property (retain) NSData * tokenData; 
+(id)keychainTokenInfoWithPrincipal:(id)arg1 ;
+(id)classCode;
+(id)keychainTokenInfoWithPrincipal:(id)arg1 indicator:(id)arg2 ;
-(id)init;
-(NSData *)tokenData;
-(void)setTokenData:(NSData *)arg1 ;
-(NSString *)indicator;
-(void)setIndicator:(NSString *)arg1 ;
-(ACFPrincipal *)principal;
-(void)setPrincipal:(ACFPrincipal *)arg1 ;
@end
