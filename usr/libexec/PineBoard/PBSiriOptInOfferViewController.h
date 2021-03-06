//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class OBPrivacyFlow, OBPrivacySplashController, PBFeatureInfoViewController, UIView;
@protocol PBSiriOptInOfferViewControllerDelegate;

@interface PBSiriOptInOfferViewController : UIViewController
{
    _Bool _offerDictationOnly;	// 8 = 0x8
    _Bool _termsVisible;	// 9 = 0x9
    id <PBSiriOptInOfferViewControllerDelegate> _delegate;	// 16 = 0x10
    UIView *_dialogContainerView;	// 24 = 0x18
    PBFeatureInfoViewController *_featureInfoViewController;	// 32 = 0x20
    OBPrivacySplashController *_termsViewController;	// 40 = 0x28
    OBPrivacyFlow *_privacyFlow;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000010018e470
@property(readonly, nonatomic) OBPrivacyFlow *privacyFlow; // @synthesize privacyFlow=_privacyFlow;
@property(readonly, nonatomic) OBPrivacySplashController *termsViewController; // @synthesize termsViewController=_termsViewController;
@property(readonly, nonatomic) PBFeatureInfoViewController *featureInfoViewController; // @synthesize featureInfoViewController=_featureInfoViewController;
@property(readonly, nonatomic) UIView *dialogContainerView; // @synthesize dialogContainerView=_dialogContainerView;
@property(nonatomic) _Bool termsVisible; // @synthesize termsVisible=_termsVisible;
@property(nonatomic) __weak id <PBSiriOptInOfferViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool offerDictationOnly; // @synthesize offerDictationOnly=_offerDictationOnly;
- (void)_readAboutText:(id)arg1;	// IMP=0x000000010018de88
- (void)_didNotCompleteOptIn;	// IMP=0x000000010018de34
- (void)_optOut:(id)arg1;	// IMP=0x000000010018ddac
- (void)_optIn:(id)arg1;	// IMP=0x000000010018dd24
- (void)_handleHomeButton:(id)arg1;	// IMP=0x000000010018dc14
- (void)_handleMenuButton:(id)arg1;	// IMP=0x000000010018dad0
- (id)preferredFocusEnvironments;	// IMP=0x000000010018da3c
- (void)viewDidLoad;	// IMP=0x000000010018d278
- (id)initWithOfferDictationOnly:(_Bool)arg1;	// IMP=0x000000010018d1a4

@end

