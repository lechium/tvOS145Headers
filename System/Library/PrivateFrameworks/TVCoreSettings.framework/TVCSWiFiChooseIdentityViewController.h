/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:01 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVCoreSettings.framework/TVCoreSettings
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewController.h>

@protocol TVCSWiFiChooseIdentityDelegate;
@class NSString, NSArray, UILabel;

@interface TVCSWiFiChooseIdentityViewController : UITableViewController {

	NSString* _titleText;
	id<TVCSWiFiChooseIdentityDelegate> _delegate;
	NSArray* _identities;
	NSArray* _certificates;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) NSArray * identities;                                            //@synthesize identities=_identities - In the implementation block
@property (nonatomic,readonly) NSArray * certificates;                                        //@synthesize certificates=_certificates - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                            //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,copy) NSString * titleText;                                              //@synthesize titleText=_titleText - In the implementation block
@property (assign,nonatomic,__weak) id<TVCSWiFiChooseIdentityDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<TVCSWiFiChooseIdentityDelegate>)delegate;
-(void)setDelegate:(id<TVCSWiFiChooseIdentityDelegate>)arg1 ;
-(NSArray *)certificates;
-(NSArray *)identities;
-(NSString *)titleText;
-(void)setTitleText:(NSString *)arg1 ;
-(void)viewDidLoad;
-(void)setIdentities:(NSArray *)arg1 ;
-(UILabel *)titleLabel;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithIdenities:(id)arg1 ;
@end

