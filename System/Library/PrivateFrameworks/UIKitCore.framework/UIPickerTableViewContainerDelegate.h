/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:51 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol UIPickerTableViewContainerDelegate
@optional
-(void)pickerTableView:(id)arg1 didChangeSelectionBarRowFrom:(long long)arg2 to:(long long)arg3;
-(void)_pickerTableViewDidChangeContentOffset:(id)arg1;

@required
-(void)setAllowsMultipleSelection:(BOOL)arg1;
-(BOOL)_soundsEnabled;
-(BOOL)_usesCheckSelection;
-(void)_sendCheckedRow:(long long)arg1 inTableView:(id)arg2 checked:(BOOL)arg3;

@end

