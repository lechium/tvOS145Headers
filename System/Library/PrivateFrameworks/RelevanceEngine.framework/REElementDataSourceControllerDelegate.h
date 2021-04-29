/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:15 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol REElementDataSourceControllerDelegate <NSObject>
@required
-(void)elementDataSourceController:(id)arg1 didRemoveElement:(id)arg2;
-(void)elementDataSourceController:(id)arg1 didAddElement:(id)arg2 toSection:(id)arg3;
-(void)elementDataSourceController:(id)arg1 didReloadElement:(id)arg2;
-(void)elementDataSourceController:(id)arg1 didRefreshElement:(id)arg2;
-(BOOL)elementDataSourceController:(id)arg1 isElementVisible:(id)arg2;
-(void)elementDataSourceController:(id)arg1 performBatchUpdates:(/*^block*/id)arg2;

@end

