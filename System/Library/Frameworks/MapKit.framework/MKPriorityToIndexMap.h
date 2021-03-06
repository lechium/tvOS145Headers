/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, NSMutableDictionary;

@interface MKPriorityToIndexMap : NSObject {

	NSMutableArray* _priorities;
	NSMutableDictionary* _prioritiesToIndexes;

}
-(id)init;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(BOOL)contains:(id)arg1 ;
-(id)initWithPriorities:(id)arg1 ;
-(BOOL)addPriorities:(id)arg1 ;
-(void)insertPriorities:(id)arg1 prioritiesToReAdd:(id)arg2 ;
-(void)appendRemainingPriorities:(id)arg1 prioritiesToReAdd:(id)arg2 ;
-(id)nextPriorityFromPriorities:(id)arg1 prioritiesToReAdd:(id)arg2 ;
-(long long)indexOfPriority:(double)arg1 ;
-(double)priorityOfIndex:(unsigned long long)arg1 ;
-(BOOL)containsPriority:(double)arg1 ;
@end

