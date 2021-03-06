/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:16 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UINavigationController.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@class NSString;

@interface VUIAccessViewController : UINavigationController <UIViewControllerTransitioningDelegate> {

	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;                    //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)resolveBundleIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(BOOL)_grantAccessToChannelIDs:(id)arg1 isReconsent:(BOOL)arg2 ;
+(BOOL)_grantAccessToBundleIDs:(id)arg1 ;
+(void)optInUser;
+(BOOL)grantAccessToBundleIDs:(id)arg1 ;
+(id)eligibleBundleIDs;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(id)initWithBundleIDs:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithChannels:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

