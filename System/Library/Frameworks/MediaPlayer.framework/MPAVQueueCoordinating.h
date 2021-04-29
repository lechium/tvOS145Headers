/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:43 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class MPAVItem, NSArray;


@protocol MPAVQueueCoordinating <NSObject>
@property (nonatomic,readonly) MPAVItem * currentItem; 
@property (assign,nonatomic) BOOL shouldExpectEmptyQueue; 
@property (assign,nonatomic) BOOL shouldDeferItemLoading; 
@property (nonatomic,readonly) NSArray * items; 
@required
-(void)reset;
-(NSArray *)items;
-(MPAVItem *)currentItem;
-(void)reloadItemsKeepingCurrentItem:(BOOL)arg1;
-(BOOL)shouldExpectEmptyQueue;
-(void)setShouldExpectEmptyQueue:(BOOL)arg1;
-(BOOL)shouldDeferItemLoading;
-(void)setShouldDeferItemLoading:(BOOL)arg1;

@end

