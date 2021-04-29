/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:51 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DeviceManagement/DeviceManagement-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface DMFEffectivePolicy : NSObject <NSCopying, NSSecureCoding> {

	NSString* _type;
	NSDictionary* _currentPoliciesByIdentifier;
	NSDictionary* _prioritiesByIdentifier;
	long long _defaultPolicy;
	unsigned long long _defaultPriority;

}

@property (nonatomic,copy,readonly) NSDictionary * currentPoliciesByIdentifier;              //@synthesize currentPoliciesByIdentifier=_currentPoliciesByIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * prioritiesByIdentifier;                   //@synthesize prioritiesByIdentifier=_prioritiesByIdentifier - In the implementation block
@property (nonatomic,readonly) long long defaultPolicy;                                      //@synthesize defaultPolicy=_defaultPolicy - In the implementation block
@property (nonatomic,readonly) unsigned long long defaultPriority;                           //@synthesize defaultPriority=_defaultPriority - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                                         //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL downtimeEnforced; 
+(BOOL)supportsSecureCoding;
+(id)unblockableBundleIdentifiers;
+(id)unblockableCategoryIdentifiers;
+(id)systemCategoryIdentifiers;
+(id)downtimeCategoryIdentifiers;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)type;
-(long long)defaultPolicy;
-(unsigned long long)defaultPriority;
-(long long)policyForIdentifier:(id)arg1 ;
-(BOOL)downtimeEnforced;
-(id)initWithType:(id)arg1 defaultPolicy:(long long)arg2 currentPoliciesByIdentifier:(id)arg3 defaultPriority:(unsigned long long)arg4 prioritiesByIdentifier:(id)arg5 ;
-(NSDictionary *)currentPoliciesByIdentifier;
-(NSDictionary *)prioritiesByIdentifier;
-(long long)priorityForIdentifier:(id)arg1 ;
-(id)_valueForMatchingHostName:(id)arg1 inRegisteredHostNames:(id)arg2 ;
-(long long)policyForHostName:(id)arg1 ;
-(unsigned long long)priorityForHostName:(id)arg1 ;
@end

