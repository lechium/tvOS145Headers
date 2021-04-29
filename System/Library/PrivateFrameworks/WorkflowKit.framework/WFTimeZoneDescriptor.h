/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <WorkflowKit/MTLModel.h>
#import <libobjc.A.dylib/MTLJSONSerializing.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSTimeZone, NSString, NSNumber, NSDictionary;

@interface WFTimeZoneDescriptor : MTLModel <MTLJSONSerializing, NSCopying, NSSecureCoding> {

	NSTimeZone* _timeZone;
	NSString* _localizedCityName;
	NSNumber* _alCityIdentifier;

}

@property (nonatomic,readonly) NSTimeZone * timeZone;                            //@synthesize timeZone=_timeZone - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedCityName;                //@synthesize localizedCityName=_localizedCityName - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * alCityIdentifier;                 //@synthesize alCityIdentifier=_alCityIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)JSONKeyPathsByPropertyKey;
+(id)timeZoneJSONTransformer;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSTimeZone *)timeZone;
-(id)initWithALCity:(id)arg1 ;
-(id)initWithTimeZone:(id)arg1 localizedCityName:(id)arg2 alCityIdentifier:(id)arg3 ;
-(NSString *)localizedCityName;
-(NSNumber *)alCityIdentifier;
@end

