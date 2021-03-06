/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:59 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleMediaServicesUI/AppleMediaServicesUI-Structs.h>
#import <libobjc.A.dylib/AMSUIWebPageProvider.h>

@class NSString, AMSMetricsEvent, AMSUIWebNavigationBarModel, AMSUIWebClientContext;

@interface AMSUIWebLoadingPageModel : NSObject <AMSUIWebPageProvider> {

	BOOL _disableDelay;
	NSString* _backgroundColor;
	AMSMetricsEvent* _impressionEvent;
	AMSUIWebNavigationBarModel* _navigationBar;
	NSString* _message;
	AMSUIWebClientContext* _context;
	CGSize _windowSize;

}

@property (nonatomic,retain) AMSUIWebClientContext * context;                           //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL disableDelay;                                         //@synthesize disableDelay=_disableDelay - In the implementation block
@property (nonatomic,retain) NSString * message;                                        //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) AMSUIWebNavigationBarModel * navigationBar;              //@synthesize navigationBar=_navigationBar - In the implementation block
@property (nonatomic,readonly) NSString * backgroundColor;                              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) AMSMetricsEvent * impressionEvent;                       //@synthesize impressionEvent=_impressionEvent - In the implementation block
@property (nonatomic,readonly) BOOL disableReappearPlaceholder; 
@property (nonatomic,readonly) CGSize windowSize;                                       //@synthesize windowSize=_windowSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(AMSUIWebClientContext *)context;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(NSString *)message;
-(id)initWithContext:(id)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)backgroundColor;
-(CGSize)windowSize;
-(AMSUIWebNavigationBarModel *)navigationBar;
-(AMSMetricsEvent *)impressionEvent;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(id)createViewController;
-(BOOL)disableReappearPlaceholder;
-(BOOL)disableDelay;
-(void)setDisableDelay:(BOOL)arg1 ;
@end

