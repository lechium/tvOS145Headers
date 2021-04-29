/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:59 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleMediaServices/AMSTask.h>

@class ACAccount, NSUUID, UIViewController;

@interface AMSUIUpdateMultiUserTokenTask : AMSTask {

	ACAccount* _account;
	NSUUID* _homeIdentifier;
	UIViewController* _viewController;

}

@property (nonatomic,readonly) ACAccount * account;                            //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) NSUUID * homeIdentifier;                        //@synthesize homeIdentifier=_homeIdentifier - In the implementation block
@property (nonatomic,readonly) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
-(ACAccount *)account;
-(UIViewController *)viewController;
-(NSUUID *)homeIdentifier;
@end

