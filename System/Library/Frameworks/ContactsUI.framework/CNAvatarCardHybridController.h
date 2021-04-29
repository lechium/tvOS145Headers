/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:07 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsUI/ContactsUI-Structs.h>
#import <ContactsUI/CNAvatarCardController.h>
#import <libobjc.A.dylib/CNAvatarCardViewControllerDelegate.h>
#import <UIKit/UIAlertControllerSystemProvidedPresentationDelegate.h>

@class CNAvatarCardViewController, UIAlertController, NSString;

@interface CNAvatarCardHybridController : CNAvatarCardController <CNAvatarCardViewControllerDelegate, UIAlertControllerSystemProvidedPresentationDelegate> {

	CNAvatarCardViewController* _cardViewController;
	UIAlertController* _alertController;

}

@property (nonatomic,retain) CNAvatarCardViewController * cardViewController;              //@synthesize cardViewController=_cardViewController - In the implementation block
@property (nonatomic,retain) UIAlertController * alertController;                          //@synthesize alertController=_alertController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)isVisible;
-(void)setSourceView:(id)arg1 ;
-(void)setContacts:(id)arg1 ;
-(void)cardViewControllerDidUpdatePreferredSize:(id)arg1 ;
-(id)cardViewController:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3 ;
-(void)cardViewController:(id)arg1 willShowActions:(id)arg2 ;
-(void)dismissAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(UIAlertController *)alertController;
-(id)_presentingViewControllerForSystemProvidedPresentationOfAlertController:(id)arg1 ;
-(BOOL)_shouldPerformSystemProvidedPresentationOfAlertController:(id)arg1 atSystemProvidedPresentationRegisteredViewLocation:(CGPoint)arg2 ;
-(void)_willBeginSystemProvidedPresentationOfAlertController:(id)arg1 ;
-(void)_didBeginSystemProvidedPresentationOfAlertController:(id)arg1 ;
-(void)presentAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_setupCardViewControllerWithContacts:(id)arg1 ;
-(CNAvatarCardViewController *)cardViewController;
-(void)setCardViewController:(CNAvatarCardViewController *)arg1 ;
-(void)_setupAlertController;
-(void)_prepareAlertController;
-(void)cardViewControllerWillDismiss:(id)arg1 ;
-(void)cardViewControllerDidDismiss:(id)arg1 ;
-(id)preparedViewControllerForPresentationWithGestureRecognizer:(id)arg1 ;
@end
