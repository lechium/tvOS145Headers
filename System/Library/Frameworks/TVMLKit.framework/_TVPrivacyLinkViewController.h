/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@class IKViewElement, OBPrivacyLinkController;

@interface _TVPrivacyLinkViewController : UIViewController {

	IKViewElement* _viewElement;
	OBPrivacyLinkController* _impl;

}

@property (nonatomic,retain) OBPrivacyLinkController * impl;              //@synthesize impl=_impl - In the implementation block
@property (nonatomic,readonly) IKViewElement * viewElement;               //@synthesize viewElement=_viewElement - In the implementation block
-(void)loadView;
-(OBPrivacyLinkController *)impl;
-(void)setImpl:(OBPrivacyLinkController *)arg1 ;
-(IKViewElement *)viewElement;
-(void)updateWithViewElement:(id)arg1 ;
@end

