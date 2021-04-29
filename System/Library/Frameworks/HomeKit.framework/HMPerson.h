/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString, NSSet, NSArray;

@interface HMPerson : NSObject <HMFObject, NSCopying, NSSecureCoding> {

	NSUUID* _UUID;
	NSString* _name;
	NSSet* _personLinks;

}

@property (copy) NSUUID * UUID;                                                   //@synthesize UUID=_UUID - In the implementation block
@property (copy) NSString * name;                                                 //@synthesize name=_name - In the implementation block
@property (copy) NSSet * personLinks;                                             //@synthesize personLinks=_personLinks - In the implementation block
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSUUID *)UUID;
-(NSString *)shortDescription;
-(id)initWithUUID:(id)arg1 ;
-(void)setUUID:(NSUUID *)arg1 ;
-(NSString *)privateDescription;
-(NSArray *)attributeDescriptions;
-(NSSet *)personLinks;
-(void)setPersonLinks:(NSSet *)arg1 ;
@end

