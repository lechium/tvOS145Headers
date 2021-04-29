/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:59 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleMediaServicesUI/AppleMediaServicesUI-Structs.h>
#import <libobjc.A.dylib/AMSUIWebPageProvider.h>

@protocol AMSUIWebActionRunnable;
@class AMSUIWebNavigationBarModel, NSString, AMSMetricsEvent, AMSUIWebClientContext, UIViewController;

@interface AMSUIWebCameraReaderPageModel : NSObject <AMSUIWebPageProvider> {

	NSString* _backgroundColor;
	AMSMetricsEvent* _impressionEvent;
	AMSUIWebNavigationBarModel* _navigationBar;
	NSString* _bottomLinkLabel;
	id<AMSUIWebActionRunnable> _bottomLinkAction;
	long long _pageType;
	NSString* _primaryLabel;
	NSString* _secondaryLabel;
	id<AMSUIWebActionRunnable> _action;
	AMSUIWebClientContext* _context;
	UIViewController* _presentedViewController;
	CGSize _windowSize;

}

@property (nonatomic,retain) id<AMSUIWebActionRunnable> action;                              //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) AMSUIWebClientContext * context;                                //@synthesize context=_context - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presentedViewController;              //@synthesize presentedViewController=_presentedViewController - In the implementation block
@property (nonatomic,retain) NSString * bottomLinkLabel;                                     //@synthesize bottomLinkLabel=_bottomLinkLabel - In the implementation block
@property (nonatomic,retain) id<AMSUIWebActionRunnable> bottomLinkAction;                    //@synthesize bottomLinkAction=_bottomLinkAction - In the implementation block
@property (assign,nonatomic) long long pageType;                                             //@synthesize pageType=_pageType - In the implementation block
@property (nonatomic,retain) NSString * primaryLabel;                                        //@synthesize primaryLabel=_primaryLabel - In the implementation block
@property (nonatomic,retain) NSString * secondaryLabel;                                      //@synthesize secondaryLabel=_secondaryLabel - In the implementation block
@property (nonatomic,readonly) AMSUIWebNavigationBarModel * navigationBar;                   //@synthesize navigationBar=_navigationBar - In the implementation block
@property (nonatomic,readonly) NSString * backgroundColor;                                   //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) AMSMetricsEvent * impressionEvent;                            //@synthesize impressionEvent=_impressionEvent - In the implementation block
@property (nonatomic,readonly) BOOL disableReappearPlaceholder; 
@property (nonatomic,readonly) CGSize windowSize;                                            //@synthesize windowSize=_windowSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(AMSUIWebClientContext *)context;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(id<AMSUIWebActionRunnable>)action;
-(void)setAction:(id<AMSUIWebActionRunnable>)arg1 ;
-(NSString *)backgroundColor;
-(CGSize)windowSize;
-(UIViewController *)presentedViewController;
-(long long)pageType;
-(void)setPageType:(long long)arg1 ;
-(AMSUIWebNavigationBarModel *)navigationBar;
-(NSString *)primaryLabel;
-(NSString *)secondaryLabel;
-(void)setPrimaryLabel:(NSString *)arg1 ;
-(void)setSecondaryLabel:(NSString *)arg1 ;
-(AMSMetricsEvent *)impressionEvent;
-(void)setPresentedViewController:(UIViewController *)arg1 ;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(id<AMSUIWebActionRunnable>)bottomLinkAction;
-(void)setBottomLinkAction:(id<AMSUIWebActionRunnable>)arg1 ;
-(id)createViewController;
-(BOOL)disableReappearPlaceholder;
-(NSString *)bottomLinkLabel;
-(void)setBottomLinkLabel:(NSString *)arg1 ;
@end

