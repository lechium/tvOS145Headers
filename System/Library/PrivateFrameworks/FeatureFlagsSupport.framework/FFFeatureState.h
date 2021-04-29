/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:32 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/FeatureFlagsSupport.framework/FeatureFlagsSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSString;

@interface FFFeatureState : NSObject {

	BOOL _hidden;
	NSDictionary* _attributes;
	NSString* _domain;
	NSString* _feature;
	long long _value;

}

@property (nonatomic,retain) NSDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,retain) NSString * domain;                      //@synthesize domain=_domain - In the implementation block
@property (nonatomic,retain) NSString * feature;                     //@synthesize feature=_feature - In the implementation block
@property (assign,nonatomic) BOOL hidden;                            //@synthesize hidden=_hidden - In the implementation block
@property (assign,nonatomic) long long value;                        //@synthesize value=_value - In the implementation block
-(id)description;
-(NSString *)domain;
-(long long)value;
-(void)setDomain:(NSString *)arg1 ;
-(void)setValue:(long long)arg1 ;
-(NSDictionary *)attributes;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(NSString *)feature;
-(BOOL)hidden;
-(void)setHidden:(BOOL)arg1 ;
-(void)setFeature:(NSString *)arg1 ;
-(id)initWithDomain:(id)arg1 feature:(id)arg2 value:(long long)arg3 hidden:(BOOL)arg4 attributes:(id)arg5 ;
-(id)initWithDomain:(id)arg1 feature:(id)arg2 value:(long long)arg3 ;
@end

