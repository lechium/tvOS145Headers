/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:43 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXGadgetProvider.h>
#import <libobjc.A.dylib/PXSectionedDataSourceManagerObserver.h>
#import <libobjc.A.dylib/PXForYouRankable.h>

@class PXMemoriesFeedWidgetDataSourceManager, NSDate, NSString;

@interface PXForYouMemoryGadgetProvider : PXGadgetProvider <PXSectionedDataSourceManagerObserver, PXForYouRankable> {

	BOOL _hasGeneratedGadgets;
	PXMemoriesFeedWidgetDataSourceManager* _dataSourceManager;
	NSDate* _cachedPriorityDate;

}

@property (nonatomic,retain) PXMemoriesFeedWidgetDataSourceManager * dataSourceManager;              //@synthesize dataSourceManager=_dataSourceManager - In the implementation block
@property (assign,nonatomic) BOOL hasGeneratedGadgets;                                               //@synthesize hasGeneratedGadgets=_hasGeneratedGadgets - In the implementation block
@property (nonatomic,retain) NSDate * cachedPriorityDate;                                            //@synthesize cachedPriorityDate=_cachedPriorityDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDate * priorityDate; 
@property (nonatomic,readonly) long long defaultPriority; 
@property (nonatomic,readonly) long long priorityType; 
@property (nonatomic,readonly) unsigned long long gadgetType; 
+(unsigned long long)maxMemoriesToFetch;
-(long long)defaultPriority;
-(PXMemoriesFeedWidgetDataSourceManager *)dataSourceManager;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(BOOL)supportsDynamicRanking;
-(void)loadDataForGadgets;
-(unsigned long long)estimatedNumberOfGadgets;
-(void)generateGadgets;
-(unsigned long long)gadgetType;
-(void)setDataSourceManager:(PXMemoriesFeedWidgetDataSourceManager *)arg1 ;
-(void)resetPriorityDate;
-(NSDate *)priorityDate;
-(long long)priorityType;
-(NSDate *)cachedPriorityDate;
-(void)setCachedPriorityDate:(NSDate *)arg1 ;
-(BOOL)hasGeneratedGadgets;
-(void)setHasGeneratedGadgets:(BOOL)arg1 ;
@end

