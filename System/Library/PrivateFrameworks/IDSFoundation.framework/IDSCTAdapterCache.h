/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:43 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface IDSCTAdapterCache : NSObject {

	unsigned long long _dualSIMEnabled;
	unsigned long long _isAnySIMUsable;
	unsigned long long _isAnySIMInserted;
	unsigned long long _supportsIdentification;
	NSArray* _sims;

}

@property (assign,nonatomic) unsigned long long dualSIMEnabled;                      //@synthesize dualSIMEnabled=_dualSIMEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long isAnySIMUsable;                      //@synthesize isAnySIMUsable=_isAnySIMUsable - In the implementation block
@property (assign,nonatomic) unsigned long long isAnySIMInserted;                    //@synthesize isAnySIMInserted=_isAnySIMInserted - In the implementation block
@property (assign,nonatomic) unsigned long long supportsIdentification;              //@synthesize supportsIdentification=_supportsIdentification - In the implementation block
@property (nonatomic,retain) NSArray * sims;                                         //@synthesize sims=_sims - In the implementation block
-(id)debugDescription;
-(unsigned long long)dualSIMEnabled;
-(void)setDualSIMEnabled:(unsigned long long)arg1 ;
-(unsigned long long)isAnySIMUsable;
-(void)setIsAnySIMUsable:(unsigned long long)arg1 ;
-(unsigned long long)isAnySIMInserted;
-(void)setIsAnySIMInserted:(unsigned long long)arg1 ;
-(unsigned long long)supportsIdentification;
-(void)setSupportsIdentification:(unsigned long long)arg1 ;
-(NSArray *)sims;
-(void)setSims:(NSArray *)arg1 ;
@end

