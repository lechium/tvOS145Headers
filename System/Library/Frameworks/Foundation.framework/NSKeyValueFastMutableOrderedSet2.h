/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSKeyValueFastMutableOrderedSet.h>

@class NSKeyValueGetter;

@interface NSKeyValueFastMutableOrderedSet2 : NSKeyValueFastMutableOrderedSet {

	NSKeyValueGetter* _valueGetter;

}
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(id)objectsAtIndexes:(id)arg1 ;
-(id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2 ;
-(void)_proxyNonGCFinalize;
-(id)_nonNilOrderedSetValueWithSelector:(SEL)arg1 ;
@end

