/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:12 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MPUActionTableViewDataSource <UITableViewDataSource>
@required
+(id)actionCellConfigurationClasses;
+(id)actionCellConfigurationClassesForLocation:(unsigned long long)arg1;
-(void)reloadActionRowsAnimated:(BOOL)arg1;
-(Class)cellConfigurationForIndexPath:(id)arg1;
-(long long)numberOfTopActionRowsInTableView:(id)arg1;
-(long long)numberOfBottomActionRowsInTableView:(id)arg1;
-(BOOL)shouldShowActionCellConfiguration:(Class)arg1;
-(long long)numberOfActionRowsInTableView:(id)arg1;

@end
