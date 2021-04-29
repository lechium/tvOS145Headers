/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:41 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <IconServices/IconServices-Structs.h>
@class NSMutableArray;

@interface ISHintedValue : NSObject {

	unsigned long long _options;
	NSMutableArray* _dimensions;
	NSMutableArray* _values;

}

@property (readonly) NSMutableArray * dimensions;              //@synthesize dimensions=_dimensions - In the implementation block
@property (readonly) NSMutableArray * values;                  //@synthesize values=_values - In the implementation block
@property (assign) unsigned long long options;                 //@synthesize options=_options - In the implementation block
-(id)init;
-(NSMutableArray *)values;
-(unsigned long long)options;
-(void)setOptions:(unsigned long long)arg1 ;
-(id)initWithOptions:(unsigned long long)arg1 ;
-(NSMutableArray *)dimensions;
-(long long)indexForSize:(CGSize)arg1 ;
-(id)hintedValueForIndex:(long long)arg1 ;
-(void)addHintedValue:(id)arg1 forSize:(CGSize)arg2 ;
-(id)hintedValueForSize:(CGSize)arg1 ;
-(BOOL)sizeOutsideHintedRange:(CGSize)arg1 ;
-(double)scaleFactorForSize:(CGSize)arg1 ;
-(double)interpolationFactorForSize:(CGSize)arg1 ;
@end

