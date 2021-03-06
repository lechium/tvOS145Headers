/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:45 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSValueTransformer.h>

@class NSCalendar;

@interface WFHKGroupingIndexPathTransformer : NSValueTransformer {

	long long _groupingOption;
	NSCalendar* _conversionCalendar;

}

@property (assign,nonatomic) long long groupingOption;                     //@synthesize groupingOption=_groupingOption - In the implementation block
@property (nonatomic,retain) NSCalendar * conversionCalendar;              //@synthesize conversionCalendar=_conversionCalendar - In the implementation block
+(BOOL)allowsReverseTransformation;
+(Class)transformedValueClass;
-(id)init;
-(id)transformedValue:(id)arg1 ;
-(id)reverseTransformedValue:(id)arg1 ;
-(id)initWithGroupingOption:(long long)arg1 ;
-(long long)groupingOption;
-(void)setGroupingOption:(long long)arg1 ;
-(NSCalendar *)conversionCalendar;
-(void)setConversionCalendar:(NSCalendar *)arg1 ;
@end

