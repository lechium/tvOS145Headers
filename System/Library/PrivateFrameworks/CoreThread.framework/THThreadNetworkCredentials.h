/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreThread.framework/CoreThread
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface THThreadNetworkCredentials : NSObject <NSSecureCoding> {

	unsigned char _channel;
	NSData* _masterKey;
	NSString* _passPhrase;
	NSData* _PSKc;
	NSData* _PANID;
	NSString* _userInfo;

}

@property (nonatomic,copy) NSData * masterKey;                   //@synthesize masterKey=_masterKey - In the implementation block
@property (nonatomic,copy) NSString * passPhrase;                //@synthesize passPhrase=_passPhrase - In the implementation block
@property (nonatomic,copy) NSData * PSKc;                        //@synthesize PSKc=_PSKc - In the implementation block
@property (assign,nonatomic) unsigned char channel;              //@synthesize channel=_channel - In the implementation block
@property (nonatomic,copy) NSData * PANID;                       //@synthesize PANID=_PANID - In the implementation block
@property (nonatomic,copy) NSString * userInfo;                  //@synthesize userInfo=_userInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(NSString *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setUserInfo:(NSString *)arg1 ;
-(unsigned char)channel;
-(void)setChannel:(unsigned char)arg1 ;
-(NSData *)PANID;
-(NSString *)passPhrase;
-(NSData *)PSKc;
-(NSData *)masterKey;
-(void)setMasterKey:(NSData *)arg1 ;
-(id)initWithMasterKey:(id)arg1 passPhrase:(id)arg2 PSKc:(id)arg3 channel:(unsigned char)arg4 PANID:(id)arg5 userInfo:(id)arg6 ;
-(void)setPassPhrase:(NSString *)arg1 ;
-(void)setPSKc:(NSData *)arg1 ;
-(void)setPANID:(NSData *)arg1 ;
@end

