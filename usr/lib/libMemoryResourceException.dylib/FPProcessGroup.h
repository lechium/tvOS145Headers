/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/libMemoryResourceException.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libMemoryResourceException.dylib/libMemoryResourceException.dylib-Structs.h>
#import <libMemoryResourceException.dylib/FPProcessGroupMinimal.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSDictionary;

@interface FPProcessGroup : FPProcessGroupMinimal <NSCopying> {

	unsigned _categoriesRefcount;
	NSMutableArray* _objects;
	NSDictionary* _categories;

}

@property (nonatomic,retain) NSDictionary * categories;                //@synthesize categories=_categories - In the implementation block
@property (assign,nonatomic) unsigned categoriesRefcount;              //@synthesize categoriesRefcount=_categoriesRefcount - In the implementation block
@property (nonatomic,retain) NSMutableArray * objects;                 //@synthesize objects=_objects - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addObject:(id)arg1 ;
-(NSMutableArray *)objects;
-(NSDictionary *)categories;
-(void)setCategories:(NSDictionary *)arg1 ;
-(void)setObjects:(NSMutableArray *)arg1 ;
-(void)addProcess:(id)arg1 ;
-(id)consumeCachedCategories;
-(void)attachCachedCategories:(id)arg1 refcount:(unsigned)arg2 ;
-(unsigned)categoriesRefcount;
-(void)setCategoriesRefcount:(unsigned)arg1 ;
@end

