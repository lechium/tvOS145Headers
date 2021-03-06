/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@protocol NSObject;
@class NSString, NSNumber, NSData;

@interface HMFPreference : HMFObject {

	NSString* _key;
	unsigned long long _options;
	id<NSObject> _value;
	HMFPreference* _parent;

}

@property (readonly) NSString * key;                                     //@synthesize key=_key - In the implementation block
@property (readonly) unsigned long long options;                         //@synthesize options=_options - In the implementation block
@property (copy) id<NSObject> value;                                     //@synthesize value=_value - In the implementation block
@property (__weak,readonly) HMFPreference * parent;                      //@synthesize parent=_parent - In the implementation block
@property (nonatomic,readonly) BOOL boolValue; 
@property (nonatomic,copy,readonly) NSNumber * numberValue; 
@property (nonatomic,copy,readonly) NSString * stringValue; 
@property (nonatomic,copy,readonly) NSData * dataValue; 
+(id)shortDescription;
-(id)init;
-(BOOL)boolValue;
-(NSString *)stringValue;
-(id<NSObject>)value;
-(void)setValue:(id<NSObject>)arg1 ;
-(unsigned long long)options;
-(NSString *)key;
-(HMFPreference *)parent;
-(id)shortDescription;
-(NSData *)dataValue;
-(NSNumber *)numberValue;
-(id)initWithKey:(id)arg1 options:(unsigned long long)arg2 defaultValue:(id)arg3 ;
-(id)initWithKey:(id)arg1 options:(unsigned long long)arg2 defaultValue:(id)arg3 parent:(id)arg4 ;
@end

