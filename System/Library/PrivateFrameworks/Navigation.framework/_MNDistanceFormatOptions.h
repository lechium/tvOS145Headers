/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:00 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface _MNDistanceFormatOptions : NSObject {

	BOOL _metric;
	BOOL _yards;
	BOOL _abbreviateUnits;
	BOOL _spoken;
	unsigned long long _minimumFractionDigits;
	unsigned long long _maximumFractionDigits;
	long long _rounding;

}

@property (assign,nonatomic) unsigned long long minimumFractionDigits;              //@synthesize minimumFractionDigits=_minimumFractionDigits - In the implementation block
@property (assign,nonatomic) unsigned long long maximumFractionDigits;              //@synthesize maximumFractionDigits=_maximumFractionDigits - In the implementation block
@property (assign,nonatomic) BOOL metric;                                           //@synthesize metric=_metric - In the implementation block
@property (assign,nonatomic) BOOL yards;                                            //@synthesize yards=_yards - In the implementation block
@property (assign,nonatomic) BOOL abbreviateUnits;                                  //@synthesize abbreviateUnits=_abbreviateUnits - In the implementation block
@property (assign,nonatomic) BOOL spoken;                                           //@synthesize spoken=_spoken - In the implementation block
@property (assign,nonatomic) long long rounding;                                    //@synthesize rounding=_rounding - In the implementation block
-(BOOL)yards;
-(unsigned long long)minimumFractionDigits;
-(void)setMinimumFractionDigits:(unsigned long long)arg1 ;
-(unsigned long long)maximumFractionDigits;
-(void)setMaximumFractionDigits:(unsigned long long)arg1 ;
-(BOOL)metric;
-(void)setMetric:(BOOL)arg1 ;
-(void)setYards:(BOOL)arg1 ;
-(BOOL)abbreviateUnits;
-(void)setAbbreviateUnits:(BOOL)arg1 ;
-(BOOL)spoken;
-(void)setSpoken:(BOOL)arg1 ;
-(long long)rounding;
-(void)setRounding:(long long)arg1 ;
@end
