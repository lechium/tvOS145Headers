/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:51 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PageRangeDelegate <NSObject>
@required
-(void)setStartPage:(id)arg1 forPageIndex:(long long)arg2;
-(void)setEndPage:(id)arg1 forPageIndex:(long long)arg2;
-(void)addPage:(id)arg1 forPageIndex:(long long)arg2;
-(void)removePage:(id)arg1 forPageIndex:(long long)arg2;
-(void)addAllPages:(id)arg1;
-(BOOL)canSetStartPage:(id)arg1 forPageIndex:(long long)arg2;
-(BOOL)canSetEndPage:(id)arg1 forPageIndex:(long long)arg2;
-(BOOL)canAddPage:(id)arg1 forPageIndex:(long long)arg2;
-(BOOL)canRemovePage:(id)arg1 forPageIndex:(long long)arg2;
-(BOOL)canAddAllPages:(id)arg1;
-(BOOL)canShowMenuBar;

@end

