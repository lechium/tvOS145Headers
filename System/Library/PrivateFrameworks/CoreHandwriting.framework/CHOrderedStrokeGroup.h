/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHStrokeGroup.h>

@class NSArray;

@interface CHOrderedStrokeGroup : CHStrokeGroup {

	NSArray* _orderedStrokeIdentifiers;

}

@property (nonatomic,retain,readonly) NSArray * orderedStrokeIdentifiers;              //@synthesize orderedStrokeIdentifiers=_orderedStrokeIdentifiers - In the implementation block
-(void)dealloc;
-(NSArray *)orderedStrokeIdentifiers;
-(id)initWithAncestorIdentifier:(long long)arg1 strokeIdentifiers:(id)arg2 firstStrokeIdentifier:(id)arg3 lastStrokeIdentifier:(id)arg4 bounds:(CGRect)arg5 classification:(long long)arg6 groupingConfidence:(double)arg7 strategyIdentifier:(id)arg8 firstStrokeOrigin:(CGPoint)arg9 orderedStrokeIdentifiers:(id)arg10 ;
-(id)initWithUniqueIdentifier:(long long)arg1 ancestorIdentifier:(long long)arg2 strokeIdentifiers:(id)arg3 firstStrokeIdentifier:(id)arg4 lastStrokeIdentifier:(id)arg5 bounds:(CGRect)arg6 classification:(long long)arg7 groupingConfidence:(double)arg8 strategyIdentifier:(id)arg9 firstStrokeOrigin:(CGPoint)arg10 orderedStrokeIdentifiers:(id)arg11 ;
@end

