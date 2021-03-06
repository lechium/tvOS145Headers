/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:51 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Preferences/PSListController.h>

@class PSSpecifier;

@interface PSAccountsClientListController : PSListController {

	BOOL _noAccountsSetUp;
	BOOL _showExtraVC;
	PSSpecifier* _accountSpecifier;
	id _acObserver;
	int accountUpdateThrottle;

}
-(id)init;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)specifierForID:(id)arg1 ;
-(void)setSpecifiers:(id)arg1 ;
-(void)updateAccountSpecifier;
-(id)requestedAccountDataclass;
-(id)_visibleAccountTypeIDs;
-(BOOL)_isAccountModificationDisabledByRestrictions;
@end

