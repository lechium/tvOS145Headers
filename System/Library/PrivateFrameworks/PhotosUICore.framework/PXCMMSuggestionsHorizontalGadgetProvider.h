/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXGadgetProvider.h>
#import <libobjc.A.dylib/PXSettingsKeyObserver.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXSectionedDataSourceManagerObserver.h>
#import <libobjc.A.dylib/PXForYouRankable.h>

@protocol PXCMMWorkflowPresenting;
@class PXCMMSuggestionsDataSourceManager, PXCPLStatusProvider, NSDate, NSString;

@interface PXCMMSuggestionsHorizontalGadgetProvider : PXGadgetProvider <PXSettingsKeyObserver, PXChangeObserver, PXSectionedDataSourceManagerObserver, PXForYouRankable> {

	PXCMMSuggestionsDataSourceManager* _dataSourceManager;
	BOOL _didGenerateGadgets;
	PXCPLStatusProvider* _cplStatusProvider;
	BOOL _cmmIsAvailable;
	id<PXCMMWorkflowPresenting> _workflowPresenter;
	NSDate* _cachedPriorityDate;

}

@property (nonatomic,retain) NSDate * cachedPriorityDate;                                  //@synthesize cachedPriorityDate=_cachedPriorityDate - In the implementation block
@property (nonatomic,readonly) id<PXCMMWorkflowPresenting> workflowPresenter;              //@synthesize workflowPresenter=_workflowPresenter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDate * priorityDate; 
@property (nonatomic,readonly) long long defaultPriority; 
@property (nonatomic,readonly) long long priorityType; 
@property (nonatomic,readonly) unsigned long long gadgetType; 
-(id)init;
-(id)initWithIdentifier:(id)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(long long)defaultPriority;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(BOOL)supportsDynamicRanking;
-(void)loadDataForGadgets;
-(unsigned long long)estimatedNumberOfGadgets;
-(void)generateGadgets;
-(unsigned long long)gadgetType;
-(id<PXCMMWorkflowPresenting>)workflowPresenter;
-(void)resetPriorityDate;
-(NSDate *)priorityDate;
-(long long)priorityType;
-(NSDate *)cachedPriorityDate;
-(void)setCachedPriorityDate:(NSDate *)arg1 ;
-(void)_updateGadgets;
-(id)initWithWorkflowPresenter:(id)arg1 ;
-(void)_configureDataSourceManager;
@end

