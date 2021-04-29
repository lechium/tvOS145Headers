/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/TVApplicationController.h>
#import <TVMLKit/_TVAppDocumentControllerDelegate.h>

@class _TVAppDocumentController, NSString;

@interface TVSiriPluginApplicationController : TVApplicationController <_TVAppDocumentControllerDelegate> {

	BOOL _partialModeEnabled;
	BOOL _trackingTransition;
	_TVAppDocumentController* _searchDC;

}

@property (getter=isPartialModeEnabled,nonatomic,readonly) BOOL partialModeEnabled;              //@synthesize partialModeEnabled=_partialModeEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isPartialModeEnabled;
-(id)initWithContext:(id)arg1 window:(id)arg2 delegate:(id)arg3 ;
-(id)_findSearchDocumentController;
-(void)_togglePartialModeWithProgress:(double)arg1 duration:(double)arg2 completion:(/*^block*/id)arg3 ;
-(id)mediaQueryEvaluatorForAppDocumentController:(id)arg1 ;
-(void)didUpdateInteractiveTransitionWithFullScreenFraction:(double)arg1 ;
-(void)willEndInteractiveTransitionFromFullScreenFraction:(double)arg1 toFullScreenFraction:(double)arg2 velocity:(CGPoint)arg3 ;
-(void)appNavigationController:(id)arg1 willLoadAppDocumentWithController:(id)arg2 ;
@end

