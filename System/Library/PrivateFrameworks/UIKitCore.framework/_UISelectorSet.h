/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:01 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSHashTable;

@interface _UISelectorSet : NSObject <NSCopying> {

	NSHashTable* _hash;

}

@property (nonatomic,readonly) unsigned long long count; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(unsigned long long)count;
-(void)intersectSet:(id)arg1 ;
-(void)minusSet:(id)arg1 ;
-(void)unionSet:(id)arg1 ;
-(BOOL)intersectsSet:(id)arg1 ;
-(id)initWithHash:(id)arg1 ;
-(void)addSelector:(SEL)arg1 ;
-(void)enumerateSelectorsUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithSelectors:(SEL)arg1 ;
-(BOOL)containsSelector:(SEL)arg1 ;
-(void)removeSelector:(SEL)arg1 ;
-(BOOL)containsSet:(id)arg1 ;
@end

