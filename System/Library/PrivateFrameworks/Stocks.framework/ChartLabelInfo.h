/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Stocks/Stocks-Structs.h>
@class NSString;

@interface ChartLabelInfo : NSObject {

	NSString* _string;
	CGSize _size;
	double _position;
	BOOL _immutable;

}

@property (nonatomic,retain) NSString * string;              //@synthesize string=_string - In the implementation block
@property (assign,nonatomic) CGSize size;                    //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) double position;                //@synthesize position=_position - In the implementation block
@property (nonatomic,readonly) BOOL immutable;               //@synthesize immutable=_immutable - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(CGSize)size;
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(double)position;
-(void)setPosition:(double)arg1 ;
-(BOOL)immutable;
-(void)setSize:(CGSize)arg1 ;
-(void)setImmutable:(BOOL)arg1 ;
-(void)setStringToMonthAndDayWithDate:(id)arg1 timeZone:(id)arg2 ;
-(void)setStringToYearWithDate:(id)arg1 timeZone:(id)arg2 ;
-(void)retainStringAndSizeFromLabelInfo:(id)arg1 ;
@end
