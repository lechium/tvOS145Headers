/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:16 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PKVerificationChannel : NSObject <NSCopying, NSSecureCoding> {

	BOOL _requiresUserInteraction;
	NSString* _identifier;
	unsigned long long _type;
	NSString* _organizationName;
	NSString* _contactPoint;
	NSString* _sourceAddress;
	NSString* _typeDescription;

}

@property (nonatomic,copy) NSString * identifier;                                       //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long type;                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * typeDescription;                                  //@synthesize typeDescription=_typeDescription - In the implementation block
@property (nonatomic,copy) NSString * organizationName;                                 //@synthesize organizationName=_organizationName - In the implementation block
@property (assign,nonatomic) BOOL requiresUserInteraction;                              //@synthesize requiresUserInteraction=_requiresUserInteraction - In the implementation block
@property (nonatomic,copy) NSString * contactPoint;                                     //@synthesize contactPoint=_contactPoint - In the implementation block
@property (nonatomic,copy) NSString * sourceAddress;                                    //@synthesize sourceAddress=_sourceAddress - In the implementation block
@property (nonatomic,copy,readonly) NSString * typeDescriptionUnlocalized; 
+(BOOL)supportsSecureCoding;
+(id)verificationChannelWithDictionary:(id)arg1 andOrganizationName:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)setType:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)type;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)contactPoint;
-(void)setContactPoint:(NSString *)arg1 ;
-(NSString *)organizationName;
-(void)setOrganizationName:(NSString *)arg1 ;
-(void)setSourceAddress:(NSString *)arg1 ;
-(NSString *)sourceAddress;
-(BOOL)requiresUserInteraction;
-(NSString *)typeDescription;
-(void)setTypeDescription:(NSString *)arg1 ;
-(void)setRequiresUserInteraction:(BOOL)arg1 ;
-(NSString *)typeDescriptionUnlocalized;
-(BOOL)needsServerRequest;
@end

