/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:05 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>

@class CNAccountsAndGroupsItem;

@interface CNAccountsAndGroupsTableViewCell : UITableViewCell {

	CNAccountsAndGroupsItem* _item;

}

@property (nonatomic,retain) CNAccountsAndGroupsItem * item;              //@synthesize item=_item - In the implementation block
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setItem:(CNAccountsAndGroupsItem *)arg1 ;
-(CNAccountsAndGroupsItem *)item;
-(void)updateFromItem;
@end
