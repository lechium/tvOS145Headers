/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface _CDDiagnosticDataReporter : NSObject
+(void)clearScalarKey:(id)arg1 ;
+(void)setValue:(long long)arg1 forScalarKey:(id)arg2 ;
+(void)clearDistributionKey:(id)arg1 ;
+(void)setValue:(double)arg1 forDistributionKey:(id)arg2 ;
+(void)addValue:(long long)arg1 forScalarKey:(id)arg2 ;
+(void)setValue:(long long)arg1 forScalarKey:(id)arg2 limitingSigDigs:(unsigned long long)arg3 ;
+(void)pushValue:(double)arg1 forDistributionKey:(id)arg2 ;
@end

