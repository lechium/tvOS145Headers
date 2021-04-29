/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSObjectNSSecureCoding;
@class NSNumber;

@interface WFGranularAccessResourcePerWorkflowStateEntry : NSObject <NSSecureCoding> {

	id<NSObject><NSSecureCoding> _value;
	NSNumber* _authorized;

}

@property (nonatomic,readonly) id<NSObject><NSSecureCoding> value;              //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSNumber * authorized;                           //@synthesize authorized=_authorized - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)valueTypeClass;
+(id)valueKey;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<NSObject><NSSecureCoding>)value;
-(id)initWithValue:(id)arg1 ;
-(NSNumber *)authorized;
-(id)initWithValue:(id)arg1 authorized:(id)arg2 ;
-(id)entryBySettingAuthorized:(BOOL)arg1 ;
@end

