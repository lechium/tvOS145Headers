/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:00 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVContentPartnerKitUI/TVCKDataBaseQueryFilter.h>

@class NSString;

@interface TVCKDataQueryFilter : NSObject <TVCKDataBaseQueryFilter> {

	NSString* _property;
	long long _op;
	id _value;

}

@property (nonatomic,retain) NSString * property;                   //@synthesize property=_property - In the implementation block
@property (assign,nonatomic) long long op;                          //@synthesize op=_op - In the implementation block
@property (nonatomic,retain) id value;                              //@synthesize value=_value - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)filterWithProperty:(id)arg1 op:(long long)arg2 value:(id)arg3 ;
+(id)_stringFromOperator:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)value;
-(void)setValue:(id)arg1 ;
-(NSString *)property;
-(void)setProperty:(NSString *)arg1 ;
-(long long)op;
-(BOOL)isQueryFilter;
-(void)setOp:(long long)arg1 ;
-(id)initWithProperty:(id)arg1 op:(long long)arg2 value:(id)arg3 ;
@end

