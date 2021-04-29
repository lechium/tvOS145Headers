/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:05 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol CNContactGroupPickerDelegate;
@class NSArray, UITableView, NSString;

@interface CNContactGroupPickerViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	NSArray* _pickableGroups;
	UITableView* _tableView;
	id<CNContactGroupPickerDelegate> _groupPickerDelegate;

}

@property (assign,nonatomic,__weak) id<CNContactGroupPickerDelegate> groupPickerDelegate;              //@synthesize groupPickerDelegate=_groupPickerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)pickableGroupsWithPickedGroups:(id)arg1 ;
+(id)propertySections;
+(BOOL)propertiesLeftToPickWithPickedGroups:(id)arg1 ;
-(void)dealloc;
-(void)cancel:(id)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3 ;
-(id<CNContactGroupPickerDelegate>)groupPickerDelegate;
-(void)setGroupPickerDelegate:(id<CNContactGroupPickerDelegate>)arg1 ;
-(id)_loadPickableGroupsWithPickedGroups:(id)arg1 ;
-(id)initWithGroups:(id)arg1 ;
@end

