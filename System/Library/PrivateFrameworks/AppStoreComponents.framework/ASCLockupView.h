/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppStoreComponents/AppStoreComponents-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/ASCLockupPresenterObserver.h>
#import <libobjc.A.dylib/ASCOfferPresenterObserver.h>

@protocol ASCLockupViewDelegate;
@class ASCLockupContentView, ASCOfferPresenter, ASCAppearMetricsPresenter, ASCLockupPresenter, NSString, UIViewController, ASCMetricsActivity, ASCOfferTheme, ASCLockup, ASCLockupViewGroup, ASCLockupRequest;

@interface ASCLockupView : UIView <ASCLockupPresenterObserver, ASCOfferPresenterObserver> {

	SCD_Struct_AS4 _delegateRespondsTo;
	BOOL _automaticallyPresentsProductDetails;
	id<ASCLockupViewDelegate> _delegate;
	ASCLockupContentView* _contentView;
	ASCOfferPresenter* _offerPresenter;
	ASCAppearMetricsPresenter* _metricsPresenter;
	ASCLockupPresenter* _lockupPresenter;
	NSString* _storeSheetHostBundleID;
	NSString* _storeSheetUsageContext;

}

@property (nonatomic,retain) NSString * storeSheetHostBundleID; 
@property (nonatomic,retain) NSString * storeSheetUsageContext; 
@property (nonatomic,readonly) ASCLockupContentView * contentView;                        //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) ASCOfferPresenter * offerPresenter;                        //@synthesize offerPresenter=_offerPresenter - In the implementation block
@property (nonatomic,readonly) ASCAppearMetricsPresenter * metricsPresenter;              //@synthesize metricsPresenter=_metricsPresenter - In the implementation block
@property (nonatomic,readonly) ASCLockupPresenter * lockupPresenter;                      //@synthesize lockupPresenter=_lockupPresenter - In the implementation block
@property (nonatomic,retain) NSString * storeSheetHostBundleID;                           //@synthesize storeSheetHostBundleID=_storeSheetHostBundleID - In the implementation block
@property (nonatomic,retain) NSString * storeSheetUsageContext;                           //@synthesize storeSheetUsageContext=_storeSheetUsageContext - In the implementation block
@property (nonatomic,readonly) UIViewController * presentingViewController; 
@property (assign,nonatomic) BOOL automaticallyGeneratesAppearMetrics; 
@property (nonatomic,copy) ASCMetricsActivity * appearMetricsActivity; 
@property (nonatomic,copy) ASCOfferTheme * offerTheme; 
@property (nonatomic,retain) NSString * size; 
@property (nonatomic,copy) ASCLockup * lockup; 
@property (nonatomic,retain) ASCLockupViewGroup * group; 
@property (nonatomic,copy) ASCLockupRequest * request; 
@property (assign,nonatomic,__weak) id<ASCLockupViewDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL automaticallyPresentsProductDetails;                    //@synthesize automaticallyPresentsProductDetails=_automaticallyPresentsProductDetails - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSString *)size;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<ASCLockupViewDelegate>)delegate;
-(void)setDelegate:(id<ASCLockupViewDelegate>)arg1 ;
-(void)setGroup:(ASCLockupViewGroup *)arg1 ;
-(ASCLockupRequest *)request;
-(ASCLockupViewGroup *)group;
-(void)setSize:(NSString *)arg1 ;
-(void)setRequest:(ASCLockupRequest *)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(id)accessibilityLabel;
-(BOOL)isAccessibilityElement;
-(unsigned long long)accessibilityTraits;
-(ASCLockupContentView *)contentView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIViewController *)presentingViewController;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)layoutSubviews;
-(BOOL)isHighlighted;
-(void)didMoveToWindow;
-(void)setLayoutMargins:(UIEdgeInsets)arg1 ;
-(void)layoutMarginsDidChange;
-(void)invalidateIntrinsicContentSize;
-(ASCLockup *)lockup;
-(BOOL)accessibilityActivate;
-(void)setLockup:(ASCLockup *)arg1 ;
-(void)setAutomaticallyPresentsProductDetails:(BOOL)arg1 ;
-(void)presentProductDetailsViewController;
-(ASCOfferPresenter *)offerPresenter;
-(ASCAppearMetricsPresenter *)metricsPresenter;
-(void)lockupPresenterDidBeginRequest;
-(void)lockupPresenterDidFinishRequest;
-(void)lockupPresenterDidFailRequestWithError:(id)arg1 ;
-(void)setViewRenderSpanProvider:(/*^block*/id)arg1 ;
-(BOOL)automaticallyPresentsProductDetails;
-(void)setOfferTheme:(ASCOfferTheme *)arg1 ;
-(void)offerPresenterWillPerformActionOfOffer:(id)arg1 inState:(id)arg2 withActivity:(inout id*)arg3 ;
-(void)offerPresenterDidObserveChangeToState:(id)arg1 ;
-(NSString *)storeSheetHostBundleID;
-(NSString *)storeSheetUsageContext;
-(ASCLockupPresenter *)lockupPresenter;
-(void)performLockupAction;
-(ASCOfferTheme *)offerTheme;
-(void)layoutContentView;
-(BOOL)automaticallyGeneratesAppearMetrics;
-(void)setAutomaticallyGeneratesAppearMetrics:(BOOL)arg1 ;
-(ASCMetricsActivity *)appearMetricsActivity;
-(void)setAppearMetricsActivity:(ASCMetricsActivity *)arg1 ;
-(void)setStoreSheetHostBundleID:(NSString *)arg1 ;
-(void)setStoreSheetUsageContext:(NSString *)arg1 ;
@end
