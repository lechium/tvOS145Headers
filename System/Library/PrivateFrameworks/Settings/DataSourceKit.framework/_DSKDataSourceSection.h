/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Settings/DataSourceKit.framework/DataSourceKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableOrderedSet;

@interface _DSKDataSourceSection : NSObject {

	id _sectionItem;
	NSMutableOrderedSet* __items;

}

@property (nonatomic,retain) NSMutableOrderedSet * _items;              //@synthesize _items=__items - In the implementation block
@property (nonatomic,retain) id sectionItem;                            //@synthesize sectionItem=_sectionItem - In the implementation block
@property (nonatomic,readonly) long long numberOfItems; 
-(NSMutableOrderedSet *)_items;
-(long long)numberOfItems;
-(id)itemAtIndex:(long long)arg1 ;
-(BOOL)containsItem:(id)arg1 ;
-(void)deleteAllItems;
-(void)appendItems:(id)arg1 ;
-(void)deleteItems:(id)arg1 ;
-(void)insertItems:(id)arg1 afterItem:(id)arg2 ;
-(void)insertItems:(id)arg1 beforeItem:(id)arg2 ;
-(id)sectionItem;
-(id)initWithSectionItem:(id)arg1 ;
-(void)setSectionItem:(id)arg1 ;
-(void)set_items:(NSMutableOrderedSet *)arg1 ;
@end

