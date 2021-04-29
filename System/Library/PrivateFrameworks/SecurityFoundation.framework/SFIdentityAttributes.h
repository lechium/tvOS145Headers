/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/SFKeychainItemAttributes.h>

@class NSString, _SFAsymmetricKeySpecifier;

@interface SFIdentityAttributes : NSObject <SFKeychainItemAttributes> {

	id _identityAttributesInternal;
	NSString* persistentIdentifier;
	NSString* _privateKeyDomain;

}

@property (nonatomic,copy) NSString * identityName; 
@property (nonatomic,copy,readonly) _SFAsymmetricKeySpecifier * keySpecifier; 
@property (nonatomic,readonly) BOOL hasCertificate; 
@property (nonatomic,copy,readonly) NSString * privateKeyDomain;                           //@synthesize privateKeyDomain=_privateKeyDomain - In the implementation block
@property (nonatomic,copy) NSString * localizedLabel; 
@property (nonatomic,copy) NSString * localizedDescription; 
@property (nonatomic,copy,readonly) NSString * persistentIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)localizedDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)persistentIdentifier;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(BOOL)hasCertificate;
-(NSString *)localizedLabel;
-(_SFAsymmetricKeySpecifier *)keySpecifier;
-(void)setLocalizedLabel:(NSString *)arg1 ;
-(NSString *)privateKeyDomain;
-(void)setKeySpecifier:(_SFAsymmetricKeySpecifier *)arg1 ;
-(NSString *)identityName;
-(void)setIdentityName:(NSString *)arg1 ;
@end

