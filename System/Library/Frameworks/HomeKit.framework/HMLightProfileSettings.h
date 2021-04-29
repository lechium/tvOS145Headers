/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface HMLightProfileSettings : NSObject <HMFObject, NSSecureCoding> {

	BOOL _naturalLightingEnabled;
	unsigned long long _supportedFeatures;

}

@property (getter=isNaturalLightingEnabled,readonly) BOOL naturalLightingEnabled;              //@synthesize naturalLightingEnabled=_naturalLightingEnabled - In the implementation block
@property (readonly) unsigned long long supportedFeatures;                                     //@synthesize supportedFeatures=_supportedFeatures - In the implementation block
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)shortDescription;
-(NSString *)privateDescription;
-(unsigned long long)supportedFeatures;
-(NSArray *)attributeDescriptions;
-(BOOL)isNaturalLightingEnabled;
-(id)initWithSupportedFeatures:(unsigned long long)arg1 naturalLightingEnabled:(BOOL)arg2 ;
@end
