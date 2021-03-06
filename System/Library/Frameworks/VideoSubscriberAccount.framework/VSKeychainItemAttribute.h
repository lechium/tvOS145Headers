/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:00 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface VSKeychainItemAttribute : NSObject <NSCopying> {

	NSString* _name;
	unsigned long long _attributeType;
	NSString* _attributeValueClassName;
	const CFStringRef _secItemAttributeKey;
	id _defaultValue;

}

@property (nonatomic,copy) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned long long attributeType;                   //@synthesize attributeType=_attributeType - In the implementation block
@property (nonatomic,copy) NSString * attributeValueClassName;                   //@synthesize attributeValueClassName=_attributeValueClassName - In the implementation block
@property (assign,nonatomic) const CFStringRef secItemAttributeKey;              //@synthesize secItemAttributeKey=_secItemAttributeKey - In the implementation block
@property (nonatomic,retain) id defaultValue;                                    //@synthesize defaultValue=_defaultValue - In the implementation block
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)attributeType;
-(void)setAttributeType:(unsigned long long)arg1 ;
-(id)defaultValue;
-(NSString *)attributeValueClassName;
-(void)setAttributeValueClassName:(NSString *)arg1 ;
-(void)setDefaultValue:(id)arg1 ;
-(void)setSecItemAttributeKey:(const CFStringRef)arg1 ;
-(const CFStringRef)secItemAttributeKey;
@end

