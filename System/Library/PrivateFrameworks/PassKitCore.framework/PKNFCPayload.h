/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface PKNFCPayload : NSObject <NSSecureCoding, NSCopying> {

	BOOL _requiresAuthentication;
	NSString* _message;
	NSData* _encryptionPublicKeyData;

}

@property (nonatomic,copy) NSString * message;                            //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSData * encryptionPublicKeyData;              //@synthesize encryptionPublicKeyData=_encryptionPublicKeyData - In the implementation block
@property (assign,nonatomic) BOOL requiresAuthentication;                 //@synthesize requiresAuthentication=_requiresAuthentication - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(void)setRequiresAuthentication:(BOOL)arg1 ;
-(BOOL)requiresAuthentication;
-(BOOL)isEqualToPKNFCPayload:(id)arg1 ;
-(id)initWithNFCDictionary:(id)arg1 ;
-(NSData *)encryptionPublicKeyData;
-(void)setEncryptionPublicKeyData:(NSData *)arg1 ;
@end

