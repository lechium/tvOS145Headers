/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:15 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PKLabeledValue : NSObject <NSSecureCoding> {

	NSString* _label;
	NSString* _value;

}

@property (nonatomic,copy,readonly) NSString * label;              //@synthesize label=_label - In the implementation block
@property (nonatomic,copy,readonly) NSString * value;              //@synthesize value=_value - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)value;
-(NSString *)label;
-(id)initWithLabel:(id)arg1 value:(id)arg2 ;
@end

