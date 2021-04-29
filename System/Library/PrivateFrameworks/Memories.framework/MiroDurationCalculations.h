/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Memories/Memories-Structs.h>
@interface MiroDurationCalculations : NSObject
+(double)durationForItemCount:(long long)arg1 inPickList:(id)arg2 withBlueprint:(id)arg3 respectTrim:(BOOL)arg4 localOnly:(BOOL)arg5 ;
+(double)rawDurationOfItems:(id)arg1 inRange:(NSRange)arg2 ;
+(long long)itemCountInPickList:(id)arg1 forDuration:(double)arg2 ;
+(double)biasedDurationOfItems:(id)arg1 inRange:(NSRange)arg2 ;
+(id)_itemsForDuration:(double)arg1 inPickList:(id)arg2 blueprint:(id)arg3 localOnly:(BOOL)arg4 respectTrim:(BOOL)arg5 ;
+(double)maxPleasantDurationOfItems:(id)arg1 inRange:(NSRange)arg2 ;
+(int)durationRangeForFrozenPickList:(id)arg1 ;
+(double)maxDurationForPickList:(id)arg1 withBlueprint:(id)arg2 ;
+(Buckets)doAllTheThingsForPickList:(id)arg1 ;
+(long long)itemCountInPickList:(id)arg1 forDuration:(double)arg2 withBlueprint:(id)arg3 respectTrim:(BOOL)arg4 outputResidual:(double*)arg5 ;
@end

