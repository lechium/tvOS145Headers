/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMObjectMerge.h>
#import <libobjc.A.dylib/HMFDumpState.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSUUID;

@interface HMAccessoryCategory : NSObject <NSSecureCoding, HMObjectMerge, HMFDumpState, NSCopying> {

	NSString* _categoryType;
	NSString* _name;

}

@property (nonatomic,copy) NSString * categoryType;                               //@synthesize categoryType=_categoryType - In the implementation block
@property (nonatomic,copy) NSString * name;                                       //@synthesize name=_name - In the implementation block
@property (readonly) BOOL isWiFiRouterAccessoryCategory; 
@property (readonly) BOOL isTelevisionAccessoryCategory; 
@property (nonatomic,copy,readonly) NSString * localizedDescription; 
@property (nonatomic,readonly) NSUUID * uniqueIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(NSString *)localizedDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(NSString *)categoryType;
-(void)setCategoryType:(NSString *)arg1 ;
-(id)dumpState;
-(id)initWithType:(id)arg1 name:(id)arg2 ;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(id)localizedDescriptionPlural;
-(BOOL)isTelevisionAccessoryCategory;
-(BOOL)isWiFiRouterAccessoryCategory;
@end

