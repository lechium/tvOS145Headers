/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:01 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface TIAnalyticsUtil : NSObject
+(BOOL)isInteger:(id)arg1 ;
+(BOOL)isFloat:(id)arg1 ;
+(BOOL)isString:(id)arg1 ;
+(BOOL)isNumber:(id)arg1 ;
+(BOOL)isBoolean:(id)arg1 ;
+(BOOL)isArray:(id)arg1 ;
+(BOOL)isDictionary:(id)arg1 ;
+(id)toInteger:(id)arg1 ;
+(id)toFloat:(id)arg1 ;
+(id)roundCount:(id)arg1 toSignificantDigits:(long long)arg2 ;
+(id)roundNumber:(id)arg1 toSignificantDigits:(id)arg2 ;
+(id)constrainInteger:(id)arg1 toMinimum:(id)arg2 andMaximum:(id)arg3 ;
+(id)bucketNumber:(id)arg1 bucketThresholds:(id)arg2 bucketValues:(id)arg3 ;
+(id)bucketPercentageWithNumber:(id)arg1 ;
+(id)bucketPercentageWithNumerator:(id)arg1 andDenominator:(id)arg2 ;
+(id)_bucketPercentageWithValue:(double)arg1 ;
+(int)computeCommonExtentForArrays:(id)arg1 ;
+(id)indexesForValidRatiosInArray:(id)arg1 ;
@end

